//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAMNebulaDaemonProtocol.h"

@class CAMTimelapseMovieWriter, CAMTimelapseState, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface CAMTimelapseBackendController : NSObject <CAMNebulaDaemonProtocol>
{
    BOOL __writingMovie;
    BOOL __capturing;
    NSMutableArray *__sessionContexts;
    NSObject<OS_dispatch_queue> *__workQueue;
    CAMTimelapseMovieWriter *__movieWriter;
    CAMTimelapseState *__currentState;
}

+ (id)sharedInstance;
@property(nonatomic, getter=_isCapturing, setter=_setCapturing:) BOOL _capturing; // @synthesize _capturing=__capturing;
@property(readonly, nonatomic) CAMTimelapseMovieWriter *_movieWriter; // @synthesize _movieWriter=__movieWriter;
@property(readonly, nonatomic) BOOL _writingMovie; // @synthesize _writingMovie=__writingMovie;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_workQueue; // @synthesize _workQueue=__workQueue;
@property(readonly, nonatomic) NSMutableArray *_sessionContexts; // @synthesize _sessionContexts=__sessionContexts;
- (void)handleClientDisconnection;
- (void)handleClientConnection:(id)arg1;
- (void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1;
- (void)stopNebulaWithUUID:(id)arg1;
- (void)finishCaptureForNebulaWithUUID:(id)arg1;
- (void)updateNebulaWithUUID:(id)arg1;
- (void)resumeNebulaWithUUID:(id)arg1;
- (void)startNebulaWithUUID:(id)arg1;
- (void)_notifyAssetsdOfIncomingMovieAtPath:(id)arg1 duration:(double)arg2 state:(id)arg3;
- (void)_reserveDummyFileForTimelapseUUID:(id)arg1 firstImageFilePath:(id)arg2;
- (void)_movieWrittenToFilePath:(id)arg1 duration:(double)arg2 state:(id)arg3;
- (struct CGAffineTransform)_frameTransformForState:(id)arg1;
- (void)_createPlaceholderAssetForState:(id)arg1;
- (void)_dispatchToMainQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_writeMovieForSessionContext:(id)arg1;
- (BOOL)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)arg1;
- (void)_permanentlyFailTimelapseUUID:(id)arg1;
- (BOOL)_isCameraRunning;
- (void)_dispatchToWorkQueueAfterDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)_deleteItemAtPath:(id)arg1;
- (void)_updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1;
- (void)_dispatchToWorkQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_performPendingWork;
- (void)_updateSessionContext:(id)arg1 withState:(id)arg2;
- (id)_getOrCreateSessionContextForTimelapseUUID:(id)arg1;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic, setter=_setCurrentState:) CAMTimelapseState *_currentState; // @synthesize _currentState=__currentState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

