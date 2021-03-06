/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUViewControllerTransition.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@interface PUModalTransition : PUViewControllerTransition <UIViewControllerTransitioningDelegate> {

	int __operation;

}

@property (assign,setter=_setOperation:,nonatomic) int _operation;              //@synthesize _operation=__operation - In the implementation block
-(void)animateTransition:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(int)_operation;
-(void)completeInteractivePresentTransitionFinished:(BOOL)arg1 ;
-(void)completeInteractiveDismissTransitionFinished:(BOOL)arg1 ;
-(void)_setOperation:(int)arg1 ;
-(void)transitionWillPresentInteractively:(BOOL)arg1 ;
-(void)transitionWillDismissInteractively:(BOOL)arg1 ;
@end

