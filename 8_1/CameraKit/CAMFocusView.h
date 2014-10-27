//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAKeyframeAnimation, NSArray, UIColor;

@interface CAMFocusView : UIView
{
    NSArray *_images;
    CAKeyframeAnimation *_contentsAnimation;
    CAKeyframeAnimation *_boundsAnimation;
    double _animationStartTime;
    double _lastInteractionTime;
    BOOL _fadingOut;
    int _suspendCount;
    BOOL _shouldFadeOut;
    BOOL _fadeOutStarted;
    UIColor *_color;
    double _lastFadeOutTime;
}

+ (double)minimumTimeBeforeFadeOut;
@property(readonly, nonatomic) double lastFadeOutTime; // @synthesize lastFadeOutTime=_lastFadeOutTime;
- (void)resumeFadeOutResetPending:(BOOL)arg1;
- (void)suspendFadeOut;
- (void)cancelFadeOut;
- (void)focusDidEnd;
- (void)setDefaultContents;
- (void)stopContentsAnimation;
- (void)_animateAlpha:(float)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_scheduleDelayedDim;
- (BOOL)_cancelFadeOutForSuspend;
- (void)_dimForInactivity;
- (void)_pauseContentsAnimation;
- (void)_fadeOutIfNeeded;
- (void)_cancelDelayedPauseContentsAnimation;
- (void)resetFadeOutSuspension;
- (void)_fadeOutDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_cancelDelayedDim;
- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (void)updateLastInteractionTime;
- (void)_cancelDelayedFadeOut;
- (void)startAnimatingContents:(BOOL)arg1 bounds:(BOOL)arg2 fadeIn:(BOOL)arg3;
- (void)_loadImagesWithColor:(id)arg1 imageSize:(struct CGSize *)arg2;
- (double)dimAfterInteractionDelay;
- (id)nameForDarkImage;
- (id)nameForLightImage;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (void).cxx_destruct;
- (id)initWithColor:(id)arg1;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)startAnimating;
- (void)stopAnimating;
- (id)init;
- (void)dealloc;
- (void)_fadeOut;

@end

