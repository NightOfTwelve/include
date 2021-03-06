/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <PhotosUI/PUReorderableLayout.h>
#import <PhotosUI/PUGridLayoutProtocol.h>
#import <PhotosUI/PUCollectionViewLayoutDelegating.h>

@protocol PUCollectionViewLayoutTransitioningDelegate;
@class NSIndexSet, NSSet, NSIndexPath, UICollectionViewLayoutAttributes, NSString;

@interface PUCollectionViewFlowLayout : UICollectionViewFlowLayout <PUReorderableLayout, PUGridLayoutProtocol, PUCollectionViewLayoutDelegating> {

	NSIndexSet* _deletedSections;
	NSSet* _deletedItemIndexPaths;
	NSIndexPath* _reorderingSourceIndexPath;
	NSIndexPath* _reorderingTargetIndexPath;
	NSIndexPath* _reorderingInsertedIndexPath;
	UICollectionViewLayoutAttributes* _globalFooterLayoutAttributes;
	NSIndexPath* globalFooterIndexPath;
	CGFloat globalTopPadding;
	CGFloat globalBottomPadding;
	NSString* sectionHeaderElementKind;
	CGFloat sectionTopPadding;
	<PUCollectionViewLayoutTransitioningDelegate>* transitioningDelegate;
	NSSet* _hiddenItemIndexPaths;
	CGFloat _globalFooterHeight;

}

@property (assign,nonatomic,__weak) <PUCollectionViewLayoutTransitioningDelegate> * transitioningDelegate; 
@property (nonatomic,readonly) NSIndexPath * globalFooterIndexPath; 
@property (assign,nonatomic) CGFloat globalFooterHeight;                                                                  //@synthesize globalFooterHeight=_globalFooterHeight - In the implementation block
@property (assign,nonatomic) CGFloat globalTopPadding; 
@property (assign,nonatomic) CGFloat globalBottomPadding; 
@property (nonatomic,copy) NSSet * hiddenItemIndexPaths;                                                                //@synthesize hiddenItemIndexPaths=_hiddenItemIndexPaths - In the implementation block
@property (nonatomic,copy) NSString * sectionHeaderElementKind; 
@property (assign,nonatomic) CGFloat sectionHeaderHeight; 
@property (assign,nonatomic) CGFloat sectionTopPadding; 
-(void)setSectionHeaderHeight:(CGFloat)arg1 ;
-(CGFloat)sectionHeaderHeight;
-(id)transitioningDelegate;
-(void)setTransitioningDelegate:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)sectionHeaderElementKind;
-(void)invalidateLayoutForVerticalScroll;
-(id)assetIndexPathsForElementsInRect:(CGRect)arg1 ;
-(CGFloat)globalFooterHeight;
-(void)setGlobalFooterHeight:(CGFloat)arg1 ;
-(id)globalFooterIndexPath;
-(CGFloat)globalTopPadding;
-(void)setGlobalTopPadding:(CGFloat)arg1 ;
-(CGFloat)globalBottomPadding;
-(void)setGlobalBottomPadding:(CGFloat)arg1 ;
-(id)hiddenItemIndexPaths;
-(void)setHiddenItemIndexPaths:(id)arg1 ;
-(void)setSectionHeaderElementKind:(id)arg1 ;
-(CGFloat)sectionTopPadding;
-(void)setSectionTopPadding:(CGFloat)arg1 ;
-(void)beginReorderingItemAtIndexPath:(id)arg1 ;
-(id)reorderedIndexPath:(id)arg1 ;
-(void)updateReorderingTargetIndexPath:(id)arg1 ;
-(void)endReordering;
-(void)beginInsertingItemAtIndexPath:(id)arg1 ;
-(void)endInsertingItem;
-(CGRect)_frameForGlobalFooter;
-(void)_updateLayoutAttributes:(id)arg1 ignoringReordering:(BOOL)arg2 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 ignoringReordering:(BOOL)arg2 ;
-(void).cxx_destruct;
@end

