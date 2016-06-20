//
//  NSURL+Setting.h
//  BaseKit
//
//  Created by pcjbird on 16/6/20.
//  Copyright © 2016年 Zero Status. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (Setting)

/*!
 * 设置界面主界面
 */
+(NSURL *)mainSettingURL;

/*!
 * About URL
 * About — prefs:root=General&path=About
 */
+(NSURL *)settingAboutURL;

/*!
 * Accessibility URL
 * Accessibility — prefs:root=General&path=ACCESSIBILITY
 */
+(NSURL *)settingAccessibilityURL;

/*!
 * 飞行模式URL
 * Airplane Mode On — prefs:root=AIRPLANE_MODE
 */
+(NSURL *)settingAirplaneModeURL;

/*!
 * 自动锁屏时间设置URL
 * Auto-Lock — prefs:root=General&path=AUTOLOCK
 */
+(NSURL *)settingAutoLockURL;

/*!
 * 屏幕亮度设置URL
 * Brightness — prefs:root=Brightness
 */
+(NSURL *)settingBrightnessURL;

/*!
 * 蓝牙设置URL
 * Bluetooth — prefs:root=General&path=Bluetooth
 */
+(NSURL *)settingBluetoothURL;

/*!
 * 日期与时间设置URL
 * Date & Time — prefs:root=General&path=DATE_AND_TIME
 */
+(NSURL *)settingDateTimeURL;

/*!
 * FaceTime设置URL
 * FaceTime — prefs:root=FACETIME
 */
+(NSURL *)settingFaceTimeURL;

/*!
 * 通用设置URL
 * General — prefs:root=General
 */
+(NSURL *)settingGeneralURL;

/*!
 * 键盘设置URL
 * Keyboard — prefs:root=General&path=Keyboard
 */
+(NSURL *)settingKeyboardURL;

/*!
 * iCloud设置URL
 * iCloud — prefs:root=CASTLE
 */
+(NSURL *)settingiCloudURL;

/*!
 * iCloud存储与备份设置URL
 * iCloud Storage & Backup — prefs:root=CASTLE&path=STORAGE_AND_BACKUP
 */
+(NSURL *)settingiCloudBackupURL;

/*!
 * International语言设置URL
 * International — prefs:root=General&path=INTERNATIONAL
 */
+(NSURL *)settingInternationalURL;

/*!
 * Location Services设置URL
 * Location Services — prefs:root=LOCATION_SERVICES
 */
+(NSURL *)settingLocationServicesURL;

/*!
 * Music设置URL
 * Music — prefs:root=MUSIC
 */
+(NSURL *)settingMusicURL;

/*!
 * Music Equalizer设置URL
 * Music Equalizer — prefs:root=MUSIC&path=EQ
 */
+(NSURL *)settingMusicEqualizerURL;

/*!
 * Music Volume Limit设置URL
 * Music Volume Limit — prefs:root=MUSIC&path=VolumeLimit
 */
+(NSURL *)settingMusicVolumeLimitURL;


/*!
 * 网络设置URL
 * Network — prefs:root=General&path=Network
 */
+(NSURL *)settingNetworkURL;

/*!
 * Nike + iPod设置URL
 * Nike + iPod — prefs:root=NIKE_PLUS_IPOD
 */
+(NSURL *)settingNikePlusiPodURL;

/*!
 * Notes设置URL
 * Notes — prefs:root=NOTES
 */
-(NSURL *)settingNotesURL;


/*!
 * 通知设置URL
 * Notification — prefs:root=NOTIFICATIONS_ID
 */
+(NSURL *)settingNotificationURL;

/*!
 * 电话设置URL
 * Phone — prefs:root=Phone
 */
+(NSURL *)settingPhoneURL;

/*!
 * 相册设置URL
 * Photos — prefs:root=Photos
 */
+(NSURL *)settingPhotosURL;


/*!
 * 描述文件设置URL
 * Profile — prefs:root=General&path=ManagedConfigurationList
 */
+(NSURL *)settingProfileURL;

/*!
 * 重置设置URL
 * Reset — prefs:root=General&path=Reset
 */
+(NSURL *)settingResetURL;

/*!
 * Safari设置URL
 * Safari — prefs:root=Safari
 */
+(NSURL *)settingSafariURL;


/*!
 * Siri设置URL
 * Siri — prefs:root=General&path=Assistant
 */
+(NSURL *)settingSiriURL;

/*!
 * 声音/铃声设置URL
 * Sounds — prefs:root=Sounds
 */
+(NSURL *)settingSoundsURL;


/*!
 * 系统更新设置URL
 * Software Update — prefs:root=General&path=SOFTWARE_UPDATE_LINK
 */
+(NSURL *)settingSoftwareUpdateURL;

/*!
 * Store设置URL
 * Store — prefs:root=STORE
 */
+(NSURL *)settingStoreURL;

/*!
 * Twitter设置URL
 * Twitter — prefs:root=TWITTER
 */
+(NSURL *)settingTwitterURL;

/*!
 * 用量设置URL
 * Usage — prefs:root=General&path=USAGE
 */
+(NSURL *)settingUsageURL;

/*!
 * VPN设置URL
 * VPN — prefs:root=General&path=Network/VPN
 */
+(NSURL *)settingVPNURL;

/*!
 * 壁纸设置URL
 * Wallpaper — prefs:root=Wallpaper
 */
+(NSURL *)settingWallpaperURL;

/*!
 * WIFI设置URL
 * Wi-Fi — prefs:root=WIFI
 */
+(NSURL *)settingWiFiURL;

@end
