//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.13.sdk.sdk
//

@class DVTStructuredLayoutViewState, NSView;

@protocol DVTStructuredLayoutView
@property(readonly) DVTStructuredLayoutViewState *dvt_layoutState;

@optional
- (void)dvt_invalidateLayout;
- (void)dvt_didCompleteLayout;
- (void)dvt_didLayoutSubview:(NSView *)arg1;
- (void)dvt_willLayoutSubview:(NSView *)arg1;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
@end
