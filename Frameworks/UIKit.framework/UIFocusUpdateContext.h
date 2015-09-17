/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFocusUpdateContext : NSObject {
    unsigned int _focusHeading;
    struct CGVector { 
        float dx; 
        float dy; 
    } _focusVelocity;
    UIFocusGuide *_focusedGuide;
    UIView *_initialNextFocusedView;
    BOOL _isValidated;
    UIView *_nextFocusedView;
    UIView *_previouslyFocusedView;
    BOOL _requiresEnvironmentValidation;
    BOOL _requiresNextFocusedView;
    BOOL _shouldUpdateNextFocusedView;
    BOOL _valid;
}

@property (nonatomic) unsigned int focusHeading;
@property (getter=_isFocusMoving, nonatomic, readonly) BOOL focusMoving;
@property (getter=_focusVelocity, nonatomic, readonly) struct CGVector { float x1; float x2; } focusVelocity;
@property (getter=_focusVelocityBasedScaleFactor, nonatomic, readonly) float focusVelocityBasedScaleFactor;
@property (getter=_focusedGuide, nonatomic, readonly) UIFocusGuide *focusedGuide;
@property (getter=_initialNextFocusedView, setter=_setInitialNextFocusedView:, nonatomic) UIView *initialNextFocusedView;
@property (nonatomic, readonly) UIView *nextFocusedView;
@property (nonatomic) UIView *previouslyFocusedView;
@property (getter=_requiresEnvironmentValidation, setter=_setRequiresEnvironmentValidation:, nonatomic) BOOL requiresEnvironmentValidation;
@property (getter=_requiresNextFocusedView, setter=_setRequiresNextFocusedView:, nonatomic) BOOL requiresNextFocusedView;
@property (getter=_isValid, nonatomic, readonly) BOOL valid;

+ (id)_contextWithFocusedView:(id)arg1;
+ (id)_contextWithFocusedView:(id)arg1 proposedFocusedView:(id)arg2;
+ (id)contextWithPreviouslyFocusedView:(id)arg1 focusedContainerGuide:(id)arg2 heading:(unsigned int)arg3;
+ (id)contextWithPreviouslyFocusedView:(id)arg1 focusedRegion:(id)arg2 heading:(unsigned int)arg3;

- (void).cxx_destruct;
- (void)_didUpdateFocus;
- (struct CGVector { float x1; float x2; })_focusVelocity;
- (float)_focusVelocityBasedScaleFactor;
- (id)_focusedGuide;
- (id)_initWithContext:(id)arg1;
- (id)_initWithFocusedView:(id)arg1;
- (id)_initialNextFocusedView;
- (BOOL)_isFocusMoving;
- (BOOL)_isValid;
- (BOOL)_requiresEnvironmentValidation;
- (BOOL)_requiresNextFocusedView;
- (void)_setFocusHeading:(unsigned int)arg1;
- (void)_setFocusVelocity:(struct CGVector { float x1; float x2; })arg1;
- (void)_setFocusedGuide:(id)arg1;
- (void)_setInitialNextFocusedView:(id)arg1;
- (void)_setNeedsNextFocusedViewUpdate;
- (void)_setPreviouslyFocusedView:(id)arg1;
- (void)_setRequiresEnvironmentValidation:(BOOL)arg1;
- (void)_setRequiresNextFocusedView:(BOOL)arg1;
- (BOOL)_shouldUpdateFocus;
- (BOOL)_validate;
- (unsigned int)focusHeading;
- (id)init;
- (id)nextFocusedView;
- (id)previouslyFocusedView;

@end