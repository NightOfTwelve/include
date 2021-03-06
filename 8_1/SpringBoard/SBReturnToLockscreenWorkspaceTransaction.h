//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBActivateAppUnderLockScreenWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class NSString, SBApplication, SBUIAnimationController;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBApplication *_fromApp;
    BOOL _workspaceAlreadyResumed;
    BOOL _animatedAppDeactivation;
    SBUIAnimationController *_animation;
    BOOL _suspendWorkspace;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (void)_alertDidActivate;
- (void)_didComplete;
- (void)_begin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithAlertManager:(id)arg1 fromApplication:(id)arg2 toLockScreenController:(id)arg3 andApp:(id)arg4 withResult:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

