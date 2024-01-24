#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef MISNAPNFCUX_SWIFT_H
#define MISNAPNFCUX_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import MiSnapCore;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MiSnapNFCUX",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class MiSnapNFCInputs;
@class MiSnapNFCParameters;
@class MiSnapNFCUxParameters;
@class MiSnapNFCLocalizationConfiguration;
@class MiSnapNFCAssetLocationConfiguration;
@class MiSnapNFCScanConfiguration;
@class NSString;

/// A session  configuration
SWIFT_CLASS("_TtC11MiSnapNFCUX22MiSnapNFCConfiguration")
@interface MiSnapNFCConfiguration : NSObject
/// Convenience function for UX parameters customization
- (MiSnapNFCConfiguration * _Nonnull)withInputsWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCInputs * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Convenience function for parameters customization
- (MiSnapNFCConfiguration * _Nonnull)withCustomParametersWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCParameters * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Convenience function for UX parameters customization
- (MiSnapNFCConfiguration * _Nonnull)withCustomUxParametersWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCUxParameters * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Convenience function for Localization customization
- (MiSnapNFCConfiguration * _Nonnull)withCustomLocalizationWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCLocalizationConfiguration * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Convenience function for Asset location customization
- (MiSnapNFCConfiguration * _Nonnull)withCustomAssetLocationWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCAssetLocationConfiguration * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Convenience function for scan screen customization
- (MiSnapNFCConfiguration * _Nonnull)withCustomScanWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCScanConfiguration * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Description of <code>MiSnapNFCConfiguration</code>
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

/// Instruction configuration
SWIFT_CLASS("_TtC11MiSnapNFCUX33MiSnapNFCInstructionConfiguration")
@interface MiSnapNFCInstructionConfiguration : NSObject
/// Device image
@property (nonatomic, strong) UIImage * _Nullable device;
/// ID image
@property (nonatomic, strong) UIImage * _Nullable id;
/// Passport image
@property (nonatomic, strong) UIImage * _Nullable passport;
/// Target image
@property (nonatomic, strong) UIImage * _Nullable target;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;
@class MiSnapLabelConfiguration;

/// A scan screen buttons configuration
SWIFT_CLASS("_TtC11MiSnapNFCUX33MiSnapNFCScanButtonsConfiguration")
@interface MiSnapNFCScanButtonsConfiguration : NSObject
/// Bar color
@property (nonatomic, strong) UIColor * _Nonnull barColor;
/// Configuration for start button
@property (nonatomic, strong) MiSnapLabelConfiguration * _Nonnull proceed;
/// Configuration for Cancel button
@property (nonatomic, strong) MiSnapLabelConfiguration * _Nonnull cancel;
/// Configuration for Skip button
@property (nonatomic, strong) MiSnapLabelConfiguration * _Nonnull skip;
/// Creates and returns tutorial configuration
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Description
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


/// A scan screen configuration
SWIFT_CLASS("_TtC11MiSnapNFCUX26MiSnapNFCScanConfiguration")
@interface MiSnapNFCScanConfiguration : NSObject
/// Background color
/// Default: <code>.systemBackground</code> for iOS >= 13  and <code>.white</code> for the rest
/// Used in both Light and Dark modes if <code>backgroundColorDarkMode</code> is not set. Otherwise, used in Light mode only
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
/// Background color in Dark mode
/// Default: not set
/// When this color is set then it’s used in Dark mode
@property (nonatomic, strong) UIColor * _Nullable backgroundColorDarkMode;
/// Message configuration
@property (nonatomic, strong) MiSnapLabelConfiguration * _Nonnull message;
/// Failure message configuration
@property (nonatomic, strong) MiSnapLabelConfiguration * _Nonnull failureMessage;
/// Scan screen buttons configuration
@property (nonatomic, strong) MiSnapNFCScanButtonsConfiguration * _Nonnull buttons;
/// Default initializer
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// UX parameters used during the chip reading process
SWIFT_CLASS("_TtC11MiSnapNFCUX21MiSnapNFCUxParameters")
@interface MiSnapNFCUxParameters : NSObject
/// Indicates whether MiSnapViewController should be automatically dismissed or
/// will be dismissed by a presenting view controller
/// Default: <code>true</code>
@property (nonatomic) BOOL autoDismiss;
/// Description of <code>MiSnapNFCUxParameters</code>
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol MiSnapNFCViewControllerDelegate;
@class NSCoder;
@class NSBundle;

/// A view controller that controls an invoked session
SWIFT_CLASS("_TtC11MiSnapNFCUX23MiSnapNFCViewController") SWIFT_AVAILABILITY(ios,introduced=13)
@interface MiSnapNFCViewController : UIViewController
/// Creates and returns view controller with a given configuration and sets a delegate that’ll be receiving callbacks
- (nonnull instancetype)initWith:(MiSnapNFCConfiguration * _Nonnull)configuration delegate:(id <MiSnapNFCViewControllerDelegate> _Nonnull)delegate OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
/// Called after the view has been loaded.
/// note:
/// Only exposed due to public status of parent’s function. Do not call it.
- (void)viewDidLoad;
/// Called when the view is visible
/// note:
/// Only exposed due to public status of parent’s function. Do not call it.
- (void)viewDidAppear:(BOOL)animated;
/// Called when the view is dismissed, covered or otherwise hidden
/// note:
/// Only exposed due to public status of parent’s function. Do not call it.
- (void)viewWillDisappear:(BOOL)animated;
/// Indicates whether a status bar should be hidden
/// note:
/// Only exposed due to public status of parent’s property. Do not override it.
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
/// Returns orientations supported by the view controller
/// note:
/// Only exposed due to public status of parent’s property. Do not override it.
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



/// Defines an interface for delegates of <code>MiSnapNFCViewController</code> to receive callbacks
SWIFT_PROTOCOL("_TtP11MiSnapNFCUX31MiSnapNFCViewControllerDelegate_")
@protocol MiSnapNFCViewControllerDelegate
/// Delegates receive this callback only when license status is anything but valid
- (void)miSnapNfcLicenseStatus:(enum MiSnapLicenseStatus)status;
/// Delegates receive this callback when a chip was successfully read
- (void)miSnapNfcSuccess:(NSDictionary<NSString *, id> * _Nonnull)result;
/// Delegates receive this callback when a  user cancels a session
- (void)miSnapNfcCancelled:(NSDictionary<NSString *, id> * _Nonnull)result;
/// Delegates receive this callback when a  user skips a session
- (void)miSnapNfcSkipped:(NSDictionary<NSString *, id> * _Nonnull)result;
@optional
/// Delegates receive this callback when a session is completed and ready to be dissmised and <code>autoDismiss</code> is overridden to <code>false</code> in <code>MiSnapNFCUxParameters</code>
/// note:
/// It’s optional
- (void)miSnapNfcShouldBeDismissed;
@end


#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef MISNAPNFCUX_SWIFT_H
#define MISNAPNFCUX_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import MiSnapCore;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MiSnapNFCUX",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class MiSnapNFCInputs;
@class MiSnapNFCParameters;
@class MiSnapNFCUxParameters;
@class MiSnapNFCLocalizationConfiguration;
@class MiSnapNFCAssetLocationConfiguration;
@class MiSnapNFCScanConfiguration;
@class NSString;

/// A session  configuration
SWIFT_CLASS("_TtC11MiSnapNFCUX22MiSnapNFCConfiguration")
@interface MiSnapNFCConfiguration : NSObject
/// Convenience function for UX parameters customization
- (MiSnapNFCConfiguration * _Nonnull)withInputsWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCInputs * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Convenience function for parameters customization
- (MiSnapNFCConfiguration * _Nonnull)withCustomParametersWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCParameters * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Convenience function for UX parameters customization
- (MiSnapNFCConfiguration * _Nonnull)withCustomUxParametersWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCUxParameters * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Convenience function for Localization customization
- (MiSnapNFCConfiguration * _Nonnull)withCustomLocalizationWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCLocalizationConfiguration * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Convenience function for Asset location customization
- (MiSnapNFCConfiguration * _Nonnull)withCustomAssetLocationWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCAssetLocationConfiguration * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Convenience function for scan screen customization
- (MiSnapNFCConfiguration * _Nonnull)withCustomScanWithCompletion:(SWIFT_NOESCAPE void (^ _Nonnull)(MiSnapNFCScanConfiguration * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
/// Description of <code>MiSnapNFCConfiguration</code>
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

/// Instruction configuration
SWIFT_CLASS("_TtC11MiSnapNFCUX33MiSnapNFCInstructionConfiguration")
@interface MiSnapNFCInstructionConfiguration : NSObject
/// Device image
@property (nonatomic, strong) UIImage * _Nullable device;
/// ID image
@property (nonatomic, strong) UIImage * _Nullable id;
/// Passport image
@property (nonatomic, strong) UIImage * _Nullable passport;
/// Target image
@property (nonatomic, strong) UIImage * _Nullable target;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;
@class MiSnapLabelConfiguration;

/// A scan screen buttons configuration
SWIFT_CLASS("_TtC11MiSnapNFCUX33MiSnapNFCScanButtonsConfiguration")
@interface MiSnapNFCScanButtonsConfiguration : NSObject
/// Bar color
@property (nonatomic, strong) UIColor * _Nonnull barColor;
/// Configuration for start button
@property (nonatomic, strong) MiSnapLabelConfiguration * _Nonnull proceed;
/// Configuration for Cancel button
@property (nonatomic, strong) MiSnapLabelConfiguration * _Nonnull cancel;
/// Configuration for Skip button
@property (nonatomic, strong) MiSnapLabelConfiguration * _Nonnull skip;
/// Creates and returns tutorial configuration
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Description
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


/// A scan screen configuration
SWIFT_CLASS("_TtC11MiSnapNFCUX26MiSnapNFCScanConfiguration")
@interface MiSnapNFCScanConfiguration : NSObject
/// Background color
/// Default: <code>.systemBackground</code> for iOS >= 13  and <code>.white</code> for the rest
/// Used in both Light and Dark modes if <code>backgroundColorDarkMode</code> is not set. Otherwise, used in Light mode only
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
/// Background color in Dark mode
/// Default: not set
/// When this color is set then it’s used in Dark mode
@property (nonatomic, strong) UIColor * _Nullable backgroundColorDarkMode;
/// Message configuration
@property (nonatomic, strong) MiSnapLabelConfiguration * _Nonnull message;
/// Failure message configuration
@property (nonatomic, strong) MiSnapLabelConfiguration * _Nonnull failureMessage;
/// Scan screen buttons configuration
@property (nonatomic, strong) MiSnapNFCScanButtonsConfiguration * _Nonnull buttons;
/// Default initializer
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// UX parameters used during the chip reading process
SWIFT_CLASS("_TtC11MiSnapNFCUX21MiSnapNFCUxParameters")
@interface MiSnapNFCUxParameters : NSObject
/// Indicates whether MiSnapViewController should be automatically dismissed or
/// will be dismissed by a presenting view controller
/// Default: <code>true</code>
@property (nonatomic) BOOL autoDismiss;
/// Description of <code>MiSnapNFCUxParameters</code>
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol MiSnapNFCViewControllerDelegate;
@class NSCoder;
@class NSBundle;

/// A view controller that controls an invoked session
SWIFT_CLASS("_TtC11MiSnapNFCUX23MiSnapNFCViewController") SWIFT_AVAILABILITY(ios,introduced=13)
@interface MiSnapNFCViewController : UIViewController
/// Creates and returns view controller with a given configuration and sets a delegate that’ll be receiving callbacks
- (nonnull instancetype)initWith:(MiSnapNFCConfiguration * _Nonnull)configuration delegate:(id <MiSnapNFCViewControllerDelegate> _Nonnull)delegate OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
/// Called after the view has been loaded.
/// note:
/// Only exposed due to public status of parent’s function. Do not call it.
- (void)viewDidLoad;
/// Called when the view is visible
/// note:
/// Only exposed due to public status of parent’s function. Do not call it.
- (void)viewDidAppear:(BOOL)animated;
/// Called when the view is dismissed, covered or otherwise hidden
/// note:
/// Only exposed due to public status of parent’s function. Do not call it.
- (void)viewWillDisappear:(BOOL)animated;
/// Indicates whether a status bar should be hidden
/// note:
/// Only exposed due to public status of parent’s property. Do not override it.
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
/// Returns orientations supported by the view controller
/// note:
/// Only exposed due to public status of parent’s property. Do not override it.
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



/// Defines an interface for delegates of <code>MiSnapNFCViewController</code> to receive callbacks
SWIFT_PROTOCOL("_TtP11MiSnapNFCUX31MiSnapNFCViewControllerDelegate_")
@protocol MiSnapNFCViewControllerDelegate
/// Delegates receive this callback only when license status is anything but valid
- (void)miSnapNfcLicenseStatus:(enum MiSnapLicenseStatus)status;
/// Delegates receive this callback when a chip was successfully read
- (void)miSnapNfcSuccess:(NSDictionary<NSString *, id> * _Nonnull)result;
/// Delegates receive this callback when a  user cancels a session
- (void)miSnapNfcCancelled:(NSDictionary<NSString *, id> * _Nonnull)result;
/// Delegates receive this callback when a  user skips a session
- (void)miSnapNfcSkipped:(NSDictionary<NSString *, id> * _Nonnull)result;
@optional
/// Delegates receive this callback when a session is completed and ready to be dissmised and <code>autoDismiss</code> is overridden to <code>false</code> in <code>MiSnapNFCUxParameters</code>
/// note:
/// It’s optional
- (void)miSnapNfcShouldBeDismissed;
@end


#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
