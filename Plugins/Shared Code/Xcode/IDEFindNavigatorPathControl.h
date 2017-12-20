//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.13.sdk.sdk
//

#include "Shared.h"

#import "DVTLayoutView_ML.h"

#import "DVTWindowActivationStateObserver-Protocol.h"

@class DVTStackView_ML, NSArray, NSDictionary, NSImage, NSPopUpButton, NSString;
@protocol DVTCancellable, IDEFindNavigatorPathControlDelegate;

@interface IDEFindNavigatorPathControl : DVTLayoutView_ML <DVTWindowActivationStateObserver>
{
    DVTStackView_ML *_stackView;
    NSDictionary *_segmentValues;
    NSDictionary *_segmentPopUpInsetViews;
    NSArray *_dividerImageViews;
    NSImage *_activeDividerImage;
    NSImage *_inactiveDividerImage;
    id <DVTCancellable> _windowActivationObservation;
    NSPopUpButton *_popUpButtonForMeasuring;
    id <IDEFindNavigatorPathControlDelegate> _delegate;
}

@property(retain) id <IDEFindNavigatorPathControlDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)userChoseSegmentValue:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)layoutBottomUp;
- (void)refresh;
- (void)synchronizePopUp:(id)arg1 forSegment:(id)arg2;
- (struct CGSize)popUpSizeForTitle:(id)arg1;
- (id)makePopUpButtonInsetView;
- (id)makePopUpButton;
- (void)scheduleRefresh;
- (id)segmentForPopUpButton:(id)arg1;
- (id)popUpInsetViewForSegment:(id)arg1;
- (id)valueForSegment:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
