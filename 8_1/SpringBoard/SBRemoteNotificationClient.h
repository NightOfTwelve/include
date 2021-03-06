//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSDate, NSString;

@interface SBRemoteNotificationClient : NSObject <NSCoding>
{
    NSString *_bundleIdentifier;
    NSString *_environment;
    NSData *_lastKnownDeviceToken;
    NSDate *_missingDate;
    BOOL _backgroundDeliveryDisabled;
    int _dayOfLastNewsstandPush;
    unsigned int _dailyCountOfNewsstandPushes;
    BOOL _backgroundAppRefreshAllowed;
    BOOL _wantsPush;
    NSString *_pushDisabledReason;
}

@property(nonatomic, getter=doesWantPush) BOOL wantsPush; // @synthesize wantsPush=_wantsPush;
@property(nonatomic, getter=isBackgroundAppRefreshAllowed) BOOL backgroundAppRefreshAllowed; // @synthesize backgroundAppRefreshAllowed=_backgroundAppRefreshAllowed;
@property(retain, nonatomic) NSString *pushDisabledReason; // @synthesize pushDisabledReason=_pushDisabledReason;
@property(nonatomic) unsigned int dailyCountOfNewsstandPushes; // @synthesize dailyCountOfNewsstandPushes=_dailyCountOfNewsstandPushes;
@property(nonatomic) int dayOfLastNewsstandPush; // @synthesize dayOfLastNewsstandPush=_dayOfLastNewsstandPush;
@property(nonatomic) BOOL backgroundDeliveryDisabled; // @synthesize backgroundDeliveryDisabled=_backgroundDeliveryDisabled;
@property(retain, nonatomic) NSDate *missingDate; // @synthesize missingDate=_missingDate;
@property(retain, nonatomic) NSData *lastKnownDeviceToken; // @synthesize lastKnownDeviceToken=_lastKnownDeviceToken;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic, getter=isNewsstandApplication) BOOL newsstandApplication;
- (BOOL)isNewsstandPushEnabled;
@property(readonly, nonatomic) BOOL supportsBackgroundAppRefresh;
- (BOOL)allowsUserNotifications;
- (id)application;
@property(readonly, nonatomic, getter=isPushEnabled) BOOL pushEnabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)wantsPushWithCoder:(id)arg1;
- (BOOL)backgroundAppRefreshAllowedForBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;

@end

