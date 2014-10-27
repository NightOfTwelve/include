//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CIFilter, NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout;

@interface CAMEffectSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    NSArray *_effects;
    NSIndexPath *__selectedIndexPath;
    struct CGSize _cellSize;
    struct CGSize _thumbnailSize;
    id <CAMEffectSelectionViewControllerDelegate> _delegate;
}

@property(retain, nonatomic) CIFilter *selectedEffect;
- (id)initWithImageSize:(struct CGSize)arg1;
- (void)_scrollToShowNextFilterNearEdge;
- (void)_notifyEffectSelectedAndScrollIfNecessary;
- (id)_textForItemAtIndexPath:(id)arg1;
- (void)_scrollToSelectedIndexAnimated:(BOOL)arg1;
- (void)_resetSelectedToOriginal;
- (void)_generateFilters;
- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) id <CAMEffectSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (id)_selectedIndexPath;
- (void)_setSelectedIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

