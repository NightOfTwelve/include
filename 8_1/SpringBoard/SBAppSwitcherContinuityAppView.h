//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBAppSwitcherPageContentView.h"

@class NSString, SBAppSwitcherStatusBarViewCache, SBWallpaperEffectView, SBZoomView, UIView<SBAppSwitcherCacheVended>;

@interface SBAppSwitcherContinuityAppView : UIView <SBAppSwitcherPageContentView>
{
    UIView *_containerView;
    SBWallpaperEffectView *_wallpaperView;
    UIView<SBAppSwitcherCacheVended> *_fakeStatusBarView;
    SBAppSwitcherStatusBarViewCache *_statusBarCache;
    NSString *_bundleIdentifier;
    SBZoomView *_zoomView;
    int _orientation;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void)_viewDismissing:(id)arg1;
- (void)_willAnimateDismiss:(id)arg1;
- (struct CGAffineTransform)_rotationTransformForOrientation:(int)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 bundleIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

