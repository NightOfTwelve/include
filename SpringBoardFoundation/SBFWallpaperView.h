/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>
#import "_UISettingsKeyObserver-Protocol.h"

@class NSTimer, SBFWallpaperParallaxSettings, SBFWallpaperSettings, UIColor, UIImage, UIImageView, _UILegibilitySettings, _UILegibilitySettingsProvider;

@interface SBFWallpaperView : UIView <_UISettingsKeyObserver>
{
    SBFWallpaperSettings *_wallpaperSettings;
    UIImageView *_topGradientView;
    UIImageView *_bottomGradientView;
    UIView *_parallaxView;
    UIView *_parallaxCorrectionView;
    CGFloat _parallaxScaleFactor;
    NSInteger _variant;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_lastAverageColor;
    NSTimer *_colorSampleTimer;
    BOOL _shouldGenerateBlurredImagesWhenVisible;
    BOOL _generatingBlurredImages;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    double _parallaxAxisAdjustmentAngle;
    BOOL _wantsRasterization;
    NSInteger _disallowRasterizationBlockCount;
    BOOL _filtersAverageColor;
    BOOL _continuousColorSamplingEnabled;
    BOOL _wallpaperAnimationEnabled;
    BOOL _parallaxEnabled;
    BOOL _suppressesGradients;
    id <SBFWallpaperViewLegibilityObserver> _legibilityObserver;
    UIView *_contentView;
    CGFloat _zoomFactor;
    CGFloat _contrast;
    id <SBFWallpaperViewInternalObserver> _internalObserver;
}

+ (BOOL)_allowsRasterization;
+ (BOOL)_allowsParallax;
@property(nonatomic) BOOL suppressesGradients; // @synthesize suppressesGradients=_suppressesGradients;
@property(nonatomic) id <SBFWallpaperViewInternalObserver> internalObserver; // @synthesize internalObserver=_internalObserver;
@property(nonatomic) BOOL parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(nonatomic) BOOL wallpaperAnimationEnabled; // @synthesize wallpaperAnimationEnabled=_wallpaperAnimationEnabled;
@property(nonatomic) BOOL continuousColorSamplingEnabled; // @synthesize continuousColorSamplingEnabled=_continuousColorSamplingEnabled;
@property(nonatomic) double contrast; // @synthesize contrast=_contrast;
@property(nonatomic) BOOL filtersAverageColor; // @synthesize filtersAverageColor=_filtersAverageColor;
@property(nonatomic) NSInteger variant; // @synthesize variant=_variant;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) id <SBFWallpaperViewLegibilityObserver> legibilityObserver; // @synthesize legibilityObserver=_legibilityObserver;
- (void)_cleanupAfterAnimatingGradients;
- (void)_updateGradientImage;
- (double)_bottomGradientAlpha;
- (double)_topGradientAlpha;
- (double)gradientOpacityInRect:(struct CGRect)arg1 contrastWithinBoxesFactor:(double)arg2;
- (void)_updateGradientAlpha;
- (void)_prepareToAnimateGradients;
- (BOOL)_shouldShowBottomGradient;
- (BOOL)_shouldShowTopGradient;
- (BOOL)contrastRequiresTreatments;
- (void)_updateContentViewScale;
- (void)_updateScaleFactor;
- (void)_applyParallaxSettings;
- (void)_updateParallaxSettings;
- (void)_updateGeneratingBlurs;
- (void)_updateRasterizationState;
- (void)_endDisallowRasterizationBlock;
- (void)_beginDisallowRasterizationBlock;
- (void)_notifyGeometryInvalidated;
- (void)_notifyBlursInvalidated;
- (BOOL)_isVisible;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)wantsRasterization;
@property(readonly) UIImage *wallpaperImage;
- (double)parallaxScaleFactor;
- (void)setContentsRect:(struct CGRect)arg1;
- (id)_displayedImage;
- (id)_imageForBackdropParameters:(CDStruct_2ec95fd7)arg1 includeTint:(BOOL)arg2;
- (id)_blurredImage;
- (void)_stopGeneratingBlurredImages;
- (void)_startGeneratingBlurredImages;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (id)_computeAverageColor;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (BOOL)isDisplayingWallpaper:(id)arg1;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)arg1;
- (void)layoutSubviews;
@property(nonatomic) double parallaxAxisAdjustmentAngle;
- (void)invalidate;
- (id)_blurReplacementImage;
- (id)imageForBackdropParameters:(CDStruct_2ec95fd7)arg1 includeTint:(BOOL)arg2;
- (id)blurredImage;
- (void)setGeneratesBlurredImages:(BOOL)arg1;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (double)contrastInRect:(struct CGRect)arg1;
- (id)averageColorInRect:(struct CGRect)arg1 withSmudgeRadius:(double)arg2;
- (void)_updateLegibilitySettingsForAverageColor:(id)arg1 notify:(BOOL)arg2;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (void)_setLegibilitySettings:(id)arg1 notify:(BOOL)arg2;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)setVariant:(NSInteger)arg1 withAnimationFactory:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
