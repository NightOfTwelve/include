//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAMTimelapseJPEGReader : NSObject
{
}

+ (struct CGImage *)createCGImageFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(int)arg3 useBGRA:(BOOL)arg4;
+ (id)_decodeOptionsWithMaxPixelSize:(int)arg1 applyTransform:(BOOL)arg2 useBGRA:(BOOL)arg3;
+ (struct __CVBuffer *)createPixelBufferFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(int)arg3 useBGRA:(BOOL)arg4;
+ (id)newDataFromFilePath:(id)arg1;

@end

