OS2Web Meetings
==============================

Description
-----------
A light feature for import and presentation of meeting agendas and summaries.
This feature contains content types, vocabularies and views. This version of
the OS2Web Meetings feature does not depend on OS2Web core.

A cron job generates search data on updated meetings and store this data on
the meeting nodes. The search data is generated from bullet titles and body of
meeting bullet attachments.

Dependencies
-----------
Date
Entity Reference
Features
File
List
Node Reference
Number
Strongarm
Taxonomy
Views

Installation
-----------
This module should reside in the modules directory of the installation,
most commonly profiles/os2web/modules/, but alternately in sites/all/modules
(This could be for development purposes).

Setup the cron job to update meeting search data on changed meetings.

See https://github.com/OS2web/os2web/wiki for further instructions.

This module can also be installed with drush make in your install profile.

Additional Info
---------------
This repository should be governed using Git Flow. for more information see
http://nvie.com/posts/a-successful-git-branching-model/
