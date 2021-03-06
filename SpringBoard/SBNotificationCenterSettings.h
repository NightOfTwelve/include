/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_UISettings.h"

@class SBBounceSettings;

@interface SBNotificationCenterSettings : _UISettings
{
    SBBounceSettings *_bounceSettings;
    CGFloat _modeButtonTintLevel;
    CGFloat _modeButtonTintAlpha;
    CGFloat _modeLabelTintLevel;
    CGFloat _modeLabelTintAlpha;
    double _grabberAnimationDuration;
}

+ (id)settingsControllerModule;
@property(nonatomic) CGFloat modeLabelTintAlpha; // @synthesize modeLabelTintAlpha=_modeLabelTintAlpha;
@property(nonatomic) CGFloat modeLabelTintLevel; // @synthesize modeLabelTintLevel=_modeLabelTintLevel;
@property(nonatomic) CGFloat modeButtonTintAlpha; // @synthesize modeButtonTintAlpha=_modeButtonTintAlpha;
@property(nonatomic) CGFloat modeButtonTintLevel; // @synthesize modeButtonTintLevel=_modeButtonTintLevel;
@property double grabberAnimationDuration; // @synthesize grabberAnimationDuration=_grabberAnimationDuration;
@property(retain, nonatomic) SBBounceSettings *bounceSettings; // @synthesize bounceSettings=_bounceSettings;
- (void)setDefaultValues;

@end

