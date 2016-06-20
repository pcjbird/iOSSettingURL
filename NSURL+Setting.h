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
@property(nonatomic, strong, readonly)NSURL* mainSettingURL;

/*!
 * About URL
 * About — prefs:root=General&path=About
 */
@property(nonatomic, strong, readonly)NSURL*settingAboutURL;

/*!
 * Accessibility URL
 * Accessibility — prefs:root=General&path=ACCESSIBILITY
 */
@property(nonatomic, strong, readonly)NSURL*settingAccessibilityURL;

/*!
 * 飞行模式URL
 * Airplane Mode On — prefs:root=AIRPLANE_MODE
 */
@property(nonatomic, strong, readonly)NSURL*settingAirplaneModeURL;

/*!
 * 自动锁屏时间设置URL
 * Auto-Lock — prefs:root=General&path=AUTOLOCK
 */
@property(nonatomic, strong, readonly)NSURL*settingAutoLockURL;

/*!
 * 屏幕亮度设置URL
 * Brightness — prefs:root=Brightness
 */
@property(nonatomic, strong, readonly)NSURL*settingBrightnessURL;

/*!
 * 蓝牙设置URL
 * Bluetooth — prefs:root=General&path=Bluetooth
 */
@property(nonatomic, strong, readonly)NSURL*settingBluetoothURL;

/*!
 * 日期与时间设置URL
 * Date & Time — prefs:root=General&path=DATE_AND_TIME
 */
@property(nonatomic, strong, readonly)NSURL*settingDateTimeURL;

/*!
 * FaceTime设置URL
 * FaceTime — prefs:root=FACETIME
 */
@property(nonatomic, strong, readonly)NSURL*settingFaceTimeURL;

/*!
 * 通用设置URL
 * General — prefs:root=General
 */
@property(nonatomic, strong, readonly)NSURL*settingGeneralURL;

/*!
 * 键盘设置URL
 * Keyboard — prefs:root=General&path=Keyboard
 */
@property(nonatomic, strong, readonly)NSURL*settingKeyboardURL;

/*!
 * iCloud设置URL
 * iCloud — prefs:root=CASTLE
 */
@property(nonatomic, strong, readonly)NSURL*settingiCloudURL;

/*!
 * iCloud存储与备份设置URL
 * iCloud Storage & Backup — prefs:root=CASTLE&path=STORAGE_AND_BACKUP
 */
@property(nonatomic, strong, readonly)NSURL*settingiCloudBackupURL;

/*!
 * International语言设置URL
 * International — prefs:root=General&path=INTERNATIONAL
 */
@property(nonatomic, strong, readonly)NSURL*settingInternationalURL;

/*!
 * Location Services设置URL
 * Location Services — prefs:root=LOCATION_SERVICES
 */
@property(nonatomic, strong, readonly)NSURL*settingLocationServicesURL;

/*!
 * Music设置URL
 * Music — prefs:root=MUSIC
 */
@property(nonatomic, strong, readonly)NSURL*settingMusicURL;

/*!
 * Music Equalizer设置URL
 * Music Equalizer — prefs:root=MUSIC&path=EQ
 */
@property(nonatomic, strong, readonly)NSURL*settingMusicEqualizerURL;

/*!
 * Music Volume Limit设置URL
 * Music Volume Limit — prefs:root=MUSIC&path=VolumeLimit
 */
@property(nonatomic, strong, readonly)NSURL*settingMusicVolumeLimitURL;


/*!
 * 网络设置URL
 * Network — prefs:root=General&path=Network
 */
@property(nonatomic, strong, readonly)NSURL*settingNetworkURL;

/*!
 * Nike + iPod设置URL
 * Nike + iPod — prefs:root=NIKE_PLUS_IPOD
 */
@property(nonatomic, strong, readonly)NSURL*settingNikePlusiPodURL;

/*!
 * Notes设置URL
 * Notes — prefs:root=NOTES
 */
@property(nonatomic, strong, readonly)NSURL*settingNotesURL;


/*!
 * 通知设置URL
 * Notification — prefs:root=NOTIFICATIONS_ID
 */
@property(nonatomic, strong, readonly)NSURL*settingNotificationURL;

/*!
 * 电话设置URL
 * Phone — prefs:root=Phone
 */
@property(nonatomic, strong, readonly)NSURL*settingPhoneURL;

/*!
 * 相册设置URL
 * Photos — prefs:root=Photos
 */
@property(nonatomic, strong, readonly)NSURL*settingPhotosURL;


/*!
 * 描述文件设置URL
 * Profile — prefs:root=General&path=ManagedConfigurationList
 */
@property(nonatomic, strong, readonly)NSURL*settingProfileURL;

/*!
 * 重置设置URL
 * Reset — prefs:root=General&path=Reset
 */
@property(nonatomic, strong, readonly)NSURL*settingResetURL;

/*!
 * Safari设置URL
 * Safari — prefs:root=Safari
 */
@property(nonatomic, strong, readonly)NSURL*settingSafariURL;


/*!
 * Siri设置URL
 * Siri — prefs:root=General&path=Assistant
 */
@property(nonatomic, strong, readonly)NSURL*settingSiriURL;

/*!
 * 声音/铃声设置URL
 * Sounds — prefs:root=Sounds
 */
@property(nonatomic, strong, readonly)NSURL*settingSoundsURL;


/*!
 * 系统更新设置URL
 * Software Update — prefs:root=General&path=SOFTWARE_UPDATE_LINK
 */
@property(nonatomic, strong, readonly)NSURL*settingSoftwareUpdateURL;

/*!
 * Store设置URL
 * Store — prefs:root=STORE
 */
@property(nonatomic, strong, readonly)NSURL*settingStoreURL;

/*!
 * Twitter设置URL
 * Twitter — prefs:root=TWITTER
 */
@property(nonatomic, strong, readonly)NSURL*settingTwitterURL;

/*!
 * 用量设置URL
 * Usage — prefs:root=General&path=USAGE
 */
@property(nonatomic, strong, readonly)NSURL*settingUsageURL;

/*!
 * VPN设置URL
 * VPN — prefs:root=General&path=Network/VPN
 */
@property(nonatomic, strong, readonly)NSURL*settingVPNURL;

/*!
 * 壁纸设置URL
 * Wallpaper — prefs:root=Wallpaper
 */
@property(nonatomic, strong, readonly)NSURL*settingWallpaperURL;

/*!
 * WIFI设置URL
 * Wi-Fi — prefs:root=WIFI
 */
@property(nonatomic, strong, readonly)NSURL*settingWiFiURL;

@end
