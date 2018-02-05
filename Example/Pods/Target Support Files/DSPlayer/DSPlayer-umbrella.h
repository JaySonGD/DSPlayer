#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "DSCategory.h"
#import "MBProgressHUD+iShare.h"
#import "NSError+Message.h"
#import "UIControl+Block.h"
#import "UINavigationController+FullscreenPopGesture.h"
#import "UITabBar+CustomBadge.h"
#import "UIView+Block.h"
#import "UIView+Loading.h"

FOUNDATION_EXPORT double DSPlayerVersionNumber;
FOUNDATION_EXPORT const unsigned char DSPlayerVersionString[];

