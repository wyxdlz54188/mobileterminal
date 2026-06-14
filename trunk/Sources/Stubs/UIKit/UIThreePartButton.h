// UIThreePartButton.h — Stub for iOS 6 SDK compatibility
// This private UIKit class from iOS 2/3 was removed in newer SDKs.
// We provide a minimal stub so the project compiles.

#import <UIKit/UIKit.h>

@interface UIThreePartButton : UIButton

@property(nonatomic, retain) NSString *title;
@property(nonatomic, retain) UIImage *image;
@property(nonatomic) BOOL enabled;

- (void)setTitle:(NSString *)title;
- (void)setImage:(UIImage *)image;
- (void)setEnabled:(BOOL)enabled;

@end
