//
//  NSURL+Setting.m
//  BaseKit
//
//  Created by pcjbird on 16/6/20.
//  Copyright © 2016年 Zero Status. All rights reserved.
//

#import "NSURL+Setting.h"

@implementation NSURL (Setting)

+(NSURL *)mainSettingURL
{
    return [[self class] URLWithString:UIApplicationOpenSettingsURLString];
}

+(NSURL *)settingAboutURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=About"];
}

+(NSURL *)settingAccessibilityURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=ACCESSIBILITY"];
}

+(NSURL *)settingAirplaneModeURL
{
    return [[self class] URLWithString:@"prefs:root=AIRPLANE_MODE"];
}

+(NSURL *)settingAutoLockURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=AUTOLOCK"];
}

+(NSURL *)settingBrightnessURL
{
    return [[self class] URLWithString:@"prefs:root=Brightness"];
}

+(NSURL *)settingBluetoothURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=Bluetooth"];
}


+(NSURL *)settingDateTimeURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=DATE_AND_TIME"];
}

+(NSURL *)settingFaceTimeURL
{
    return [[self class] URLWithString:@"prefs:root=FACETIME"];
}

+(NSURL *)settingGeneralURL
{
    return [[self class] URLWithString:@"prefs:root=General"];
}

+(NSURL *)settingKeyboardURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=Keyboard"];
}

+(NSURL *)settingiCloudURL
{
    return [[self class] URLWithString:@"prefs:root=CASTLE"];
}

+(NSURL *)settingiCloudBackupURL
{
    return [[self class] URLWithString:@"prefs:root=CASTLE&path=STORAGE_AND_BACKUP"];
}

+(NSURL *)settingInternationalURL
{
   return [[self class] URLWithString:@"prefs:root=General&path=INTERNATIONAL"];
}

+(NSURL *)settingLocationServicesURL
{
   return [[self class] URLWithString:@"prefs:root=LOCATION_SERVICES"];
}

+(NSURL *)settingMusicURL
{
    return [[self class] URLWithString:@"prefs:root=MUSIC"];
}

+(NSURL *)settingMusicEqualizerURL
{
    return [[self class] URLWithString:@"prefs:root=MUSIC&path=EQ"];
}


+(NSURL *)settingMusicVolumeLimitURL
{
    return [[self class] URLWithString:@"prefs:root=MUSIC&path=VolumeLimit"];
}

+(NSURL *)settingNetworkURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=Network"];
}

+(NSURL *)settingNikePlusiPodURL
{
    return [[self class] URLWithString:@"prefs:root=NIKE_PLUS_IPOD"];
}

-(NSURL *)settingNotesURL
{
    return [[self class] URLWithString:@"prefs:root=NOTES"];
}

+(NSURL *)settingNotificationURL
{
    return [[self class] URLWithString:@"prefs:root=NOTIFICATIONS_ID"];
}


+(NSURL *)settingPhoneURL
{
    return [[self class] URLWithString:@"prefs:root=Phone"];
}

+(NSURL *)settingPhotosURL
{
    return [[self class] URLWithString:@"prefs:root=Photos"];
}

+(NSURL *)settingProfileURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=ManagedConfigurationList"];
}

+(NSURL *)settingResetURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=Reset"];
}

+(NSURL *)settingSafariURL
{
    return [[self class] URLWithString:@"prefs:root=Safari"];
}

+(NSURL *)settingSiriURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=Assistant"];
}

+(NSURL *)settingSoundsURL
{
    return [[self class] URLWithString:@"prefs:root=Sounds"];
}

+(NSURL *)settingSoftwareUpdateURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=SOFTWARE_UPDATE_LINK"];
}

+(NSURL *)settingStoreURL
{
    return [[self class] URLWithString:@"prefs:root=STORE"];
}

+(NSURL *)settingTwitterURL
{
    return [[self class] URLWithString:@"prefs:root=TWITTER"];
}

+(NSURL *)settingUsageURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=USAGE"];
}

+(NSURL *)settingVPNURL
{
    return [[self class] URLWithString:@"prefs:root=General&path=USAGE"];
}

+(NSURL *)settingWallpaperURL
{
    return [[self class] URLWithString:@"prefs:root=Wallpaper"];
}

+(NSURL *)settingWiFiURL
{
    return [[self class] URLWithString:@"prefs:root=WIFI"];
}

@end
