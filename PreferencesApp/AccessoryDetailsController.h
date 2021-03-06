//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "EAAccessoryDelegate.h"
#import "EADiscoveredWirelessAccessoryDelegate.h"

@class EAAccessory, EADiscoveredWirelessAccessory, NSMutableDictionary;

@interface AccessoryDetailsController : PSListController <EAAccessoryDelegate, EADiscoveredWirelessAccessoryDelegate>
{
    EAAccessory *_accessory;
    EADiscoveredWirelessAccessory *_wirelessAccessory;
    NSMutableDictionary *_accessoryInfoSpecifiers;
    BOOL _shouldEscape;
    BOOL _finishedAppearing;
}

- (void)wirelessAccessoryIsUnavailable:(id)arg1;
- (void)accessoryDidDisconnect:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_availableWirelessAccessoryDidUpdate:(id)arg1;
- (void)findAppForAccessory;
- (void)disconnect;
- (void)connect;
- (id)name;
- (id)hardwareRevision;
- (id)firmwareRevision;
- (id)serialNumber;
- (id)modelNumber;
- (id)manufacturer;
- (void)viewDidAppear:(BOOL)arg1;
- (id)specifiers;
- (void)dealloc;
- (id)init;

@end

