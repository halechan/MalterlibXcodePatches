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

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, NSArray, NSMapTable, NSString, NSView;

@interface DVTWrapperView : DVTLayoutView_ML <DVTInvalidation>
{
    struct CGSize _minContentFrameSize;
    struct CGSize _maxContentFrameSize;
    BOOL _isPadding;
    BOOL _allowAddSubview;
    NSMapTable *_subviewObservations;
    NSArray *_currentContentViewConstraints;
    DVTStackBacktrace *_setFrameSizeBacktrace;
    NSString *_frameSizeDimentionIsNaN;
    BOOL _constraintsCameFromNib;
    NSString *_viewControllerClassName;
    BOOL _disablePaddingWarning;
    BOOL _isGrouped;
    int _verticalContentViewResizingMode;
    int _horizontalContentViewResizingMode;
    long long _horizontalAlignmentWhenClipping;
    long long _horizontalAlignmentWhenPadding;
    long long _verticalAlignmentWhenClipping;
    long long _verticalAlignmentWhenPadding;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (void)initialize;
@property BOOL isGrouped; // @synthesize isGrouped=_isGrouped;
@property BOOL disablePaddingWarning; // @synthesize disablePaddingWarning=_disablePaddingWarning;
@property(nonatomic) int horizontalContentViewResizingMode; // @synthesize horizontalContentViewResizingMode=_horizontalContentViewResizingMode;
@property(nonatomic) int verticalContentViewResizingMode; // @synthesize verticalContentViewResizingMode=_verticalContentViewResizingMode;
@property(nonatomic) long long verticalAlignmentWhenPadding; // @synthesize verticalAlignmentWhenPadding=_verticalAlignmentWhenPadding;
@property(nonatomic) long long verticalAlignmentWhenClipping; // @synthesize verticalAlignmentWhenClipping=_verticalAlignmentWhenClipping;
@property(nonatomic) long long horizontalAlignmentWhenPadding; // @synthesize horizontalAlignmentWhenPadding=_horizontalAlignmentWhenPadding;
@property(nonatomic) long long horizontalAlignmentWhenClipping; // @synthesize horizontalAlignmentWhenClipping=_horizontalAlignmentWhenClipping;
@property(nonatomic) struct CGSize maximumContentViewFrameSize; // @synthesize maximumContentViewFrameSize=_maxContentFrameSize;
@property(nonatomic) struct CGSize minimumContentViewFrameSize; // @synthesize minimumContentViewFrameSize=_minContentFrameSize;
// - (void).cxx_destruct;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_invalidateLayoutBecauseOfSubviewFrameChange:(id)arg1;
- (struct CGSize)dvt_minimumSize;
@property(retain) NSView *contentView;
- (void)dvt_insertBackgroundVisualEffectView:(id)arg1;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)setSubviews:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (void)_syncContentViewTranslatesAutoresizingMaskIntoConstraintsValue;
- (BOOL)_requiresConstraintBasedLayout;
- (void)updateConstraints;
- (void)_setConstraintsIfNecessary;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

