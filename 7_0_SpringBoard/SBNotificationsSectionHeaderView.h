//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SBFVibrantTableViewHeaderFooterView.h"

@class SBNotificationCenterSeparatorView, SBNotificationsClearButton, UIImageView, UILabel;

@interface SBNotificationsSectionHeaderView : _SBFVibrantTableViewHeaderFooterView
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    SBNotificationsClearButton *_xButton;
    SBNotificationsClearButton *_clearButton;
    UIImageView *_buttonBackground;
    CDUnknownBlockType _xAction;
    CDUnknownBlockType _clearAction;
    double _widthWhenShowingClear;
    _Bool _showingClear;
    SBNotificationCenterSeparatorView *_separator;
}

+ (void)_compositingFilterForView:(id)arg1;
+ (id)defaultBackgroundColorForGraphicsQuality:(long long)arg1;
- (void)buttonAction:(id)arg1;
- (void)layoutSubviews;
- (void)resetAnimated:(_Bool)arg1;
- (void)_setShowsClear:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isShowingClear;
- (struct CGRect)_buttonBackgroundFrame;
- (struct CGRect)_xButtonFrame;
- (struct CGRect)contentBounds;
- (void)setTarget:(id)arg1 forClearButtonAction:(CDUnknownBlockType)arg2;
- (void)setTarget:(id)arg1 forClearButtonVisibleAction:(CDUnknownBlockType)arg2;
- (void)setHasClearButton:(_Bool)arg1;
- (id)_clearImage;
- (id)_clearBackgroundImage;
- (id)_xImage;
- (void)setFloating:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setBackgroundView:(id)arg1;
- (long long)initialGraphicsQuality;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

