//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.13.sdk.sdk
//


@class IDEEditorDocument, IDENavigableItem, IDENavigableItemCoordinator, NSArray, NSHashTable;

@protocol IDENavigableItemCoordinatorDelegate <NSObject>

@optional
- (void)navigableItemCoordinator:(IDENavigableItemCoordinator *)arg1 didForgetItems:(NSHashTable *)arg2;
- (void)navigableItemCoordinator:(IDENavigableItemCoordinator *)arg1 willForgetItems:(NSHashTable *)arg2;
- (void)didEndTransactionScopeForNavigableItemCoordinator:(IDENavigableItemCoordinator *)arg1;
- (void)willBeginTransactionScopeForNavigableItemCoordinator:(IDENavigableItemCoordinator *)arg1;
- (NSArray *)navigableItem:(IDENavigableItem *)arg1 childRepresentedObjectsForArray:(NSArray *)arg2;
- (IDEEditorDocument *)navigableItemCoordinator:(IDENavigableItemCoordinator *)arg1 editorDocumentForNavigableItem:(IDENavigableItem *)arg2;
@end

