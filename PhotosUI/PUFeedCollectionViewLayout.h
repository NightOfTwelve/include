/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:06 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface PUFeedCollectionViewLayout : UICollectionViewLayout {

	NSMutableArray* _sectionLayoutInfos;
	CGSize _contentSize;
	BOOL _shouldDisplayCaptionsBelowBatches;
	BOOL _shouldDisplaySectionHeadersBelowSections;
	BOOL _shouldFloatThumbnails;
	BOOL _shouldFloatSectionHeaders;
	BOOL _shouldFloatWithEase;
	BOOL _shouldFloatOverShortDistances;
	int _flowDirection;
	float _thumbnailSpacing;
	float _sectionHeaderBackgroundHeight;
	float _floatingBottomDecorationHeight;
	CGSize _sectionReferenceSize;
	CGSize _interTileSpacing;
	CGSize _noCaptionSpacing;
	UIEdgeInsets _captionPadding;
	UIEdgeInsets _floatPadding;

}

@property (assign,nonatomic) int flowDirection;                                          //@synthesize flowDirection=_flowDirection - In the implementation block
@property (nonatomic,readonly) int flowDirectionEdge; 
@property (assign,nonatomic) CGSize sectionReferenceSize;                                //@synthesize sectionReferenceSize=_sectionReferenceSize - In the implementation block
@property (assign,nonatomic) CGSize interTileSpacing;                                    //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets captionPadding;                                //@synthesize captionPadding=_captionPadding - In the implementation block
@property (assign,nonatomic) CGSize noCaptionSpacing;                                    //@synthesize noCaptionSpacing=_noCaptionSpacing - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCaptionsBelowBatches;                     //@synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplaySectionHeadersBelowSections;              //@synthesize shouldDisplaySectionHeadersBelowSections=_shouldDisplaySectionHeadersBelowSections - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatThumbnails;                                 //@synthesize shouldFloatThumbnails=_shouldFloatThumbnails - In the implementation block
@property (assign,nonatomic) float thumbnailSpacing;                                     //@synthesize thumbnailSpacing=_thumbnailSpacing - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatSectionHeaders;                             //@synthesize shouldFloatSectionHeaders=_shouldFloatSectionHeaders - In the implementation block
@property (assign,nonatomic) float sectionHeaderBackgroundHeight;                        //@synthesize sectionHeaderBackgroundHeight=_sectionHeaderBackgroundHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatWithEase;                                   //@synthesize shouldFloatWithEase=_shouldFloatWithEase - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatOverShortDistances;                         //@synthesize shouldFloatOverShortDistances=_shouldFloatOverShortDistances - In the implementation block
@property (assign,nonatomic) float floatingBottomDecorationHeight;                       //@synthesize floatingBottomDecorationHeight=_floatingBottomDecorationHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets floatPadding;                                  //@synthesize floatPadding=_floatPadding - In the implementation block
-(id)_delegate;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setSectionReferenceSize:(CGSize)arg1 ;
-(void)setThumbnailSpacing:(float)arg1 ;
-(void)setInterTileSpacing:(CGSize)arg1 ;
-(void)setCaptionPadding:(UIEdgeInsets)arg1 ;
-(void)setNoCaptionSpacing:(CGSize)arg1 ;
-(void)setShouldDisplayCaptionsBelowBatches:(BOOL)arg1 ;
-(void)setShouldFloatThumbnails:(BOOL)arg1 ;
-(void)setShouldDisplaySectionHeadersBelowSections:(BOOL)arg1 ;
-(void)setShouldFloatSectionHeaders:(BOOL)arg1 ;
-(void)setShouldFloatWithEase:(BOOL)arg1 ;
-(void)setShouldFloatOverShortDistances:(BOOL)arg1 ;
-(void)setFloatPadding:(UIEdgeInsets)arg1 ;
-(CGRect)frameForTileAtIndexPath:(id)arg1 ;
-(int)numberOfTilesOmittedInSection:(int)arg1 ;
-(void)updateCollectionViewWithDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3 ;
-(void)enumerateImageElementsInRect:(CGRect)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)setFlowDirection:(int)arg1 ;
-(int)flowDirectionEdge;
-(void)invalidateLayoutAndCache;
-(id)sectionsJoinedWithSection:(int)arg1 ;
-(int)flowDirection;
-(CGRect)frameForSection:(int)arg1 ;
-(id)indexPathForImageElementAtPoint:(CGPoint)arg1 ;
-(BOOL)shouldFloatSectionHeaders;
-(BOOL)shouldFloatThumbnails;
-(float)floatingBottomDecorationHeight;
-(float)sectionHeaderBackgroundHeight;
-(void)_updateSectionLayoutInfosIfNecessary;
-(void)_updateGlobalLayoutInfoWithOptions:(int)arg1 sectionsWithUpdatedGroupIDs:(out id*)arg2 ;
-(void)_updateLayoutInfoForSection:(int)arg1 ignoreSizeChange:(BOOL)arg2 ;
-(void)_adjustFloatingLayoutAttributes:(id)arg1 inSection:(int)arg2 ;
-(void)_enumerateSectionsInRect:(CGRect)arg1 withBlock:(/*^block*/ id)arg2 ;
-(void)_getSize:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out int*)arg7 forSection:(int)arg8 isJoined:(BOOL)arg9 ;
-(CGSize)sectionReferenceSize;
-(void)_sectionAtIndex:(int)arg1 sizeDidChangeFrom:(CGSize)arg2 to:(CGSize)arg3 ;
-(UIEdgeInsets)floatPadding;
-(BOOL)shouldFloatOverShortDistances;
-(BOOL)shouldFloatWithEase;
-(void)_getSizeForVerticalFlowDirection:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out int*)arg7 forSection:(int)arg8 isJoined:(BOOL)arg9 ;
-(void)_getSizeForHorizontalFlowDirection:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out int*)arg7 forSection:(int)arg8 isJoined:(BOOL)arg9 ;
-(CGSize)interTileSpacing;
-(UIEdgeInsets)captionPadding;
-(CGSize)noCaptionSpacing;
-(BOOL)shouldDisplayCaptionsBelowBatches;
-(float)thumbnailSpacing;
-(BOOL)shouldDisplaySectionHeadersBelowSections;
-(void)setSectionHeaderBackgroundHeight:(float)arg1 ;
-(void)setFloatingBottomDecorationHeight:(float)arg1 ;
-(void).cxx_destruct;
@end
