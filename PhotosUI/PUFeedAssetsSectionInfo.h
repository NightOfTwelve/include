/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:04 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUFeedSectionInfo.h>

@interface PUFeedAssetsSectionInfo : PUFeedSectionInfo
-(id)assets;
-(unsigned)assetsCount;
-(void)getPhotoCount:(out unsigned*)arg1 videoCount:(out unsigned*)arg2 ;
-(id)cloudFeedAssetsEntry;
-(BOOL)containsAsset:(id)arg1 ;
-(void)updateFromCloudFeedEntry;
-(id)assetForItemAtIndex:(int)arg1 ;
-(int)sectionType;
-(int)typeForItemAtIndex:(int)arg1 ;
-(id)captionForItemAtIndex:(int)arg1 ;
-(id)batchIDForItemAtIndex:(int)arg1 ;
-(BOOL)areAllAssetsLiked;
-(int)indexOfItemWithAsset:(id)arg1 ;
@end
