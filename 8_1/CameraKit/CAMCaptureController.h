//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureFileOutputRecordingDelegate.h"
#import "AVCaptureMetadataOutputObjectsDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "BKSAccelerometerDelegate.h"
#import "PLCameraEffectsRendererDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceFormat, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureMovieFileOutput, AVCaptureOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, BKSAccelerometer, CAMAvalancheCaptureService, CAMDebugCaptureService, CAMEffectsRenderer, CIFilter, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSTimer;

@interface CAMCaptureController : NSObject <AVCaptureMetadataOutputObjectsDelegate, PLCameraEffectsRendererDelegate, BKSAccelerometerDelegate, AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession *_avCaptureSession;
    AVCaptureDevice *_avCaptureDeviceFront;
    AVCaptureDevice *_avCaptureDeviceBack;
    AVCaptureDevice *_avCaptureDeviceAudio;
    AVCaptureDeviceInput *_avCaptureInputFront;
    AVCaptureDeviceInput *_avCaptureInputBack;
    AVCaptureDeviceInput *_avCaptureInputAudio;
    AVCaptureStillImageOutput *_avCaptureOutputPhoto;
    AVCaptureMovieFileOutput *_avCaptureOutputVideo;
    AVCaptureVideoDataOutput *_avCaptureOutputPanorama;
    AVCaptureVideoDataOutput *_avCaptureOutputEffectPreview;
    AVCaptureMetadataOutput *_avCaptureOutputMetadata;
    AVCaptureDeviceFormat *_mogulFormatBack;
    AVCaptureDeviceFormat *_mogulFormatFront;
    BOOL _mogulFormatBackSupportsAlternate;
    BOOL _mogulFormatFrontSupportsAlternate;
    struct OpaqueFigSampleBufferProcessor *_panoramaProcessor;
    struct _CAImageQueue *_panoramaImageQueue;
    struct CGSize _panoramaPreviewSize;
    float _panoramaPreviewScale;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
    NSObject<OS_dispatch_queue> *_avCaptureOutputMetadataQueue;
    AVCaptureDevice *_currentDevice;
    AVCaptureDeviceInput *_currentInput;
    AVCaptureOutput *_currentOutput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    struct CGRect _cleanAperture;
    BOOL _shouldBeStopped;
    int _cameraMode;
    int _cameraDevice;
    int _flashMode;
    int _captureOrientation;
    BOOL _imageWriterQueueIsAvailable;
    unsigned int _ioSurfaceCounter;
    BOOL _hdrCaptureIncludesEV0Image;
    int _hdrEV0PhotoCaptureCount;
    id <PLCameraControllerDelegate> _delegate;
    double _maximumCaptureDuration;
    int _videoCaptureQuality;
    NSString *_videoCapturePath;
    BKSAccelerometer *_accelerometer;
    struct CGImage *_lastVideoPreviewFrameImageRef;
    BOOL _isFocusingOnFace;
    int _cameraOrientation;
    NSTimer *_idleTimerTimer;
    BOOL _delaySuspend;
    NSTimer *_delaySuspendTimer;
    float _maxVideoZoomFactorRear;
    float _maxVideoZoomFactorFront;
    unsigned int _keepAliveCounter;
    NSTimer *_keepAliveTimer;
    NSTimer *_keepAliveFailsafeTimer;
    struct {
        unsigned int supportsVideo:1;
        unsigned int supportsHDRRear:1;
        unsigned int supportsHDRFront:1;
        unsigned int supportsSuggestedHDRRear:1;
        unsigned int supportsSuggestedHDRFront:1;
        unsigned int supportsAvalancheAnalysisRear:1;
        unsigned int supportsAvalancheAnalysisFront:1;
        unsigned int supportsMogulRear:1;
        unsigned int supportsMogulFront:1;
        unsigned int supportsLiveEffects:1;
        unsigned int supportsPanorama:1;
        unsigned int supportsVideoStillCapture:1;
        unsigned int supportsPreviewDuringHDR:1;
        unsigned int supportsTimelapse:1;
        unsigned int hasFlash:1;
        unsigned int hasBackCamera:1;
        unsigned int hasFrontCamera:1;
        unsigned int deferStartVideoCapture:1;
        unsigned int inCall:1;
        unsigned int isCapturingPanorama:1;
        unsigned int isProcessingPanorama:1;
        unsigned int focusDisabled:1;
        unsigned int serverDied:1;
        unsigned int didGetDeviceUnavailableInBackground:1;
        unsigned int didSetLocationData:1;
        unsigned int isChangingMode:1;
        unsigned int flashWillFireAutomatically:1;
        unsigned int torchWillFireAutomatically:1;
        unsigned int isCameraApp:1;
        unsigned int didSendPreviewStartedCallbackToEmptyDelegate:1;
        unsigned int didGetPreviewStartedCallbackAfterResume:1;
        unsigned int logFocusInfo:1;
        unsigned int logPreviewInfo:1;
        unsigned int logCaptureInfo:1;
        unsigned int logFlashInfo:1;
        unsigned int logDebugInfo:1;
        unsigned int logPanoInfo:1;
        unsigned int enable720p60Recording:1;
        unsigned int isInternalInstall:1;
        unsigned int shouldTearDownPano:1;
        unsigned int convertSampleBufferToJPEG:1;
        unsigned int delegateDidStartSession:1;
        unsigned int delegateWillStartPreview:1;
        unsigned int delegatePreviewDidStart:1;
        unsigned int delegateSessionDidStart:1;
        unsigned int delegateDidStopSession:1;
        unsigned int delegateWillStopSession:1;
        unsigned int delegateSessionDidStop:1;
        unsigned int delegateSessionWasInterrupted:1;
        unsigned int delegateSessionInterruptionEnded:1;
        unsigned int delegateServerError:1;
        unsigned int delegateCleanApertureDidChange:1;
        unsigned int delegateModeWillChange:1;
        unsigned int delegateModeDidChange:1;
        unsigned int delegateWillTakePhoto:1;
        unsigned int delegateDidTakePhoto:1;
        unsigned int delegateCapturedPhoto:1;
        unsigned int delegateDidChangeCaptureAbility:1;
        unsigned int delegateDidChangePanoramaConfiguration:1;
        unsigned int delegateDidUpdatePanoramaPreview:1;
        unsigned int delegateDidReceivePanoramaIssue:1;
        unsigned int delegateDidStartPanoramaCapture:1;
        unsigned int delegateWillStopPanoramaCapture:1;
        unsigned int delegatePanoramaWillStartProcessing:1;
        unsigned int delegatePanoramaDidStopProcessing:1;
        unsigned int delegateCapturedPanorama:1;
        unsigned int delegateVideoCaptureDidStart:1;
        unsigned int delegateDidStopVideoCapture:1;
        unsigned int delegateVideoCaptureDidStop:1;
        unsigned int delegateDidChangeFocusMode:1;
        unsigned int delegateDidChangeExposureMode:1;
        unsigned int delegateFocusDidStart:1;
        unsigned int delegateFocusDidEnd:1;
        unsigned int delegateExposureDidStart:1;
        unsigned int delegateExposureDidEnd:1;
        unsigned int delegateWillResetFocusExposure:1;
        unsigned int delegateDidChangeUserLockedFocus:1;
        unsigned int delegateDidChangeUserLockedExposure:1;
        unsigned int delegateDidChangeExposureTargetBias:1;
        unsigned int delegateFaceMetadataDidChange:1;
        unsigned int delegateVideoZoomFactorDidChange:1;
        unsigned int delegateFlashWillFireChanged:1;
        unsigned int delegateTorchActiveChanged:1;
        unsigned int delegateTorchAvailabilityChanged:1;
        unsigned int delegateHDRSuggestionChanged:1;
        unsigned int delegateDidStartVideoRequest:1;
        unsigned int delegateDidStopVideoRequest:1;
        unsigned int delegateDidFinishVideoRequest:1;
        unsigned int delegateDidStartCapturingPanoramaRequest:1;
        unsigned int delegateDidStopCapturingPanoramaRequest:1;
        unsigned int delegateDidStartProcessingPanoramaRequest:1;
        unsigned int delegateDidStopProcessingPanoramaRequest:1;
        unsigned int delegateDidFinishPanoramaRequest:1;
        unsigned int delegatePanoramaConfigurationChanged:1;
        unsigned int delegateDidOutputPanoramaParameters:1;
    } _cameraFlags;
    NSObject<OS_dispatch_queue> *_dispatchTimerQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    BOOL __previewPaused;
    BOOL __previewLayerEnabledForRenderer;
    BOOL __videoDataOutputEnabledForRenderer;
    BOOL _canCapturePhotoFromVideoModeWhenNotRecording;
    BOOL _use60FPSVideo;
    BOOL _capturingTimelapse;
    BOOL _resetFocusWhenSubjectAreaChanged;
    BOOL _resetExposureWhenSubjectAreaChanged;
    BOOL _userLockedFocus;
    BOOL _userLockedExposure;
    BOOL _HDRDetectionEnabled;
    BOOL _useAlternateSlomoFront;
    BOOL _useAlternateSlomoRear;
    BOOL _performingAvalancheCapture;
    BOOL _disableAllPreviewSuspensionDuringCapture;
    BOOL __atomicEffectsAvailable;
    BOOL __configuringCamera;
    BOOL __sessionReady;
    BOOL __rebuildingSession;
    BOOL __atomicModeChangeWaitingForPreviewStarted;
    BOOL __atomicModeChangeWaitingForConfigureSession;
    BOOL __panoramaProcessorReadyForSampleBuffers;
    BOOL __wasStillImageStabilzationOnBeforeTimedCapture;
    BOOL __ignoreSubjectAreaChanges;
    BOOL __lockFocusAfterFocusFinishes;
    BOOL __lockExposureAfterExposeFinishes;
    BOOL __locationAcquiredForTimelapseCapture;
    CDUnknownBlockType postSessionSetupBlock;
    CAMEffectsRenderer *_effectsRenderer;
    NSArray *_supportedCameraModes;
    NSObject<OS_dispatch_queue> *__effectFilterIndexQueue;
    NSDictionary *__effectFilterIndices;
    NSObject<OS_dispatch_queue> *__captureIsolationQueue;
    NSObject<OS_dispatch_queue> *__effectRenderingQueue;
    NSMutableArray *__inflightStillImageCaptureRequests;
    NSMutableArray *__inflightVideoCaptureResponses;
    NSMutableArray *__deferredVideoCaptureRequests;
    NSMutableArray *__inflightPanoramaCaptureRequests;
    NSMutableArray *__processingPanoramaCaptureRequests;
    NSMutableArray *__currentFaceMetadata;
    NSMutableDictionary *__servicesByType;
    CAMAvalancheCaptureService *__avalancheCaptureService;
    CAMDebugCaptureService *__debugCaptureService;
    int __deviceLockCount;
    CDUnknownBlockType __lockLensPositionCompletionBlock;
    float __lockLensPositionTarget;
    double __ignoreSubjectAreaChangesUntilTime;
}

+ (BOOL)_shouldExtractDiagnostics;
+ (id)_dateFormatterForVideoMetadata;
+ (id)videoMetadataArrayWithLocation:(id)arg1 date:(id)arg2 didSetLocationData:(char *)arg3;
+ (BOOL)isStillImageMode:(int)arg1;
+ (float)panoramaPreviewHorizontalInset;
+ (struct CGSize)panoramaPreviewSize;
+ (float)focusLensPositionCurrentSentinel;
+ (BOOL)isVideoMode:(int)arg1;
+ (id)sharedInstance;
- (void)stopPreview;
- (void)pausePreview;
- (void)startPreview;
@property(readonly, nonatomic) AVCaptureSession *currentSession; // @synthesize currentSession=_avCaptureSession;
@property(readonly, nonatomic) int cameraOrientation;
@property(readonly, nonatomic) BOOL _locationAcquiredForTimelapseCapture; // @synthesize _locationAcquiredForTimelapseCapture=__locationAcquiredForTimelapseCapture;
@property(nonatomic, setter=_setLockLensPositionTarget:) float _lockLensPositionTarget; // @synthesize _lockLensPositionTarget=__lockLensPositionTarget;
@property(copy, nonatomic, setter=_setLockLensPositionCompletionBlock:) CDUnknownBlockType _lockLensPositionCompletionBlock; // @synthesize _lockLensPositionCompletionBlock=__lockLensPositionCompletionBlock;
@property(readonly, nonatomic) BOOL _lockExposureAfterExposeFinishes; // @synthesize _lockExposureAfterExposeFinishes=__lockExposureAfterExposeFinishes;
@property(readonly, nonatomic) BOOL _lockFocusAfterFocusFinishes; // @synthesize _lockFocusAfterFocusFinishes=__lockFocusAfterFocusFinishes;
@property(readonly, nonatomic) double _ignoreSubjectAreaChangesUntilTime; // @synthesize _ignoreSubjectAreaChangesUntilTime=__ignoreSubjectAreaChangesUntilTime;
@property(readonly, nonatomic) BOOL _ignoreSubjectAreaChanges; // @synthesize _ignoreSubjectAreaChanges=__ignoreSubjectAreaChanges;
@property(readonly, nonatomic) CAMDebugCaptureService *_debugCaptureService; // @synthesize _debugCaptureService=__debugCaptureService;
@property(readonly, nonatomic) NSMutableArray *_currentFaceMetadata; // @synthesize _currentFaceMetadata=__currentFaceMetadata;
@property(readonly, nonatomic) BOOL _wasStillImageStabilzationOnBeforeTimedCapture; // @synthesize _wasStillImageStabilzationOnBeforeTimedCapture=__wasStillImageStabilzationOnBeforeTimedCapture;
@property(readonly, nonatomic) BOOL _panoramaProcessorReadyForSampleBuffers; // @synthesize _panoramaProcessorReadyForSampleBuffers=__panoramaProcessorReadyForSampleBuffers;
@property(readonly, nonatomic) NSMutableArray *_processingPanoramaCaptureRequests; // @synthesize _processingPanoramaCaptureRequests=__processingPanoramaCaptureRequests;
@property(readonly, nonatomic) NSMutableArray *_inflightPanoramaCaptureRequests; // @synthesize _inflightPanoramaCaptureRequests=__inflightPanoramaCaptureRequests;
@property(readonly, nonatomic) NSMutableArray *_deferredVideoCaptureRequests; // @synthesize _deferredVideoCaptureRequests=__deferredVideoCaptureRequests;
@property(readonly, nonatomic) NSMutableArray *_inflightStillImageCaptureRequests; // @synthesize _inflightStillImageCaptureRequests=__inflightStillImageCaptureRequests;
@property(nonatomic) BOOL _rebuildingSession; // @synthesize _rebuildingSession=__rebuildingSession;
@property(readonly, retain) NSObject<OS_dispatch_queue> *_effectRenderingQueue; // @synthesize _effectRenderingQueue=__effectRenderingQueue;
@property(nonatomic) BOOL disableAllPreviewSuspensionDuringCapture; // @synthesize disableAllPreviewSuspensionDuringCapture=_disableAllPreviewSuspensionDuringCapture;
@property(nonatomic, getter=isHDRDetectionEnabled) BOOL HDRDetectionEnabled; // @synthesize HDRDetectionEnabled=_HDRDetectionEnabled;
@property(readonly, nonatomic) AVCaptureStillImageOutput *imageOutput; // @synthesize imageOutput=_avCaptureOutputPhoto;
@property(nonatomic) AVCaptureDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
- (void)_panoramaDidReceiveErrorNotificationString:(struct __CFString *)arg1;
- (void)_panoramaDidReceiveWarningNotificationString:(struct __CFString *)arg1;
- (void)_panoramaDidReceiveStatusNotificationString:(struct __CFString *)arg1;
- (void)panoramaProcessorOutputCallbackWithStatus:(long)arg1 buffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_updateOrientationForConnection:(id)arg1;
- (double)currentMinFrameDuration;
- (void)_faceMetadataDidChange:(id)arg1;
- (void)_debugFocusState;
- (void)setVideoCaptureMaximumDuration:(double)arg1;
- (void)setVideoCaptureQuality:(int)arg1;
- (void)_verifyVideoConsolidationForVideoAtPath:(id)arg1 outUserInfo:(id *)arg2;
- (void)capturePhoto;
- (BOOL)imageWriterQueueIsAvailable;
- (void)_clearPreviewLayer;
@property(nonatomic) BOOL convertSampleBufferToJPEG;
- (void)_panoramaDidReceiveIssueWithPanoramaString:(struct __CFString *)arg1;
- (void)_createAssetForPanoramaResponse:(id)arg1;
- (void)_processPanoramaRequest:(id)arg1;
- (void)_lockFocusAndExposureForPano;
- (id)_sanitizePanoramaCaptureRequest:(id)arg1;
- (BOOL)canCapturePanorama;
- (void)_createAssetForVideoCaptureResponse:(id)arg1;
- (void)_verifyVideoConsolidationForVideoResponse:(id)arg1;
- (void)_updateIdleTimerForDidFinishVideoRecording;
- (void)_updateIdleTimerForStartVideoCapture;
- (void)_applyTorchSettingsFromVideoRequest:(id)arg1;
- (void)_applyCaptureSettingsFromVideoRequest:(id)arg1;
- (id)_sanitizeVideoCaptureRequest:(id)arg1;
- (void)releaseIOSurface;
- (void)captureIOSurface;
- (int)_addOrientationMetadataToResponse:(id)arg1;
- (void)_updateImagePickerMetadataForResponse:(id)arg1;
- (void)_updateResponse:(id)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 metadata:(id)arg3 error:(id)arg4;
- (void)_saveStillImageResponse:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_updateResponse:(id)arg1 withOriginalIOSurface:(struct __IOSurface *)arg2 originalSize:(unsigned long)arg3 unfilteredPreviewSurface:(struct __IOSurface *)arg4 unfilteredPreviewSize:(unsigned long)arg5 filteredPreviewSurface:(struct __IOSurface *)arg6 filteredPreviewSize:(unsigned long)arg7 metadata:(id)arg8 error:(id)arg9;
- (void)_completedWriteForResponse:(id)arg1 request:(id)arg2 error:(id)arg3;
- (void)_completedResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;
- (void)_notifyServicesOfCompletedResponse:(id)arg1 error:(id)arg2;
- (void)_notifyServicesOfGeneratedResponse:(id)arg1 error:(id)arg2;
- (void)_generatedResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;
- (id)_stillImageCaptureResponseForRequest:(id)arg1 error:(id)arg2;
- (void)_notifyServicesOfEnqueuedRequest:(id)arg1;
- (void)_applyCaptureSettingsFromStillImageRequest:(id)arg1 withConnection:(id)arg2;
- (id)_captureConnectionForStillImageCapture;
- (id)_sanitizeStillImageRequest:(id)arg1;
- (void)_applyAudioSettingsFromRequest:(id)arg1;
- (void)_applyStillImageStabilizationSettingsFromRequest:(id)arg1;
- (void)_applyHDRSettingsFromRequest:(id)arg1;
- (void)_applyFlashSettingsFromRequest:(id)arg1;
- (void)_resetRecentFaceMetadata;
- (int)_serviceTypeForCaptureRequest:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *_servicesByType; // @synthesize _servicesByType=__servicesByType;
- (void)_createTimelapseServicesIfNecessary;
- (void)_createPanoramaServicesIfNecessary;
- (void)_createVideoServicesIfNecessary;
- (void)_createStillImageServicesIfNecessary;
- (void)_forceKeepAliveFailsafeTimeout;
- (void)_checkKeepAliveStatus;
@property(nonatomic, setter=_setVideoDataOutputEnabledForRenderer:) BOOL _videoDataOutputEnabledForRenderer; // @synthesize _videoDataOutputEnabledForRenderer=__videoDataOutputEnabledForRenderer;
@property(nonatomic, setter=_setPreviewLayerEnabledForRenderer:) BOOL _previewLayerEnabledForRenderer; // @synthesize _previewLayerEnabledForRenderer=__previewLayerEnabledForRenderer;
@property(nonatomic, getter=_isPreviewPaused, setter=_setPreviewPaused:) BOOL _previewPaused; // @synthesize _previewPaused=__previewPaused;
- (void)_lockFocusForAvalancheCapture;
- (void)_setEndianAndCircularTestEnabled:(BOOL)arg1;
- (void)_setPerformingAvalancheCapture:(BOOL)arg1;
@property(readonly, nonatomic) CAMAvalancheCaptureService *_avalancheCaptureService; // @synthesize _avalancheCaptureService=__avalancheCaptureService;
@property(setter=_setAtomicEffectsAvailable:) BOOL _atomicEffectsAvailable; // @synthesize _atomicEffectsAvailable=__atomicEffectsAvailable;
- (void)_notifyEffectFilterIndexChanged;
@property(retain, nonatomic, setter=_setEffectFilterIndices:) NSDictionary *_effectFilterIndices; // @synthesize _effectFilterIndices=__effectFilterIndices;
- (unsigned int)_sanitizeEffectFilterIndex:(unsigned int)arg1 forMode:(int)arg2;
@property(readonly, retain) NSObject<OS_dispatch_queue> *_effectFilterIndexQueue; // @synthesize _effectFilterIndexQueue=__effectFilterIndexQueue;
@property(nonatomic, setter=_setEffectsAvailable:) BOOL _effectsAvailable;
- (unsigned int)_activeFilterIndex;
- (void)_setSupportedCameraModes:(id)arg1;
- (BOOL)supportsPanorama;
- (float)_limitZoomFactor:(float)arg1 forDevice:(id)arg2;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
@property(nonatomic) BOOL use60FPSVideo; // @synthesize use60FPSVideo=_use60FPSVideo;
- (BOOL)_supportsHDRSuggestionForCaptureDevice:(id)arg1;
- (void)_suggestedHDRChanged;
- (void)_didTakePhoto;
- (void)_willTakePhoto;
- (void)_faceRectangleChanged;
- (void)_updateTorchAvailability;
- (void)_torchLevelChanged;
- (void)_torchActiveChanged;
- (void)_flashStateChanged;
- (void)_exposureTargetBiasChanged;
- (void)_whiteBalanceCompleted;
- (void)_whiteBalanceStarted;
- (void)_exposureCompleted;
- (void)_exposureStarted;
- (void)_focusCompleted;
- (void)_focusStarted;
- (void)_disableSubjectAreaChangeMonitoringIfNeeded;
- (BOOL)_isFocusModeContinuousAutoFocusAtCenter;
- (void)_enableSubjectAreaChangedMonitoringIfNeededFromFocusCompleted:(BOOL)arg1 fromExposureCompleted:(BOOL)arg2;
- (void)_autofocusAfterCapture;
- (void)_resetFocusAndExposureIfNotExplicitlyLocked;
@property(nonatomic) BOOL resetExposureWhenSubjectAreaChanged; // @synthesize resetExposureWhenSubjectAreaChanged=_resetExposureWhenSubjectAreaChanged;
- (int)effectiveExposureMode;
@property(nonatomic) BOOL resetFocusWhenSubjectAreaChanged; // @synthesize resetFocusWhenSubjectAreaChanged=_resetFocusWhenSubjectAreaChanged;
- (void)_startContinuousAutoExposureAtCenter;
- (void)_startContinuousAutoFocusAtCenter;
- (void)_resetFocus:(BOOL)arg1 andExposure:(BOOL)arg2;
- (BOOL)_useSmoothFocus;
- (int)_whiteBalanceModeForExposureMode:(int)arg1;
- (void)_updateWhiteBalanceModeForExposureMode:(int)arg1;
- (void)_setExposureMode:(int)arg1;
- (void)_setFocusModeLockedWithLensPosition;
- (void)_setFocusMode:(int)arg1 forceSmoothFocus:(BOOL)arg2;
- (int)_CAMExposureModeForAVExposureMode:(int)arg1;
- (int)_CAMFocusModeForAVFocusMode:(int)arg1;
- (int)_AVExposureModeForCAMExposureMode:(int)arg1;
- (BOOL)_modeAllowsAEAF;
- (int)_AVFocusModeForCAMFocusMode:(int)arg1;
- (void)_unlockCurrentDeviceForConfiguration;
- (BOOL)_lockCurrentDeviceForConfiguration;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@property(getter=_isConfiguringCamera, setter=_setConfiguringCamera:) BOOL _configuringCamera; // @synthesize _configuringCamera=__configuringCamera;
- (void)_updateIdleTimerForDidFinishRecording;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_disableIdleIndefinitely;
- (void)_resetIdleTimer;
- (void)setFaceDetectionEnabled:(BOOL)arg1 forceDisableImageProcessing:(BOOL)arg2;
- (void)_updateIdleTimerForCapturingTimelapseChanged;
- (void)_updateIdleTimerForStopVideoCapture;
- (void)_updateFocusAndExposureForVideoRecording;
- (id)_videoMetadataArrayIncludingSensitiveProperties:(BOOL)arg1;
- (void)_setVideoCapturePath:(id)arg1;
- (void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(BOOL)arg3;
- (struct __IOSurface *)_newFilteredSurfaceFromSurface:(struct __IOSurface *)arg1 filters:(id)arg2;
@property(readonly, retain) NSObject<OS_dispatch_queue> *_captureIsolationQueue; // @synthesize _captureIsolationQueue=__captureIsolationQueue;
- (void)_setOrientationForConnection:(id)arg1;
- (void)_setOrientation;
- (BOOL)isExposing;
- (BOOL)_isCapturingStillFromVideoMode;
- (BOOL)_sanityCheckSessionCanCaptureWithOutput:(id)arg1;
- (BOOL)capturePhotoUsingHDR:(BOOL)arg1;
- (void)_setKeepAlive:(BOOL)arg1 forVideoCapture:(BOOL)arg2;
- (void)performAutofocusAfterCapture;
- (void)_processCapturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(BOOL)arg3;
- (void)_updateIdleTimerForStillImageCaptured;
@property(readonly, nonatomic) NSMutableArray *_inflightVideoCaptureResponses; // @synthesize _inflightVideoCaptureResponses=__inflightVideoCaptureResponses;
- (void)_recoverFromServerError:(id)arg1;
- (void)_updateIdleTimerForPreviewStopped;
- (void)_setFlashMode:(int)arg1 force:(BOOL)arg2;
- (void)_updateIdleTimerForPreviewStarted;
- (BOOL)_shouldDisableLocationForTimelapseRecording;
- (BOOL)_modeUsesCompassHeading;
- (void)_setOrientationEventsEnabled:(BOOL)arg1;
@property(nonatomic) AVCaptureDeviceInput *currentInput; // @synthesize currentInput=_currentInput;
- (BOOL)_setupCamera;
- (void)_tearDownCamera;
@property(nonatomic, getter=_isSessionReady, setter=_setSessionReady:) BOOL _sessionReady; // @synthesize _sessionReady=__sessionReady;
- (void)executeBlockOnMainQueue:(CDUnknownBlockType)arg1;
- (void)_debug_cancelWaitForIris;
- (void)_forceDelaySuspendTimeout;
- (void)_setDelaySuspend:(BOOL)arg1;
@property(copy, nonatomic) CDUnknownBlockType postSessionSetupBlock; // @synthesize postSessionSetupBlock;
- (void)_subjectAreaDidChange:(id)arg1;
- (void)_inputPortFormatDescriptionDidChange:(id)arg1;
- (void)_movieFileRecordingCompleted:(id)arg1;
- (void)_interruptionEnded:(id)arg1;
- (void)_wasInterrupted:(id)arg1;
- (void)_sessionStopped:(id)arg1;
- (void)_setEffectsRenderer:(id)arg1;
- (id)_mogulFormatFromDevice:(id)arg1 frameRate:(double)arg2;
- (void)_debug_waitForIrisToOpen;
- (void)_debug_checkIris;
- (id)_debug_dispatchTimerQueue;
- (void)_jankyPreviewStartedWorkaround;
- (void)_enableKeepAliveFailsafeTimer;
@property(setter=_setDeviceLockCount:) int _deviceLockCount; // @synthesize _deviceLockCount=__deviceLockCount;
@property(getter=_isAtomicModeChangeWaitingForConfigureSession, setter=_setAtomicModeChangeWaitingForConfigureSession:) BOOL _atomicModeChangeWaitingForConfigureSession; // @synthesize _atomicModeChangeWaitingForConfigureSession=__atomicModeChangeWaitingForConfigureSession;
@property(getter=_isAtomicModeChangeWaitingForPreviewStarted, setter=_setAtomicModeChangeWaitingForPreviewStarted:) BOOL _atomicModeChangeWaitingForPreviewStarted; // @synthesize _atomicModeChangeWaitingForPreviewStarted=__atomicModeChangeWaitingForPreviewStarted;
- (void)enqueueBlockOnMainQueue:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=_isModeChangeWaitingForConfigureSession, setter=_setModeChangeWaitingForConfigureSession:) BOOL _modeChangeWaitingForConfigureSession;
@property(nonatomic, getter=_isModeChangeWaitingForPreviewStarted, setter=_setModeChangeWaitingForPreviewStarted:) BOOL _modeChangeWaitingForPreviewStarted;
- (void)_notifyControllerModeDidChange;
- (void)enqueueBlockInCaptureSessionQueue:(CDUnknownBlockType)arg1;
- (void)_updateEffectsRendererFilterIndexForceStateChange:(BOOL)arg1 renderNotifyBlock:(CDUnknownBlockType)arg2;
- (void)_startContinuousAEAFAtCenter;
- (BOOL)_configureSessionWithCameraMode:(int)arg1 cameraDevice:(int)arg2 options:(id)arg3;
- (id)_captureMainQueueConfigurationOptions;
- (void)_setCameraMode:(int)arg1 cameraDevice:(int)arg2 forceConfigure:(BOOL)arg3;
- (void)_updatePreviewLayerEnabled;
- (void)_updateEffectsVideoDataOutputEnabled;
@property(nonatomic) AVCaptureOutput *currentOutput; // @synthesize currentOutput=_currentOutput;
- (void)_setFaceDetectionEnabled:(BOOL)arg1 forceDisableImageProcessing:(BOOL)arg2 forCaptureDevice:(id)arg3 captureOutput:(id)arg4;
@property(nonatomic, getter=isCapturingTimelapse) BOOL capturingTimelapse; // @synthesize capturingTimelapse=_capturingTimelapse;
- (void)_deviceConfigurationForPanoramaOptions:(struct __CFDictionary *)arg1 captureDevice:(id)arg2 deviceFormat:(id *)arg3 minFrameDuration:(CDStruct_198678f7 *)arg4 maxFrameDuration:(CDStruct_198678f7 *)arg5;
- (void)_cleanupPanoramaOnSessionQueue:(BOOL)arg1;
- (id)_currentVideoConnection;
- (void)_setupPanoramaForDevice:(id)arg1 output:(id)arg2 options:(out const struct __CFDictionary **)arg3;
- (BOOL)_canCapturePhotoFromVideoMode;
- (void)_cancelDelayedFocusRequests;
- (id)_photoModeSessionPresetForMode:(int)arg1 device:(int)arg2;
- (id)_videoModeSessionPresetForDevice:(int)arg1 options:(id)arg2;
- (BOOL)_safeSetCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (void)_updateEffectsRendererMirroring;
- (void)_destroyAllServices;
- (void)_imageWriterQueueAvailabilityChanged;
- (void)_setCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (void)_teardownKeepAliveFailsafeTimer;
- (void)_teardownKeepAliveTimer;
- (void)_teardownDelaySuspendTimer;
- (void)_setLocationEnabled:(BOOL)arg1;
- (void)_destroyCamera;
- (void)_debug_teardownDispatchTimer;
- (void)_createServicesIfNecessaryForMode:(int)arg1;
- (void)_updateSupportedCameraModes;
- (void)_updateCallStatus;
- (void)_callStateDidChange:(id)arg1;
- (double)minimumVideoCaptureDuration;
- (void)_capturedPhotoWithCaptureDictionary:(id)arg1 metadata:(id)arg2;
- (unsigned int)effectFilterIndexForMode:(int)arg1;
@property(readonly, nonatomic) float panoramaPreviewScale; // @synthesize panoramaPreviewScale=_panoramaPreviewScale;
- (void)setPanoramaImageQueueLayer:(id)arg1;
- (int)numberOfCapturedAvalanchePhotos;
- (BOOL)supportsHDRSuggestionForDevice:(int)arg1;
- (BOOL)supportsHDRForDevice:(int)arg1 mode:(int)arg2;
@property(readonly, nonatomic, getter=isHDRSuggested) BOOL HDRSuggested;
- (BOOL)inCall;
@property(nonatomic) BOOL canCapturePhotoFromVideoModeWhenNotRecording; // @synthesize canCapturePhotoFromVideoModeWhenNotRecording=_canCapturePhotoFromVideoModeWhenNotRecording;
- (BOOL)isChangingModes;
- (BOOL)canCapturePhotoDuringRecording;
@property(readonly, nonatomic) BOOL supportsHDR;
- (BOOL)hasRearCamera;
- (BOOL)hasFrontCamera;
- (double)mogulFrameRate;
@property(nonatomic) BOOL useAlternateSlomoRear; // @synthesize useAlternateSlomoRear=_useAlternateSlomoRear;
@property(nonatomic) BOOL useAlternateSlomoFront; // @synthesize useAlternateSlomoFront=_useAlternateSlomoFront;
@property(readonly, nonatomic) BOOL allowsAlternateSlomoRear;
@property(readonly, nonatomic) BOOL allowsAlternateSlomoFront;
- (void)resumeSubjectAreaChangesAfterDelay:(double)arg1;
@property(readonly, nonatomic) float exposureTargetBiasMax;
@property(readonly, nonatomic) float exposureTargetBiasMin;
- (void)suspendSubjectAreaChanges;
- (BOOL)canChangeFocusOrExposure;
@property(readonly, nonatomic) float exposureTargetBiasDefault;
- (void)restartContinuousAEAFAtCenter;
- (void)setEffectFilterIndex:(unsigned int)arg1 forMode:(int)arg2;
- (BOOL)isExposureModeCenteredContinuous;
- (BOOL)isFocusingOnFace;
- (int)effectiveFocusMode;
@property(nonatomic) BOOL userLockedExposure; // @synthesize userLockedExposure=_userLockedExposure;
@property(nonatomic) BOOL userLockedFocus; // @synthesize userLockedFocus=_userLockedFocus;
- (BOOL)isSupportedExposureMode:(int)arg1;
- (BOOL)isSupportedFocusMode:(int)arg1;
- (BOOL)_shouldResetExposureWhenSubjectAreaChanged;
- (BOOL)_shouldResetFocusWhenSubjectAreaChanged;
- (BOOL)isPreviewMirrored;
@property(nonatomic) int previewOrientation;
- (BOOL)currentlyAllowedToExposeAtPointOfInterestWithMode:(int)arg1;
- (BOOL)currentlyAllowedToFocusAtPointOfInterestWithMode:(int)arg1;
- (void)_removeVideoCaptureFileAndDirectoryAtPath:(id)arg1;
@property(nonatomic) float exposureTargetBias;
- (void)setUserLockedFocus:(BOOL)arg1 exposure:(BOOL)arg2;
- (BOOL)_didSendPreviewStartedCallbackToEmptyDelegate;
- (void)smoothFocusAtCenterForVideoRecording;
- (double)currentMaxFrameDuration;
- (float)maximumZoomFactorForDevice:(int)arg1;
- (BOOL)isCapturingPanorama;
- (BOOL)canCaptureVideo;
@property(readonly, retain, nonatomic) CIFilter *activeFilter;
- (BOOL)supportsLiveEffects;
- (void)setPanoramaCaptureDirection:(int)arg1;
- (void)stopPanoramaCapture;
- (void)enqueuePanoramaRequest:(id)arg1;
- (void)_panoShouldEnd;
- (void)postOrientationChangedNotification:(int)arg1 force:(BOOL)arg2;
- (id)videoCapturePath;
- (BOOL)isTorchOn;
- (BOOL)isCapturingVideo;
- (void)enqueueVideoCaptureRequest:(id)arg1;
- (BOOL)supportsPreviewDuringHDR;
@property(nonatomic) BOOL performingAvalancheCapture; // @synthesize performingAvalancheCapture=_performingAvalancheCapture;
- (BOOL)supportsAvalancheAnalysisForDevice:(int)arg1;
- (BOOL)flashWillFire;
- (void)setFocusDisabled:(BOOL)arg1;
- (BOOL)isFocusing;
- (BOOL)isTorchDisabled;
@property(copy, nonatomic) NSArray *supportedCameraModes; // @synthesize supportedCameraModes=_supportedCameraModes;
@property(readonly, nonatomic) struct CGRect cleanAperture; // @synthesize cleanAperture=_cleanAperture;
- (BOOL)hasInheritedForegroundState;
- (void)resumePreview;
- (void)_startPreview:(CDUnknownBlockType)arg1;
- (void)_synchronizeSettings;
@property(retain) CAMEffectsRenderer *effectsRenderer; // @synthesize effectsRenderer=_effectsRenderer;
- (BOOL)supportsVideoCapture;
- (float)minimumZoomFactorForDevice:(int)arg1;
- (void)_inCallStatusChanged:(BOOL)arg1;
@property(readonly, nonatomic) struct CGSize panoramaPreviewSize; // @synthesize panoramaPreviewSize=_panoramaPreviewSize;
- (void)notifyLocationAcquiredForTimelapse;
- (void)resetFocusAndExposureIfNotExplicitlyLocked;
- (void)unlockDeviceForFocusConfiguration;
- (void)setFocusModeLockedWithLensPosition:(float)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)lockDeviceForFocusConfiguration;
- (BOOL)enqueueStillImageCaptureRequest:(id)arg1;
- (BOOL)canCapturePhoto;
- (void)_previewStarted;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (BOOL)canContinueAvalancheCapture;
- (void)cancelAvalancheCapture;
- (void)finishAvalancheCapture;
- (void)startAvalancheCapture;
- (id)recentFaceMetadata;
- (float)focusLensPosition;
@property(nonatomic) int captureOrientation; // @synthesize captureOrientation=_captureOrientation;
@property(nonatomic) BOOL isCameraApp;
- (void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(BOOL)arg2 animated:(BOOL)arg3;
- (void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRendererDidStartPreview:(id)arg1;
- (void)_runOnMainThreadImmediatelyIfPossibleWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(BOOL)arg2;
- (void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(BOOL)arg2;
- (void)_deviceStarted:(id)arg1;
- (id)effectFilterIndices;
- (void)_setDefaultPrewarmDate:(id)arg1;
@property(nonatomic) int cameraMode;
- (void)setEffectFilterIndices:(id)arg1 forceStateChange:(BOOL)arg2;
- (void)setCameraMode:(int)arg1 device:(int)arg2;
@property(readonly, nonatomic) BOOL supportsHDRSuggestion;
- (void)startPreview:(CDUnknownBlockType)arg1;
- (void)_startPreviewWithCameraDevice:(int)arg1 cameraMode:(int)arg2 effectFilterIndices:(id)arg3;
- (void)_pptTestSetAutofocusDisabled:(BOOL)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
@property(nonatomic) int cameraDevice;
- (void)stopVideoCapture;
- (void)startVideoCapture;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)_serverDied:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (BOOL)isReady;
- (void)_setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(readonly, nonatomic) BOOL isStillImageStabilizationActive;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)cancelVideoZoomRamp;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
@property(nonatomic) float videoZoomFactor;
@property(nonatomic) struct CGPoint exposurePointOfInterest;
- (BOOL)isExposurePointOfInterestSupported;
- (void)setExposureMode:(int)arg1;
@property(nonatomic) struct CGPoint focusPointOfInterest;
- (BOOL)isFocusPointOfInterestSupported;
- (void)setFocusMode:(int)arg1;
- (BOOL)isTorchActive;
@property(nonatomic) int flashMode;
- (BOOL)hasFlash;
- (struct CGRect)faceRectangle;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

