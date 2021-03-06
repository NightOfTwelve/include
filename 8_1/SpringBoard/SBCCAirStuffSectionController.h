//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBControlCenterSectionViewController.h"

#import "MPAVRoutingControllerDelegate.h"
#import "SFAirDropDiscoveryActionSheetDelegate.h"
#import "SFAirDropDiscoveryControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class BSTimer, MPAVRoutingController, MPAVRoutingSheet, MPAVRoutingViewController, MPAudioVideoRoutingPopoverController, NSString, SBCCButtonLikeSectionView, SFAirDropDiscoveryController;

@interface SBCCAirStuffSectionController : SBControlCenterSectionViewController <MPAVRoutingControllerDelegate, UIPopoverControllerDelegate, SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryActionSheetDelegate, UIActionSheetDelegate>
{
    SBCCButtonLikeSectionView *_airPlaySection;
    SBCCButtonLikeSectionView *_airDropSection;
    MPAVRoutingController *_airPlayController;
    MPAVRoutingSheet *_airPlayModalSheet;
    MPAVRoutingViewController *_airPlayViewController;
    MPAudioVideoRoutingPopoverController *_airPlayPopoverController;
    SFAirDropDiscoveryController *_airDropDiscoveryController;
    BOOL _isVisible;
    BOOL _airPlayWasPreviouslyEnabled;
    BSTimer *_resetTimer;
    BSTimer *_airPlayTimer;
    BOOL _airPlayEnabled;
    BOOL _airDropEnabled;
}

+ (id)defaultFontTight;
+ (id)defaultFont;
+ (Class)viewClass;
@property(nonatomic) BOOL airDropEnabled; // @synthesize airDropEnabled=_airDropEnabled;
@property(nonatomic) BOOL airPlayEnabled; // @synthesize airPlayEnabled=_airPlayEnabled;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)discoveryController:(id)arg1 actionSheetDidDismiss:(id)arg2;
- (void)discoveryController:(id)arg1 actionSheetWillDismiss:(id)arg2;
- (void)discoveryControllerVisibilityDidChange:(id)arg1;
- (void)discoveryControllerSettingsDidChange:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)_dismissAirplayControllerAnimated:(BOOL)arg1;
- (void)_debugAirplaneStateDidChangeNotification:(id)arg1;
- (void)_debugWifiStateDidChangeNotification:(id)arg1;
- (void)_updateAirDropControlAsEnabled:(BOOL)arg1;
- (void)_updateForAirDropStateChange;
- (void)_updateAirPlayControlAsEnabled:(BOOL)arg1;
- (void)_updateForAirPlayStateChange;
- (void)_airPlayDoneButtonTapped:(id)arg1;
- (void)_airDropTapped:(id)arg1;
- (void)_airPlayTapped:(id)arg1;
- (void)_showAirPlayView:(id)arg1;
- (void)_noteSectionEnabledStateDidChange;
- (void)_updateSubsectionVisibilityAnimated:(BOOL)arg1;
- (void)_updateLayoutForSizeCategoryChange;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)viewDidLoad;
- (id)view;
- (BOOL)enabledForOrientation:(int)arg1;
- (struct CGSize)contentSizeForOrientation:(int)arg1;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

