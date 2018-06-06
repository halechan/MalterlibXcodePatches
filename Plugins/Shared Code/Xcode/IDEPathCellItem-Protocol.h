//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.13.sdk.sdk
//

@class NSArray, NSImage, NSString, NSURL;
@protocol IDEPathCellItem, NSObject;

@protocol IDEPathCellItem
@property(nonatomic, readonly) NSString *accessibilityIdentifier;
@property(nonatomic, readonly) NSURL *representedURLForExternalDrag;
@property(nonatomic, readonly) NSURL *representedURL;
@property(nonatomic, readonly) NSString *groupIdentifier;
- (BOOL)isEnabled;
- (BOOL)isVisible;
- (BOOL)isValid;
- (BOOL)representsDocumentRoot;
- (BOOL)isLeaf;
@property(nonatomic, readonly) NSArray *childItems;
@property(nonatomic, readonly) id <IDEPathCellItem, NSObject> parentItem;
@property(nonatomic, readonly) id representedObject;
@property(nonatomic, readonly) NSString *toolTip;
@property(nonatomic, readonly) NSImage *image;
@property(nonatomic, readonly) NSString *name;

// Remaining properties
@property(nonatomic, readonly) BOOL enabled;
@property(nonatomic, readonly) BOOL leaf;
@property(nonatomic, readonly) BOOL valid;
@property(nonatomic, readonly) BOOL visible;
@end

