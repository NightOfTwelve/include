/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "_UISettingsKeyObserver.h"

@class NSMutableDictionary, SBLockScreenPlugin, SBLockScreenPluginLoader, SBLockScreenPluginTransitionFactory, SBLockScreenTestPluginSettings, SBLockScreenViewController, UIWindow;

@interface SBLockScreenPluginController : NSObject <_UISettingsKeyObserver>
{
    SBLockScreenPluginLoader *_pluginLoader;
    NSMutableDictionary *_plugins;
    SBLockScreenPlugin *_activePlugin;
    SBLockScreenPlugin *_displayedPlugin;
    SBLockScreenPluginTransitionFactory *_transitionFactory;
    id <SBLockScreenPluginControllerDelegate> _delegate;
    SBLockScreenViewController *_lockScreenViewController;
    BOOL _pluginControllerReceivedViewWillDisappear;
    BOOL _pluginControllerReceivedViewDidDisappear;
    UIWindow *_previousWindow;
    SBLockScreenTestPluginSettings *_testSettings;
    BOOL _lockScreenHasNotifications;
    BOOL _allowDisplayOfPlugins;
    float _fadeDuration;
}

@property float fadeDuration; // @synthesize fadeDuration=_fadeDuration;
@property(nonatomic) BOOL allowDisplayOfPlugins; // @synthesize allowDisplayOfPlugins=_allowDisplayOfPlugins;
@property(nonatomic) BOOL lockScreenHasNotifications; // @synthesize lockScreenHasNotifications=_lockScreenHasNotifications;
@property(nonatomic) id <SBLockScreenPluginControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBLockScreenPluginLoader *pluginLoader; // @synthesize pluginLoader=_pluginLoader;
@property(nonatomic) SBLockScreenViewController *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)_pluginHidesNotificationList:(id)arg1;
- (void)_updateNotificationListForNewlyActivatedPlugin;
- (void)_transitionFromNotificationListToExclusionaryPlugin;
- (void)_transitionFromExclusionaryPluginToNotificationList;
- (void)_notifyDisplayedPluginRemovedFromWindow;
- (void)_notifyDisplayedPluginAddedToWindow;
- (void)_lockScreenDidMoveToWindow;
- (void)_lockScreenWillMoveToWindow;
- (void)_disablePluginsPassingTest:(id)arg1 withReason:(void)arg2;
- (void)_removeActivePlugin;
- (void)_removeDisplayedPlugin;
- (void)_handleUIRelock;
- (void)handleUIUnlock;
- (id)_pluginForName:(id)arg1 controller:(id)arg2;
- (void)_loadLockScreenPluginWithName:(id)arg1 activationContext:(id)arg2;
- (void)_handleApplicationExit:(id)arg1;
- (void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2;
- (void)_handlePluginDisable:(id)arg1;
- (id)_transitionContextWithOldPlugin:(id)arg1 newPlugin:(id)arg2;
- (void)_updateCallPluginPresentationStyle;
- (void)_setEffectivePresentationStyleForDisplayedPluginIfNecessary;
- (void)_setDisplayedPlugin:(id)arg1;
- (void)_setActivePlugin:(id)arg1;
- (BOOL)isPhonePluginVisible;
- (BOOL)isPhonePluginActive;
- (void)_refreshLockScreenPlugin;
- (void)reset;
- (void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2;
- (id)_pluginView;
- (id)_lockScreenView;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonHeld;
- (BOOL)wantsMenuButtonHeldEvent;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonTap;
- (BOOL)sendEventToPlugin:(id)arg1;
- (id)_highestPriorityPluginIgnoringViewDisplay:(BOOL)arg1;
- (BOOL)pluginControllerShouldAnimateOthersResumption;
- (struct CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(int)arg2;
- (BOOL)activePluginHidesNotificationList;
- (id)activePluginBundleName;
- (id)displayedPlugin;
- (id)activePlugin;
- (BOOL)isPluginVisible;
- (void)dealloc;
- (void)_addObservers;
- (id)initWithLockScreenViewController:(id)arg1;

@end
