//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMInflightAsset, CIBurstImageSet, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CAMAvalancheSession : NSObject
{
    int _type;
    id <CAMAvalancheSessionDelegate> _delegate;
    int _state;
    NSString *_uuid;
    unsigned int _numberOfPhotos;
    CAMInflightAsset *_possibleAvalancheAsset;
    NSMutableDictionary *__assets;
    NSDate *__expirationDate;
    NSObject<OS_dispatch_source> *__expirationTimer;
    NSObject<OS_dispatch_queue> *__expirationQueue;
    CIBurstImageSet *__burstImageSet;
}

@property(readonly, nonatomic) NSMutableDictionary *_assets; // @synthesize _assets=__assets;
- (id)assetWithUUID:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_expirationQueue; // @synthesize _expirationQueue=__expirationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *_expirationTimer; // @synthesize _expirationTimer=__expirationTimer;
@property(retain, nonatomic, setter=_setExpirationDate:) NSDate *_expirationDate; // @synthesize _expirationDate=__expirationDate;
@property(retain, nonatomic) CAMInflightAsset *possibleAvalancheAsset; // @synthesize possibleAvalancheAsset=_possibleAvalancheAsset;
@property(readonly, nonatomic) unsigned int numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;
- (void)addAssetForAnalysis:(id)arg1 withIOSurface:(struct __IOSurface *)arg2 metadata:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)extend;
- (BOOL)_ensureValidStateChange:(int)arg1;
@property(readonly, nonatomic) CIBurstImageSet *_burstImageSet; // @synthesize _burstImageSet=__burstImageSet;
- (void)_setPossibleAvalancheAsset:(id)arg1;
- (void)_expirationTimerFired;
- (id)assetsWithUUIDs:(id)arg1;
- (id)stackAssetIdentifier;
- (id)bestAssetIndentifiers;
- (id)allAssetIdentifiers;
- (void)_teardownExpirationTimer;
- (void)finalizeWithAnalysis:(BOOL)arg1;
- (void)_setupExpirationTimer;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)_setState:(int)arg1;
- (void)_didTransitionToState:(int)arg1;
- (id)initWithType:(int)arg1;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) id <CAMAvalancheSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (void)_transitionToState:(int)arg1;

@end

