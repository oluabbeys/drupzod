
Drupal HotSpot Module: for use with CoovaChilli:
http://www.coova.org/CoovaChilli

------------------------------------------------------

Checking out the module from subversion:

 cd /path/to/drupal/modules/
 svn co http://dev.coova.org/svn/drupal-hotspot hotspot

 goto http://<your.drupal.com>/?q=admin/settings/hotspot

------------------------------------------------------

Configure your CoovaChilli with:

in /etc/chilli/config:

HS_UAMSERVER=<your drupal server name>
HS_UAMFORMAT="http://\$HS_UAMSERVER/?q=hotspot"
HS_RADIUS=<radius server>
HS_RADSECRET=<shared secret>
HS_UAMSECRET=

or, more directly in chilli.conf:

radiusserver1   <radius server>
radiussecret    <shared secret>
uamserver       http://your.drupal.com/?q=hotspot

(with no uamsecret defined)

------------------------------------------------------
Copyright 2008 (c) David Bird <david@coova.com>
Licensed under the Gnu Public License.
