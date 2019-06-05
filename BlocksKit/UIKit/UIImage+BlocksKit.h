//
//  UIImage+Blockskit.h
//  BlocksKit
//

#import "BKDefines.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/** Camera Roll export without selectors.

 Includes code by the following:

 - [Yusuke Murata](https://github.com/muratayusuke)

 @warning UIImage is only available on a platform with UIKit.
 */

#if TARGET_OS_IOS

// Adds a photo to the saved photos album.
UIKIT_EXTERN void BKImageWriteToSavedPhotosAlbum(UIImage *image, void(^completionBlock)(NSError *));

// Adds a video to the saved photos album.
UIKIT_EXTERN void BKSaveVideoAtURLToSavedPhotosAlbum(NSURL *videoURL, void(^completionBlock)(NSError *));

#endif

NS_ASSUME_NONNULL_END
