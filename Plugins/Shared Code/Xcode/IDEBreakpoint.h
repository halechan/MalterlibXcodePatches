//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.13.sdk.sdk
//

#include "Shared.h"

#import "DVTInvalidation-Protocol.h"
#import "DVTXMLUnarchiving-Protocol.h"

@class DVTObservingToken, DVTStackBacktrace, IDEBreakpointBucket, NSArray, NSMapTable, NSMutableArray, NSSet, NSString;
@protocol IDEBreakpointDelegate;

@interface IDEBreakpoint : NSObject <DVTXMLUnarchiving, NSCopying, DVTInvalidation>
{
    NSMutableArray *_actions;
    NSMutableArray *_locations;
    NSMapTable *_actionsToSetsOfObservers;
    DVTObservingToken *_actionsExpressionsObserverToken;
    BOOL _modified;
    BOOL _shouldBeEnabled;
    BOOL _continueAfterRunningActions;
    BOOL _textInFilterableTextFieldModified;
    int _breakpointStackSelectionBehavior;
    NSString *_displayName;
    IDEBreakpointBucket *_bucket;
    id <IDEBreakpointDelegate> _delegate;
    unsigned long long _ignoreCount;
    unsigned long long _hitCount;
    NSString *_condition;
    NSString *_customStopReasonString;
    NSSet *_actionClassesToIgnoreAsModified;
}

+ (id)keyPathsForValuesAffectingModifiedDescription;
+ (id)keyPathsForValuesAffectingModified;
+ (id)propertiesAffectingPersistenceState;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
@property(readonly) NSSet *actionClassesToIgnoreAsModified; // @synthesize actionClassesToIgnoreAsModified=_actionClassesToIgnoreAsModified;
@property(retain) NSString *customStopReasonString; // @synthesize customStopReasonString=_customStopReasonString;
@property int breakpointStackSelectionBehavior; // @synthesize breakpointStackSelectionBehavior=_breakpointStackSelectionBehavior;
@property BOOL textInFilterableTextFieldModified; // @synthesize textInFilterableTextFieldModified=_textInFilterableTextFieldModified;
@property(nonatomic) BOOL continueAfterRunningActions; // @synthesize continueAfterRunningActions=_continueAfterRunningActions;
@property(copy, nonatomic) NSString *condition; // @synthesize condition=_condition;
@property unsigned long long hitCount; // @synthesize hitCount=_hitCount;
@property(nonatomic) unsigned long long ignoreCount; // @synthesize ignoreCount=_ignoreCount;
@property(nonatomic) BOOL shouldBeEnabled; // @synthesize shouldBeEnabled=_shouldBeEnabled;
@property __weak id <IDEBreakpointDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDEBreakpointBucket *bucket; // @synthesize bucket=_bucket;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) BOOL modified; // @synthesize modified=_modified;
// - (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)addLocations:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addActions:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (id)_actionArchivingProxiesArray;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setBreakpointStackSelectionBehaviorFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setContinueAfterRunningActionsFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setConditionFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setShouldBeEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (BOOL)_booleanValueFromUTF8String:(char *)arg1;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)_handleActionsChanged:(id)arg1;
- (void)_handleDisplayNameChanged:(id)arg1;
- (void)resetActionExpressionResults;
@property(readonly, nonatomic) NSString *accessibilityDescription;
@property(readonly, nonatomic) NSString *modifiedDescription;
- (BOOL)_shouldBeModified;
- (void)locationWasRemoved:(id)arg1;
- (void)_updateLocation:(id)arg1 fromLocation:(id)arg2;
- (void)_locationWasResolved:(id)arg1;
- (unsigned long long)_indexOfSimilarBreakpointLocationMatching:(id)arg1 inLocations:(id)arg2;
- (void)locationWasResolved:(id)arg1;
- (void)setInitialResolvedLocations:(id)arg1;
@property(readonly) BOOL locationsProvideAdditionalInformation;
- (void)_updateModified;
- (void)toggleShouldBeEnabled;
- (void)_notifyPersistencyStateChanged;
- (void)primitiveSetBucket:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)_dvt_commonInit;

// Remaining properties
@property(copy) NSArray *actions; // @dynamic actions;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSArray *locations; // @dynamic locations;
@property(readonly) NSMutableArray *mutableActions; // @dynamic mutableActions;
@property(readonly) NSMutableArray *mutableLocations; // @dynamic mutableLocations;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

