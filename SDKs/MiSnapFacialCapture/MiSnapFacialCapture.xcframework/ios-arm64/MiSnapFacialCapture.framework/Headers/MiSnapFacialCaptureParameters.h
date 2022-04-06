//
//  MiSnapFacialCaptureParameters.h
//  MiSnapFacialCapture
//
//  Created by Stas Tsuprenko on 1/12/18.
//  Copyright © 2018 miteksystems. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MiSnapFacialCapture/MiSnapFacialCaptureCameraParameters.h>

/**
 SDK mode
 */
typedef NS_ENUM(NSInteger, MiSnapFacialCaptureMode) {
    /**
     Mode is not set
     */
    MiSnapFacialCaptureModeNone     = 0,
    /**
     Manual
     
     An image is acquired using a manual trigger
     */
    MiSnapFacialCaptureModeManual   = 1,
    /**
     Auto
     
     An image is acquired automatically when it passes all Image Quality Analysis checks using a smile or a countdown trigger
     
     ## Note ###
     This is a default and recommended mode
     */
    MiSnapFacialCaptureModeAuto     = 2
};
/**
 Tutorial mode
 */
typedef NS_ENUM(NSInteger, MiSnapFacialCaptureTuturialMode) {
    /**
     Tutorial mode is not set
     */
    MiSnapFacialCaptureTuturialModeNone = 0,
    /**
     Tutorial that's presented before a session is started
     */
    MiSnapFacialCaptureTuturialModeInstruction,
    /**
     Tutorial that's presented when a user presses "Help" button
     */
    MiSnapFacialCaptureTuturialModeHelp,
    /**
     Tutorial that's presented upon a timeout in `MiSnapFacialCaptureModeAuto`
     */
    MiSnapFacialCaptureTuturialModeTimeout,
    /**
     Tutorial that's presented to a user to visually inspect an image
     */
    MiSnapFacialCaptureTuturialModeReview
};
/**
MiSnapFacialCaptureParameters is a class that defines an interface for controlling a frame acquisition thresholds.
*/
@interface MiSnapFacialCaptureParameters : NSObject
/**
 Creates and returns parameters object with default parameter values
 
 @return An instance of `MiSnapFacialCaptureParameters`
*/
- (instancetype _Nonnull)init;
/**
 The mode that the MiSnapFacialCaptureAnalyzer should use.
 
 @see `MiSnapFacialCaptureMode`
 */
@property (nonatomic, readwrite) MiSnapFacialCaptureMode mode;
/**
 Minimum percentage a face should fill a view width-wise to select an image
 
 Range: [400..800]
 
 Default: 550
 */
@property (nonatomic, readwrite) NSInteger minFill;
/**
 Maximum percentage a face should fill a view width-wise to select an image
 
 Range: [400..800]
 
 Default: 725
 */
@property (nonatomic, readwrite) NSInteger maxFill;
/**
 Minimum percentage padding between an edge of a frame and a face width-wise to select an image
 
 Range: [-20..100]
 
 Default: -20
 */
@property (nonatomic, readwrite) NSInteger minPadding;
/**
 Roll threshold (head leans left and right)
 
 Range: [0..1000]
 
 Default: 500
 
 - Note: The greater the value the more restrictive SDK is. It's recommended to use a default value
 */
@property (nonatomic, readwrite) NSInteger roll;
/**
 Pitch threshold (nose moves up and down / nod)
 
 Range: [0..1000]
 
 Default: 500
 
 - Note: The greater the value the more restrictive SDK is. It's recommended to use a default value
 */
@property (nonatomic, readwrite) NSInteger pitch;
/**
 Yaw threshold (nose moves left to right and vice versa)

 Range: [0..1000]
 
 Default: 500
 
 - Note: The greater the value the more restrictive SDK is. It's recommended to use a default value
 */
@property (nonatomic, readwrite) NSInteger yaw;
/**
 Compression to apply to an acquired image (100 - no compression, 0 - absolute compression)
 
 Range: [50..100]
 
 Default: 95
 */
@property (nonatomic, readwrite) NSInteger compression;
/**
 Indicates whether an image selection should be triggered by a smile
 
 When set to `FALSE` the frame is acquired after a countdown timer is expired
 When set to `TRUE` a frame is captured on a smile trigger
 
 Default: `FALSE`
 */
@property (nonatomic, readwrite) BOOL selectOnSmile;
/**
 Time in seconds before an image should be selected
 
 - Note: `selectOnSmile` parameter has to be `FALSE` for this parameter to become active
 
 When greater than or equal to `1` `MiSnapFacialCaptureAnalyzerDelegate` protocol will
 send `startCountdown` callback when the first frame that satisies all threesholds is detected
 
 When set to less than `1` then the first frame that satisfies all thresholds will be selected without
 sending `startCountdown` callback
 
 Range: [0..5]
 
 Default: 1.5
 */
@property (nonatomic, readwrite) NSTimeInterval countdownTime;
/**
 Time in seconds before an analysis starts
 
 Range: [0..5]
 
 Default: 0
 */
@property (nonatomic, readwrite) NSTimeInterval analysisDelayTime;
/**
 Indicates whether an overlay should display detected face landmarks for debugging purposes
 
 Default: `FALSE`
 */
@property (nonatomic, readwrite) BOOL highlightLandmarks;
/**
 An object that configures camera specific parameters
 */
@property (readwrite, nonatomic) MiSnapFacialCaptureCameraParameters * _Nonnull camera;
/**
 @return Dictionary of parameters
 */
- (NSDictionary * _Nonnull)toDictionary;

@end
