//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.13.sdk.sdk
//

#include "Shared.h"

#import "DVTSearchFieldTextEditor.h"

@interface DVTFindPatternFieldEditor : DVTSearchFieldTextEditor
{
}

+ (id)findPatternFieldEditorForWindow:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)readablePasteboardTypes;
- (id)writablePasteboardTypes;
- (id)acceptableDragTypes;
- (BOOL)usesFontPanel;
- (void)setUsesFontPanel:(BOOL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
