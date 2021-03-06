//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@interface PSInternationalController : PSListController
{
    struct __CFLocale *_locale;
    double _sampleTime;
}

+ (id)capitalizeFirstPartOfCountry:(id)arg1;
+ (id)shortTitlesForLanguageIdentifiers:(id)arg1;
+ (id)titlesForLanguageIdentifiers:(id)arg1;
+ (id)voiceControlLanguageIdentifiers;
+ (void)setLanguage:(id)arg1;
+ (void)setLocale:(id)arg1;
- (id)calendar:(id)arg1;
- (void)setCalendar:(id)arg1 specifier:(id)arg2;
- (id)voiceControlLanguage:(id)arg1;
- (void)setVoiceControlLanguage:(id)arg1 specifier:(id)arg2;
- (id)localizedLanguage:(id)arg1;
- (void)showLanguageSheet:(id)arg1;
- (void)_loadLocaleIfNeeded;
- (id)formattedPhoneNumber:(id)arg1;
- (id)formattedTime:(id)arg1;
- (id)defaultCalendarForLocale:(id)arg1;
- (id)localizedComponent:(id)arg1 forDictionary:(id)arg2;
- (void)reloadLocale;
- (void)localeChangedAction;
- (id)locale:(id)arg1;
- (void)setLocale:(id)arg1 specifier:(id)arg2;
- (id)language:(id)arg1;
- (void)setLanguage:(id)arg1 specifier:(id)arg2;
- (void)reloadSpecifiers;
- (id)specifiers;
- (id)formattedDate:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;

@end

