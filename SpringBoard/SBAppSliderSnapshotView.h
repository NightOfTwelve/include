/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "SBAppSwitcherPageContentView.h"

@class NSObject<OS_dispatch_queue>, NSString, SBApplication, SBFakeStatusBarView, SBFakeStatusBarViewCache, SBSnapshotImageInfo, SBWallpaperEffectView, UIImageView;

@interface SBAppSliderSnapshotView : UIView <SBAppSwitcherPageContentView>
{
    SBApplication *_application;
    UIView *_containerView;
    SBWallpaperEffectView *_wallpaperEffectView;
    SBSnapshotImageInfo *_snapshotImageInfo;
    UIImageView *_snapshotImage;
    struct CGSize _imageSize;
    SBFakeStatusBarViewCache *_statusBarCache;
    SBFakeStatusBarView *_statusBar;
    NSString *_statusBarCacheKey;
    BOOL _isVisible;
    BOOL _invalidated;
    BOOL _needsZoomFilter;
    BOOL _loadedImage;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    int _orientation;
}

+ (id)_fallbackDefaultBackgroundColor;
+ (id)appSliderSnapshotViewForApplication:(id)arg1 orientation:(int)arg2 loadAsync:(BOOL)arg3 withQueue:(id)arg4 statusBarCache:(id)arg5;
@property(nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) SBSnapshotImageInfo *snapshotImageInfo; // @synthesize snapshotImageInfo=_snapshotImageInfo;
@property(retain, nonatomic) SBApplication *application; // @synthesize application=_application;
- (void)_viewDismissing:(id)arg1;
- (void)_viewPresenting:(id)arg1;
- (void)_updateStatusbarTranslucency;
- (void)_updateTranslucency;
- (id)_defaultImageforImageInfo:(id)arg1;
- (id)_snapshotImageForImageInfo:(id)arg1;
- (struct CGImage *)_cgImageForSnapshotInfo:(id)arg1;
- (id)_cachedImageForImageInfos:(id)arg1 foundInfo:(out id *)arg2;
- (struct CGAffineTransform)_rotationTransformForOrientation;
- (int)_containerOrientation;
- (struct CGRect)_snapshotFrame;
- (void)_snapshotImageLoaded:(struct CGImage *)arg1 withInfo:(id)arg2;
- (void)_loadImageAsyncFromSnapshotInfo:(id)arg1;
- (BOOL)_queue_keepGoing;
- (struct CGImage *)_queue_createDecodedImageIfPossible:(struct CGImage *)arg1;
- (id)_snapshotImage;
- (id)_imageAtPath:(id)arg1 preferredScale:(CGFloat)arg2 orientation:(out int *)arg3;
- (id)_snapshotInfos;
- (id)_snapshotInfoForDefaultPNG;
- (id)_snapshotInfoForSnapshotFromInfos:(id)arg1;
- (id)_cachedSnapshotForSnapshotInfos:(id)arg1 foundInfo:(out id *)arg2;
- (id)_snapshotName;
- (void)_loadSnapshotAsync;
- (void)_loadSnapshotSync;
- (void)invalidate;
- (void)setOrientation:(int)arg1 orientationBehavior:(int)arg2;
- (void)layoutSubviews;
- (void)_layoutContainer;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)_layoutStatusBar;
- (id)_statusBarCacheKeyForStyleRequest:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 orientation:(int)arg2 async:(BOOL)arg3 withQueue:(id)arg4 statusBarCache:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

