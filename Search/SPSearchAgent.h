/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:16 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <ChatKit/SPDaemonQueryDelegate.h>
#import <AVFoundation/MCProfileConnectionObserver.h>

@protocol SPSearchAgentDelegate;
@class SPDaemonQueryToken, NSString, NSMutableArray, NSArray, SPSearchResultSection, NSObject;

@interface SPSearchAgent : NSObject <SPDaemonQueryDelegate, MCProfileConnectionObserver> {

	SPDaemonQueryToken* _currentToken;
	NSString* _prefixWithNoResults;
	NSMutableArray* _sections;
	NSArray* _searchDomains;
	unsigned _resultCount;
	int _options;
	SPSearchResultSection* _topHitResultSection;
	SPSearchResultSection* _searchThroughSection;
	BOOL _searchThroughAllowed;
	BOOL _queryComplete;
	NSObject<SPSearchAgentDelegate>* _delegate;

}

@property (assign,nonatomic) int options;                                             //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned resultCount;                                  //@synthesize resultCount=_resultCount - In the implementation block
@property (nonatomic,readonly) BOOL queryComplete;                                    //@synthesize queryComplete=_queryComplete - In the implementation block
@property (nonatomic,retain) NSArray * searchDomains;                                 //@synthesize searchDomains=_searchDomains - In the implementation block
@property (assign,nonatomic) NSObject<SPSearchAgentDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned)resultCount;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)invalidate;
-(void)clear;
-(void)setOptions:(int)arg1 ;
-(int)options;
-(id)searchDomains;
-(void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2 ;
-(void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2 ;
-(void)searchDaemonQueryCompleted:(id)arg1 ;
-(id)initWithOptions:(int)arg1 ;
-(unsigned)sectionCount;
-(id)sectionAtIndex:(unsigned)arg1 ;
-(void)handleOptionsForNewSections:(id)arg1 ;
-(int)_indexOfCompatibleSection:(id)arg1 ;
-(void)addSections:(id)arg1 ;
-(id)queryString;
-(BOOL)_shouldIgnoreQuery:(id)arg1 ;
-(void)updateSearchThroughWithString:(id)arg1 ;
-(void)addDeserializer:(id)arg1 ;
-(BOOL)hasResults;
-(void)stuffChanged;
-(void)setSearchDomains:(id)arg1 ;
-(void)removeSectionAtIndex:(unsigned)arg1 ;
-(void)retrieveImageDataForResult:(id)arg1 inSection:(id)arg2 preferredSize:(CGSize)arg3 completion:(/*^block*/ id)arg4 ;
-(BOOL)setQueryString:(id)arg1 ;
-(BOOL)queryComplete;
@end
