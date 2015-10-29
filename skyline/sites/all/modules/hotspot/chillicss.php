<?php
/**
 * Drupal HotSpot Module * http://drupal.org/project/Hotspot
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the GNU General Public License.
 */

$color1 = '#87B3FF';
$color2 = '#87B3FF';
$color3 = 'white';

?>

#logonMessage {
  padding: 0px 0px 0px 20px;
}

#logonForm {
  margin: auto;
  text-align: left;
  padding: 20px 0 30px 0;
}

#locationName {
  font-size: 120%;
  font-weight: bold;
  color: #333;
}

#passwordLabel {
  padding-left: 10px;
}

#noLocation {
  color: #333;
}

#chilliPage {
  padding: 10px 0px 0px 0px;
  color: #333;
}

#username, #password {
  border: 1px solid <?php print $color1 ?>;
  color: #333;
}

#usernameLabel.padded {
  padding-left: 14px;
  padding-right: 7px;
}

#passwordLabel.padded {
  padding-left: 7px;
  padding-right: 7px;
}

.connectRow {
  padding-top: 7px;
}

#connectButton {
  margin-left: 14px;
}

.chilliLabel, .statusMessage {
  font-weight: bold;
  color: #333;
}

.chilliValue {
  color: #333;
}

tbody {
 border: 0;
}

#tableTab {
  border: 1px solid <?php print $color1 ?>;
  width: 80%;
}

#tableTab table {
  margin: 0;
}

#navTable, #navTable td {
  margin: 0;
}

.navRow {
  padding: 0;
  margin: 0;
}

.tableTabBottom {
  padding: 10px 10px 0px 10px;
}

.tableTabItem {
  background-color: <?php print $color1 ?>;
  font-weight: bold;
  color: <?php print $color3 ?>;
  padding: 2px 8px 2px 8px;
  border-top: 1px solid <?php print $color1 ?>;
  border-left: 1px solid <?php print $color1 ?>;
  border-right: 1px solid <?php print $color1 ?>;
  border-bottom: 1px solid <?php print $color2 ?>;
  cursor: pointer;
  cursor: hand;
  white-space: nowrap;
}

.tableTabItem-selected {
  font-weight: bold;
  color: #000;
  background-color: white;
  border-top: 1px solid <?php print $color2 ?>;
  border-left: 1px solid <?php print $color2 ?>;
  border-right: 1px solid <?php print $color2 ?>;
  border-bottom: 1px solid white;
  padding: 2px 8px 2px 8px;
  cursor: default;
  white-space: nowrap;
}

.tableTabFirst {
  background-color: <?php print $color1 ?>;
  border-bottom: 1px solid <?php print $color2 ?>;
  width: 2%;
}

.tableTabLast {
  background-color: <?php print $color1 ?>;
  border-bottom: 1px solid <?php print $color2 ?>;
  width: 95%;
}

.statusTable tr td {
  padding-right: 10px;
}

#coova-icon {
  background: url(coova-icon.gif);
  width: 16px;
  height: 16px;
}

#statusPopup {
  width: 100%;
  height: 100%;
  text-align: center;
  margin: 0;
}

#statusPopup #tableTab { 
  width: 95%;
  margin: auto;
}

