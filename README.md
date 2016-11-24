Latest Version 
--------------
##### _Jul 14st, 2016_ - v1.3

Getting Started
---------------
Check out our [official documentation](https://www.devtodev.com/help/96/devtodev_sdk_for_mac_os_integration/) to learn how to install the library on your IDE. You will also learn how to make use of all the features we currently support!

Changelog
---------
See [releases](https://github.com/devtodev-analytics/macos-sdk/releases).

#### Version 1.3
* Added new "Progression event". First of all, the event is used for the games with short (within one game session) locations, game levels. The event allows you to gather data on passing the locations and get statistics on parameters which vary during the the location passing.

#### Version 1.2
* User profile feature is added. Here you can store properties about a specific user.
 - New methods for managing preset and custom properties of user profile are added.
 - Old methods: age, gender and cheater, are removed. These properties are moved to user profile.
* Initial referrer data tracking method is added

#### Version 1.1.5
* Added possibility to call events before SDK initialization

#### Version 1.1.4
* Encoding data was changed

#### Version 1.1.3
* Enable https

#### Version 1.1.2
* Improvement of session handling
* Improvement of the user identification in cross-platform projects

#### Version 1.1.1
* Improved encoding performance

#### Version 1.1
* SDK preparation for usage in cross-platform projects: added methods for user initialization (UserID, ReplaceUserId, SetCurrentLevel).
* Other negligeable improvements.
