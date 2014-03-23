/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol PLMoviePlayerControllerDelegate <NSObject>
- (void)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
- (void)moviePlayerHeadsetNextTrackPressed:(id)arg1;
- (void)moviePlayerHeadsetPlayPausePressed:(id)arg1;
- (id)moviePlayerRequestsPickedAirplayRoute:(id)arg1;
- (_Bool)moviePlayerControllerShouldAllowExternalPlayback:(id)arg1;
- (void)moviePlayerEncounteredAuthenticationError:(id)arg1;
- (void)moviePlayerWasSuspendedDuringPlayback:(id)arg1;
- (void)moviePlayerUpdatedDestinationPlaceholder:(id)arg1;
- (void)moviePlayerDurationAvailable:(id)arg1;
- (void)moviePlayerPlaybackDidEnd:(id)arg1;
- (void)moviePlayerPlaybackRateDidChange:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned long long)arg2;
- (void)moviePlayerBufferingStateDidChange:(id)arg1;
- (void)moviePlayerReadyToDisplay:(id)arg1;
- (void)moviePlayerReadyToPlay:(id)arg1;
- (_Bool)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2;
- (void)moviePlayerControllerWillResignAsActiveController:(id)arg1;
- (void)moviePlayerControllerDidBecomeActiveController:(id)arg1;
@end
