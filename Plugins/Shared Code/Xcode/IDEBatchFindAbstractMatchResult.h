//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.13.sdk.sdk
//

#include "Shared.h"

#import "IDEBatchFindAbstractResult.h"

@class NSString;

@interface IDEBatchFindAbstractMatchResult : IDEBatchFindAbstractResult
{
    NSString *_contextText;
    struct _NSRange _contextTextMatchingRange;
}

@property(readonly) struct _NSRange contextTextMatchingRange; // @synthesize contextTextMatchingRange=_contextTextMatchingRange;
@property(readonly) NSString *contextText; // @synthesize contextText=_contextText;
// - (void).cxx_destruct;
- (BOOL)textRepresentationForPasteboardIsFileName;
- (id)textRepresentationForPasteboard;
- (BOOL)allowsSummarization;
- (BOOL)contributesToResultCount;
- (BOOL)contributesToFileResultCount;
- (id)initWithDocumentLocation:(id)arg1 contextText:(id)arg2 contextTextMatchingRange:(struct _NSRange)arg3 initialNumberOfLinesCalculator:(CDUnknownBlockType)arg4 parent:(id)arg5;

@end

