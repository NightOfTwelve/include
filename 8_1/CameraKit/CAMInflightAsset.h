//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface CAMInflightAsset : NSObject
{
    BOOL _isVideo;
    BOOL __didPersistAvalanche;
    BOOL __hasPendingAvalanchePersistenceUpdate;
    short _visibilityState;
    NSString *_uuid;
    NSString *_directory;
    NSString *_filename;
    NSDate *_dateCreated;
    int _deviceOrientationDuringCapture;
    int _captureDeviceDuringCapture;
    NSString *_avalancheUUID;
    int _avalanchePickType;
}

@property(nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(nonatomic) int avalanchePickType; // @synthesize avalanchePickType=_avalanchePickType;
@property(retain, nonatomic) NSString *avalancheUUID; // @synthesize avalancheUUID=_avalancheUUID;
@property(nonatomic) short visibilityState; // @synthesize visibilityState=_visibilityState;
- (id)pathForVideoFile;
@property(retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)mainFileURL;
- (id)pathForOriginalFile;
@property(readonly, nonatomic) BOOL _hasPendingAvalanchePersistenceUpdate; // @synthesize _hasPendingAvalanchePersistenceUpdate=__hasPendingAvalanchePersistenceUpdate;
@property(readonly, nonatomic) BOOL _didPersistAvalanche; // @synthesize _didPersistAvalanche=__didPersistAvalanche;
@property(nonatomic) int captureDeviceDuringCapture; // @synthesize captureDeviceDuringCapture=_captureDeviceDuringCapture;
@property(nonatomic) int deviceOrientationDuringCapture; // @synthesize deviceOrientationDuringCapture=_deviceOrientationDuringCapture;
- (id)pathForImageFile;
- (void)_persistAvalancheToFilesystem;
- (void)_avalanchePersistenceStateDidChange;
- (void).cxx_destruct;
- (id)init;

@end

