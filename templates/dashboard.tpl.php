<?php

/**
 * @file
 * Dashboard File for the iportal system.
 */
global $user, $base_url;

?>
<div class="col-sm-12">
<div class="row">
<?php
if ($user->uid != 0) {
if(array_key_exists(4, $user->roles)){
?>
<div class="col-sm-6 col-md-4 col-lg-2">
<?php
$title = '<i class="fa fa fa-users fa-3x"></i><span>' . t('administer users') . '</span>';
print l($title, 'manage_users', array('attributes' =>
        array('class' => array('quick-btn', 'users')), 'html' => TRUE));
?> </div> <?php
}
foreach(node_type_get_names() as $content_type_machine_name => $label){
    if(dashboard_access_check($content_type_machine_name)) {
    ?>
<div class="col-sm-6 col-md-4 col-lg-2">
<?php
$title = '<i class="fa fa fa-cogs fa-3x"></i><span>' . t($label) . '</span>';
print l($title, 'manage/' . $content_type_machine_name, array('attributes' =>
        array('class' => array('quick-btn', $content_type_machine_name)), 'html' => TRUE));
?> </div> <?php
     }
  }
}
?>
</div>
</div>
