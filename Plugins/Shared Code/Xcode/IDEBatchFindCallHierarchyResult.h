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

@class IDEIndexSymbol;

@interface IDEBatchFindCallHierarchyResult : IDEBatchFindAbstractResult
{
    BOOL _recursive;
    IDEIndexSymbol *_symbol;
}

@property(readonly, getter=isRecursive) BOOL recursive; // @synthesize recursive=_recursive;
@property(readonly) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
// - (void).cxx_destruct;
- (BOOL)textRepresentationForPasteboardIsFileName;
- (id)textRepresentationForPasteboard;
- (BOOL)allowsSummarization;
- (BOOL)contributesToResultCount;
- (BOOL)contributesToFileResultCount;
- (id)initWithDocumentLocation:(id)arg1 parent:(id)arg2 symbol:(id)arg3;
- (BOOL)recursivelyReferences:(id)arg1;

@end

