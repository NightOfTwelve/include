/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@interface PLCropOverlayLayer : UIView
{
    struct CGRect _cropRect;
    UIView *_topOpaqueLayer;
    UIView *_bottomOpaqueLayer;
    UIView *_rightOpaqueLayer;
    UIView *_leftOpaqueLayer;
    UIView *_topEdgeLayer;
    UIView *_bottomEdgeLayer;
    UIView *_rightEdgeLayer;
    UIView *_leftEdgeLayer;
    UIView *_topLeftCornerLayer;
    UIView *_topRightCornerLayer;
    UIView *_bottomRightCornerLayer;
    UIView *_bottomLeftCornerLayer;
    UIView *_topThirdLayer;
    UIView *_bottomThirdLayer;
    UIView *_rightThirdLayer;
    UIView *_leftThirdLayer;
    UIView *_straightenHorizontalLayers[6];
    UIView *_straightenVerticalLayers[6];
    unsigned int _showsCropRect:1;
    unsigned int _showThirdsGrid:1;
    unsigned int _showsStraightenGrid:1;
    unsigned int _thirdsVisible:1;
    unsigned int _highlighted:1;
}

- (struct CGRect)cropRect;
- (void)setCropRect:(struct CGRect)arg1;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)showsStraightenGrid;
- (void)showStraightenGrid:(_Bool)arg1;
- (_Bool)showsThirdsGrid;
- (void)showThirdsGrid:(_Bool)arg1;
- (_Bool)showsCropRect;
- (void)setShowsCropRect:(_Bool)arg1;
- (void)_updateCropRectVisibility;
- (void)_updateLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

