#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CommonDomainKotlinThrowable, CommonDomainKotlinArray<T>, CommonDomainKotlinException, CommonDomainDomainException, CommonDomainHttpStatusCodeCompanion, CommonDomainHttpStatusCode, CommonDomainHttpStatusCodeInternalServerError, CommonDomainHttpStatusCodeOk, CommonDomainHttpStatusCodeUnauthorized, CommonDomainNoInternetConnectionDomainException, CommonDomainUnauthorizedAccessDomainException, CommonDomainKotlinUnit, CommonDomainIosDispatchersCoroutineContextProvider, CommonDomainAppType, CommonDomainAppTypeBusiness, CommonDomainAppTypeResidential, CommonDomainOptionalValueCompanion, CommonDomainOptionalValue<TYPE>, CommonDomainOptionalValueSet<TYPE>, CommonDomainOptionalValueUnset<TYPE>, CommonDomainUnknownDomainException, CommonDomainKotlinRuntimeException, CommonDomainKotlinIllegalStateException, CommonDomainKotlinCancellationException, CommonDomainKotlinx_coroutines_coreAtomicDesc, CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, CommonDomainKotlinx_coroutines_coreAtomicOp<__contravariant T>, CommonDomainKotlinx_coroutines_coreOpDescriptor, CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode, CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol CommonDomainBaseUseCase, CommonDomainCoroutineContextProvider, CommonDomainKotlinx_coroutines_coreCoroutineScope, CommonDomainKotlinCoroutineContext, CommonDomainCancellable, CommonDomainRunningExecution, CommonDomainKotlinx_coroutines_coreJob, CommonDomainKotlinx_coroutines_coreFlow, CommonDomainKotlinSuspendFunction6, CommonDomainKotlinSuspendFunction1, CommonDomainKotlinSuspendFunction0, CommonDomainKotlinIterator, CommonDomainKotlinCoroutineContextElement, CommonDomainKotlinCoroutineContextKey, CommonDomainKotlinx_coroutines_coreChildHandle, CommonDomainKotlinx_coroutines_coreChildJob, CommonDomainKotlinx_coroutines_coreDisposableHandle, CommonDomainKotlinSequence, CommonDomainKotlinx_coroutines_coreSelectClause0, CommonDomainKotlinx_coroutines_coreFlowCollector, CommonDomainKotlinFunction, CommonDomainKotlinx_coroutines_coreParentJob, CommonDomainKotlinx_coroutines_coreSelectInstance, CommonDomainKotlinContinuation;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CommonDomainBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface CommonDomainBase (CommonDomainBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface CommonDomainMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CommonDomainMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorCommonDomainKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface CommonDomainNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface CommonDomainByte : CommonDomainNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface CommonDomainUByte : CommonDomainNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface CommonDomainShort : CommonDomainNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface CommonDomainUShort : CommonDomainNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface CommonDomainInt : CommonDomainNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface CommonDomainUInt : CommonDomainNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface CommonDomainLong : CommonDomainNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface CommonDomainULong : CommonDomainNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface CommonDomainFloat : CommonDomainNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface CommonDomainDouble : CommonDomainNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface CommonDomainBoolean : CommonDomainNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CommonDomainKotlinThrowable : CommonDomainBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CommonDomainKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonDomainKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface CommonDomainKotlinException : CommonDomainKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DomainMapperException")))
@interface CommonDomainDomainMapperException : CommonDomainKotlinException
- (instancetype)initWithMessage:(NSString *)message throwable:(CommonDomainKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("DomainToDomainMapper")))
@interface CommonDomainDomainToDomainMapper<INPUT, OUTPUT> : CommonDomainBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (OUTPUT)mapInput:(INPUT)input __attribute__((swift_name("map(input:)")));
- (OUTPUT)toDomainInput:(INPUT)input __attribute__((swift_name("toDomain(input:)")));
@end;

__attribute__((swift_name("DomainException")))
@interface CommonDomainDomainException : CommonDomainKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithThrowable:(CommonDomainKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) CommonDomainKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponseDomainException")))
@interface CommonDomainErrorResponseDomainException : CommonDomainDomainException
- (instancetype)initWithThrowable:(CommonDomainKotlinThrowable *)throwable errorCode:(int32_t)errorCode __attribute__((swift_name("init(throwable:errorCode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithThrowable:(CommonDomainKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) int32_t errorCode __attribute__((swift_name("errorCode")));
@end;

__attribute__((swift_name("HttpStatusCode")))
@interface CommonDomainHttpStatusCode : CommonDomainBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) CommonDomainHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpStatusCode.Companion")))
@interface CommonDomainHttpStatusCodeCompanion : CommonDomainBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonDomainHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (CommonDomainHttpStatusCode *)identifyStatusCode:(int32_t)statusCode __attribute__((swift_name("identify(statusCode:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpStatusCode.InternalServerError")))
@interface CommonDomainHttpStatusCodeInternalServerError : CommonDomainHttpStatusCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)internalServerError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonDomainHttpStatusCodeInternalServerError *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpStatusCode.Ok")))
@interface CommonDomainHttpStatusCodeOk : CommonDomainHttpStatusCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)ok __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonDomainHttpStatusCodeOk *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpStatusCode.Unauthorized")))
@interface CommonDomainHttpStatusCodeUnauthorized : CommonDomainHttpStatusCode
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)unauthorized __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonDomainHttpStatusCodeUnauthorized *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpStatusCode.Undefined")))
@interface CommonDomainHttpStatusCodeUndefined : CommonDomainHttpStatusCode
- (instancetype)initWithStatusCode:(int32_t)statusCode __attribute__((swift_name("init(statusCode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoInternetConnectionDomainException")))
@interface CommonDomainNoInternetConnectionDomainException : CommonDomainDomainException
- (instancetype)initWithThrowable:(CommonDomainKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (CommonDomainKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (CommonDomainNoInternetConnectionDomainException *)doCopyThrowable:(CommonDomainKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonDomainKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnauthorizedAccessDomainException")))
@interface CommonDomainUnauthorizedAccessDomainException : CommonDomainDomainException
- (instancetype)initWithThrowable:(CommonDomainKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (CommonDomainKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (CommonDomainUnauthorizedAccessDomainException *)doCopyThrowable:(CommonDomainKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonDomainKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((swift_name("BaseUseCase")))
@protocol CommonDomainBaseUseCase
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeValue:(id _Nullable)value callback:(void (^)(id _Nullable))callback completionHandler:(void (^)(CommonDomainKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(value:callback:completionHandler:)")));
- (CommonDomainDomainException *)onErrorThrowable:(CommonDomainKotlinThrowable *)throwable __attribute__((swift_name("onError(throwable:)")));
@end;

__attribute__((swift_name("BackgroundDelayedResponseExecuteUseCase")))
@interface CommonDomainBackgroundDelayedResponseExecuteUseCase<REQUEST, RESULT> : CommonDomainBase <CommonDomainBaseUseCase>
- (instancetype)initWithCoroutineContextProvider:(id<CommonDomainCoroutineContextProvider>)coroutineContextProvider __attribute__((swift_name("init(coroutineContextProvider:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeValue:(REQUEST _Nullable)value callback:(void (^)(RESULT _Nullable))callback completionHandler:(void (^)(CommonDomainKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(value:callback:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInBackgroundRequest:(REQUEST _Nullable)request coroutineScope:(id<CommonDomainKotlinx_coroutines_coreCoroutineScope>)coroutineScope completionHandler:(void (^)(RESULT _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("executeInBackground(request:coroutineScope:completionHandler:)")));
@property (readonly) int64_t delayResponseInMilliseconds __attribute__((swift_name("delayResponseInMilliseconds")));
@end;

__attribute__((swift_name("BackgroundExecuteUseCase")))
@interface CommonDomainBackgroundExecuteUseCase<REQUEST, RESULT> : CommonDomainBase <CommonDomainBaseUseCase>
- (instancetype)initWithCoroutineContextProvider:(id<CommonDomainCoroutineContextProvider>)coroutineContextProvider __attribute__((swift_name("init(coroutineContextProvider:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeValue:(REQUEST _Nullable)value callback:(void (^)(RESULT _Nullable))callback completionHandler:(void (^)(CommonDomainKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(value:callback:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInBackgroundRequest:(REQUEST _Nullable)request coroutineScope:(id<CommonDomainKotlinx_coroutines_coreCoroutineScope>)coroutineScope completionHandler:(void (^)(RESULT _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("executeInBackground(request:coroutineScope:completionHandler:)")));
@end;

__attribute__((swift_name("BackgroundPollingExecuteUseCase")))
@interface CommonDomainBackgroundPollingExecuteUseCase<REQUEST, RESULT> : CommonDomainBase <CommonDomainBaseUseCase>
- (instancetype)initWithCoroutineContextProvider:(id<CommonDomainCoroutineContextProvider>)coroutineContextProvider pollingIntervalInMilliseconds:(int64_t)pollingIntervalInMilliseconds __attribute__((swift_name("init(coroutineContextProvider:pollingIntervalInMilliseconds:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeValue:(REQUEST _Nullable)value callback:(void (^)(RESULT _Nullable))callback completionHandler:(void (^)(CommonDomainKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(value:callback:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInBackgroundRequest:(REQUEST _Nullable)request coroutineScope:(id<CommonDomainKotlinx_coroutines_coreCoroutineScope>)coroutineScope completionHandler:(void (^)(RESULT _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("executeInBackground(request:coroutineScope:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol CommonDomainKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<CommonDomainKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BackgroundScope")))
@interface CommonDomainBackgroundScope : CommonDomainBase <CommonDomainKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<CommonDomainKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Cancellable")))
@protocol CommonDomainCancellable
@required
- (void)cancel __attribute__((swift_name("cancel()")));
@end;

__attribute__((swift_name("ContinuousExecuteUseCase")))
@interface CommonDomainContinuousExecuteUseCase<REQUEST, RESULT> : CommonDomainBase <CommonDomainBaseUseCase>
- (instancetype)initWithCoroutineContextProvider:(id<CommonDomainCoroutineContextProvider>)coroutineContextProvider __attribute__((swift_name("init(coroutineContextProvider:)"))) __attribute__((objc_designated_initializer));
- (void)cleanup __attribute__((swift_name("cleanup()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeValue:(REQUEST _Nullable)value callback:(void (^)(RESULT _Nullable))callback completionHandler:(void (^)(CommonDomainKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(value:callback:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeInBackgroundRequest:(REQUEST _Nullable)request callback:(void (^)(RESULT _Nullable))callback completionHandler:(void (^)(CommonDomainKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeInBackground(request:callback:completionHandler:)")));
@end;

__attribute__((swift_name("CoroutineContextProvider")))
@protocol CommonDomainCoroutineContextProvider
@required
@property (readonly) id<CommonDomainKotlinCoroutineContext> io __attribute__((swift_name("io")));
@property (readonly) id<CommonDomainKotlinCoroutineContext> main __attribute__((swift_name("main")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosDispatchersCoroutineContextProvider")))
@interface CommonDomainIosDispatchersCoroutineContextProvider : CommonDomainBase <CommonDomainCoroutineContextProvider>
- (instancetype)initWithMain:(id<CommonDomainKotlinCoroutineContext>)main io:(id<CommonDomainKotlinCoroutineContext>)io __attribute__((swift_name("init(main:io:)"))) __attribute__((objc_designated_initializer));
- (id<CommonDomainKotlinCoroutineContext>)component1 __attribute__((swift_name("component1()")));
- (id<CommonDomainKotlinCoroutineContext>)component2 __attribute__((swift_name("component2()")));
- (CommonDomainIosDispatchersCoroutineContextProvider *)doCopyMain:(id<CommonDomainKotlinCoroutineContext>)main io:(id<CommonDomainKotlinCoroutineContext>)io __attribute__((swift_name("doCopy(main:io:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CommonDomainKotlinCoroutineContext> io __attribute__((swift_name("io")));
@property (readonly) id<CommonDomainKotlinCoroutineContext> main __attribute__((swift_name("main")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainScope")))
@interface CommonDomainMainScope : CommonDomainBase <CommonDomainKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<CommonDomainKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("RunningExecution")))
@protocol CommonDomainRunningExecution <CommonDomainCancellable>
@required
- (BOOL)isRunning __attribute__((swift_name("isRunning()")));
@end;

__attribute__((swift_name("UseCaseExecutor")))
@interface CommonDomainUseCaseExecutor : CommonDomainBase
- (instancetype)initWithCoroutineScope:(id<CommonDomainKotlinx_coroutines_coreCoroutineScope>)coroutineScope __attribute__((swift_name("init(coroutineScope:)"))) __attribute__((objc_designated_initializer));
- (id<CommonDomainRunningExecution>)executeUseCase:(id<CommonDomainBaseUseCase>)useCase value:(id _Nullable)value callback:(void (^)(id _Nullable))callback onError:(void (^)(CommonDomainDomainException *))onError __attribute__((swift_name("execute(useCase:value:callback:onError:)")));
- (id<CommonDomainRunningExecution>)executeUseCase:(id<CommonDomainBaseUseCase>)useCase callback:(void (^)(id _Nullable))callback onError:(void (^)(CommonDomainDomainException *))onError __attribute__((swift_name("execute(useCase:callback:onError:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UseCaseExecutor.RunningUseCaseExecution")))
@interface CommonDomainUseCaseExecutorRunningUseCaseExecution : CommonDomainBase <CommonDomainRunningExecution>
- (instancetype)initWithJob:(id<CommonDomainKotlinx_coroutines_coreJob>)job __attribute__((swift_name("init(job:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));
- (BOOL)isRunning __attribute__((swift_name("isRunning()")));
@end;

__attribute__((swift_name("AppType")))
@interface CommonDomainAppType : CommonDomainBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppType.Business")))
@interface CommonDomainAppTypeBusiness : CommonDomainAppType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)business __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonDomainAppTypeBusiness *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppType.Residential")))
@interface CommonDomainAppTypeResidential : CommonDomainAppType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)residential __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonDomainAppTypeResidential *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("OptionalValue")))
@interface CommonDomainOptionalValue<TYPE> : CommonDomainBase
- (instancetype)initWithValue:(TYPE)value isSet:(BOOL)isSet __attribute__((swift_name("init(value:isSet:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonDomainOptionalValueCompanion *companion __attribute__((swift_name("companion")));
- (TYPE _Nullable)valueIfSet __attribute__((swift_name("valueIfSet()")));
@property (readonly) BOOL isSet __attribute__((swift_name("isSet")));
@property (readonly) TYPE value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OptionalValueCompanion")))
@interface CommonDomainOptionalValueCompanion : CommonDomainBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonDomainOptionalValueCompanion *shared __attribute__((swift_name("shared")));
- (CommonDomainOptionalValue<id> *)fromNullableValue:(id _Nullable)value defaultValue:(id)defaultValue __attribute__((swift_name("fromNullable(value:defaultValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OptionalValueSet")))
@interface CommonDomainOptionalValueSet<TYPE> : CommonDomainOptionalValue<TYPE>
- (instancetype)initWithValue:(TYPE)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(id)value isSet:(BOOL)isSet __attribute__((swift_name("init(value:isSet:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (TYPE)component1 __attribute__((swift_name("component1()")));
- (CommonDomainOptionalValueSet<TYPE> *)doCopyValue:(TYPE)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TYPE value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OptionalValueUnset")))
@interface CommonDomainOptionalValueUnset<TYPE> : CommonDomainOptionalValue<TYPE>
- (instancetype)initWithDefaultValue:(TYPE)defaultValue __attribute__((swift_name("init(defaultValue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue:(id)value isSet:(BOOL)isSet __attribute__((swift_name("init(value:isSet:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (CommonDomainOptionalValueUnset<TYPE> *)doCopyDefaultValue:(TYPE)defaultValue __attribute__((swift_name("doCopy(defaultValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownDomainException")))
@interface CommonDomainUnknownDomainException : CommonDomainDomainException
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithThrowable:(CommonDomainKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (CommonDomainKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (CommonDomainUnknownDomainException *)doCopyThrowable:(CommonDomainKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonDomainKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NullableDefaultsKt")))
@interface CommonDomainNullableDefaultsKt : CommonDomainBase
+ (BOOL)orFalse:(CommonDomainBoolean * _Nullable)receiver __attribute__((swift_name("orFalse(_:)")));
+ (float)orZero:(CommonDomainFloat * _Nullable)receiver __attribute__((swift_name("orZero(_:)")));
+ (int32_t)orZero_:(CommonDomainInt * _Nullable)receiver __attribute__((swift_name("orZero(__:)")));
+ (int64_t)orZero__:(CommonDomainLong * _Nullable)receiver __attribute__((swift_name("orZero(___:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowCombineKt")))
@interface CommonDomainFlowCombineKt : CommonDomainBase
+ (id<CommonDomainKotlinx_coroutines_coreFlow>)combineFlow:(id<CommonDomainKotlinx_coroutines_coreFlow>)flow flow2:(id<CommonDomainKotlinx_coroutines_coreFlow>)flow2 flow3:(id<CommonDomainKotlinx_coroutines_coreFlow>)flow3 flow4:(id<CommonDomainKotlinx_coroutines_coreFlow>)flow4 flow5:(id<CommonDomainKotlinx_coroutines_coreFlow>)flow5 flow6:(id<CommonDomainKotlinx_coroutines_coreFlow>)flow6 transform:(id<CommonDomainKotlinSuspendFunction6>)transform __attribute__((swift_name("combine(flow:flow2:flow3:flow4:flow5:flow6:transform:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineContextProviderKt")))
@interface CommonDomainCoroutineContextProviderKt : CommonDomainBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)asParallel:(id<CommonDomainCoroutineContextProvider>)receiver sourceValues:(id)sourceValues transformFunction:(id<CommonDomainKotlinSuspendFunction1>)transformFunction completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("asParallel(_:sourceValues:transformFunction:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitFirst:(id<CommonDomainCoroutineContextProvider>)receiver functions:(CommonDomainKotlinArray<id<CommonDomainKotlinSuspendFunction0>> *)functions completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitFirst(_:functions:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)parallel:(id<CommonDomainCoroutineContextProvider>)receiver function1:(id<CommonDomainKotlinSuspendFunction0>)function1 function2:(id<CommonDomainKotlinSuspendFunction0>)function2 completionHandler:(void (^)(CommonDomainKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("parallel(_:function1:function2:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)parallel:(id<CommonDomainCoroutineContextProvider>)receiver function1:(id<CommonDomainKotlinSuspendFunction0>)function1 function2:(id<CommonDomainKotlinSuspendFunction0>)function2 function3:(id<CommonDomainKotlinSuspendFunction0>)function3 function4:(id<CommonDomainKotlinSuspendFunction0>)function4 completionHandler:(void (^)(CommonDomainKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("parallel(_:function1:function2:function3:function4:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)zip:(id<CommonDomainCoroutineContextProvider>)receiver function1:(id<CommonDomainKotlinSuspendFunction0>)function1 function2:(id<CommonDomainKotlinSuspendFunction0>)function2 combineFunction:(id (^)(id, id))combineFunction completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("zip(_:function1:function2:combineFunction:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)zip:(id<CommonDomainCoroutineContextProvider>)receiver function1:(id<CommonDomainKotlinSuspendFunction0>)function1 function2:(id<CommonDomainKotlinSuspendFunction0>)function2 function3:(id<CommonDomainKotlinSuspendFunction0>)function3 combineFunction:(id (^)(id, id, id))combineFunction completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("zip(_:function1:function2:function3:combineFunction:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)zip:(id<CommonDomainCoroutineContextProvider>)receiver function1:(id<CommonDomainKotlinSuspendFunction0>)function1 function2:(id<CommonDomainKotlinSuspendFunction0>)function2 function3:(id<CommonDomainKotlinSuspendFunction0>)function3 function4:(id<CommonDomainKotlinSuspendFunction0>)function4 combineFunction:(id (^)(id, id, id, id))combineFunction completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("zip(_:function1:function2:function3:function4:combineFunction:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)zip:(id<CommonDomainCoroutineContextProvider>)receiver function1:(id<CommonDomainKotlinSuspendFunction0>)function1 function2:(id<CommonDomainKotlinSuspendFunction0>)function2 function3:(id<CommonDomainKotlinSuspendFunction0>)function3 function4:(id<CommonDomainKotlinSuspendFunction0>)function4 function5:(id<CommonDomainKotlinSuspendFunction0>)function5 combineFunction:(id (^)(id, id, id, id, id))combineFunction completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("zip(_:function1:function2:function3:function4:function5:combineFunction:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)zip:(id<CommonDomainCoroutineContextProvider>)receiver function1:(id<CommonDomainKotlinSuspendFunction0>)function1 function2:(id<CommonDomainKotlinSuspendFunction0>)function2 function3:(id<CommonDomainKotlinSuspendFunction0>)function3 function4:(id<CommonDomainKotlinSuspendFunction0>)function4 function5:(id<CommonDomainKotlinSuspendFunction0>)function5 function6:(id<CommonDomainKotlinSuspendFunction0>)function6 combineFunction:(id (^)(id, id, id, id, id, id))combineFunction completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("zip(_:function1:function2:function3:function4:function5:function6:combineFunction:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)zip:(id<CommonDomainCoroutineContextProvider>)receiver function1:(id<CommonDomainKotlinSuspendFunction0>)function1 function2:(id<CommonDomainKotlinSuspendFunction0>)function2 function3:(id<CommonDomainKotlinSuspendFunction0>)function3 function4:(id<CommonDomainKotlinSuspendFunction0>)function4 function5:(id<CommonDomainKotlinSuspendFunction0>)function5 function6:(id<CommonDomainKotlinSuspendFunction0>)function6 function7:(id<CommonDomainKotlinSuspendFunction0>)function7 function8:(id<CommonDomainKotlinSuspendFunction0>)function8 combineFunction:(id (^)(id, id, id, id, id, id, id, id))combineFunction completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("zip(_:function1:function2:function3:function4:function5:function6:function7:function8:combineFunction:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellableKt")))
@interface CommonDomainCancellableKt : CommonDomainBase
+ (void)cancelAll:(CommonDomainMutableSet<id<CommonDomainCancellable>> *)receiver __attribute__((swift_name("cancelAll(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OptionalValueKt")))
@interface CommonDomainOptionalValueKt : CommonDomainBase
+ (CommonDomainOptionalValueSet<id> *)nonOptional:(id)receiver __attribute__((swift_name("nonOptional(_:)")));
+ (CommonDomainOptionalValue<id> *)toOptional:(id _Nullable)receiver defaultValue:(id)defaultValue __attribute__((swift_name("toOptional(_:defaultValue:)")));
@property (class, readonly) CommonDomainOptionalValueUnset<NSString *> *unsetString __attribute__((swift_name("unsetString")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CommonDomainKotlinArray<T> : CommonDomainBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CommonDomainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CommonDomainKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface CommonDomainKotlinRuntimeException : CommonDomainKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CommonDomainKotlinIllegalStateException : CommonDomainKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface CommonDomainKotlinCancellationException : CommonDomainKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonDomainKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CommonDomainKotlinUnit : CommonDomainBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonDomainKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CommonDomainKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CommonDomainKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CommonDomainKotlinCoroutineContextElement> _Nullable)getKey:(id<CommonDomainKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CommonDomainKotlinCoroutineContext>)minusKeyKey:(id<CommonDomainKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CommonDomainKotlinCoroutineContext>)plusContext:(id<CommonDomainKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CommonDomainKotlinCoroutineContextElement <CommonDomainKotlinCoroutineContext>
@required
@property (readonly) id<CommonDomainKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol CommonDomainKotlinx_coroutines_coreJob <CommonDomainKotlinCoroutineContextElement>
@required
- (id<CommonDomainKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<CommonDomainKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(CommonDomainKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (CommonDomainKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<CommonDomainKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(CommonDomainKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<CommonDomainKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(CommonDomainKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(CommonDomainKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<CommonDomainKotlinx_coroutines_coreJob>)plusOther:(id<CommonDomainKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<CommonDomainKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<CommonDomainKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol CommonDomainKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<CommonDomainKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(CommonDomainKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol CommonDomainKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction6")))
@protocol CommonDomainKotlinSuspendFunction6 <CommonDomainKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 p5:(id _Nullable)p5 p6:(id _Nullable)p6 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:p5:p6:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol CommonDomainKotlinSuspendFunction1 <CommonDomainKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol CommonDomainKotlinSuspendFunction0 <CommonDomainKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CommonDomainKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CommonDomainKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol CommonDomainKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol CommonDomainKotlinx_coroutines_coreChildHandle <CommonDomainKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(CommonDomainKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<CommonDomainKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol CommonDomainKotlinx_coroutines_coreChildJob <CommonDomainKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<CommonDomainKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol CommonDomainKotlinSequence
@required
- (id<CommonDomainKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol CommonDomainKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<CommonDomainKotlinx_coroutines_coreSelectInstance>)select block:(id<CommonDomainKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol CommonDomainKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(CommonDomainKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol CommonDomainKotlinx_coroutines_coreParentJob <CommonDomainKotlinx_coroutines_coreJob>
@required
- (CommonDomainKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol CommonDomainKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<CommonDomainKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(CommonDomainKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(CommonDomainKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<CommonDomainKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface CommonDomainKotlinx_coroutines_coreAtomicDesc : CommonDomainBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CommonDomainKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(CommonDomainKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property CommonDomainKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface CommonDomainKotlinx_coroutines_coreOpDescriptor : CommonDomainBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(CommonDomainKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonDomainKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : CommonDomainKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) CommonDomainKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol CommonDomainKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<CommonDomainKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface CommonDomainKotlinx_coroutines_coreAtomicOp<__contravariant T> : CommonDomainKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) CommonDomainKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode : CommonDomainBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(CommonDomainBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(CommonDomainBoolean *(^)(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(CommonDomainBoolean *(^)(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(CommonDomainBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(CommonDomainBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : CommonDomainKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CommonDomainKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(CommonDomainKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CommonDomainKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CommonDomainKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CommonDomainKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) CommonDomainKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
