//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SoundsPrefController.h"

@class NSArray, PSSpecifier;

@interface BulletinBoardAppDetailController : SoundsPrefController
{
    PSSpecifier *_shownItemCount;
    PSSpecifier *_showInLockscreen;
    NSArray *_loadedItems;
    NSArray *_accountSpecifiers;
    int _index;
    PSSpecifier *_shownItemHeader;
}

+ (id)applicationSpecifierForBBSection:(id)arg1 wantsIcon:(BOOL)arg2 controller:(id)arg3;
+ (void)localizeWeeAppName:(id)arg1;
@property(retain, nonatomic) PSSpecifier *shownItemHeader; // @synthesize shownItemHeader=_shownItemHeader;
@property(retain, nonatomic) PSSpecifier *shownItemCount; // @synthesize shownItemCount=_shownItemCount;
@property(retain, nonatomic) NSArray *accountSpecifiers; // @synthesize accountSpecifiers=_accountSpecifiers;
- (id)showsMessagePreview:(id)arg1;
- (void)setShowsMessagePreview:(id)arg1 specifier:(id)arg2;
- (void)setAlertCount:(id)arg1 specifier:(id)arg2;
- (id)alertCount:(id)arg1;
- (int)_validateAlertCount:(int)arg1;
- (void)setIncomingAlertFiltration:(id)arg1 specifier:(id)arg2;
- (id)incomingAlertFiltration:(id)arg1;
- (int)_validateAlertFiltration:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setBadges:(id)arg1 specifier:(id)arg2;
- (void)setSounds:(id)arg1 specifier:(id)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setValue:(id)arg1 notificationType:(unsigned int)arg2;
- (id)badges:(id)arg1;
- (id)sounds:(id)arg1;
- (id)_valueOfNotificationType:(unsigned int)arg1;
- (void)setItemsPerApp:(id)arg1 specifier:(id)arg2;
- (id)getItemsPerApp:(id)arg1;
- (void)setViewInLockScreen:(id)arg1 specifier:(id)arg2;
- (id)getViewInLockScreen:(id)arg1;
- (void)setAlertType:(id)arg1 specifier:(id)arg2;
- (void)_setGKAlertState:(id)arg1;
- (id)getAlertType:(id)arg1;
- (void)changeSubSection:(id)arg1 toOnPosition:(BOOL)arg2;
- (void)setShowInNotificationCenter:(id)arg1 specifier:(id)arg2;
- (id)showInNotificationCenter:(id)arg1;
- (id)effectiveSectionInfo;
- (id)calendarCount:(id)arg1;
- (id)specifiers;
- (void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2;
- (void)setUnits:(id)arg1 specifier:(id)arg2;
- (void)_setupItemsPerAppSpecifier:(id)arg1;
- (void)dealloc;

@end

