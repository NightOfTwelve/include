/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class SUDescriptor;

@interface SBBaseSoftwareUpdateAlertItem : SBAlertItem
{
    SUDescriptor *_descriptor;
}

@property(readonly, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (BOOL)forcesModalAlertAppearance;
- (void)activateDisplayWithURL:(id)arg1;
- (void)activateSoftwareUpdateSettingsDisplay;
- (id)updateName;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1;

@end

