#import <Foundation/Foundation.h>

@class CoreInjector, CoreApi, CoreGetLocation, CoreHourlyForecastRepositoryImpl, CoreConstants, CoreClouds, CoreCloudsCompanion, CoreClouds$serializer, CoreKotlinArray, CoreCoord, CoreCoordCompanion, CoreCoord$serializer, CoreCurrentWeather, CoreWeather, CoreMain, CoreWind, CoreSys, CoreCurrentWeatherCompanion, CoreCurrentWeather$serializer, CoreMainCompanion, CoreMain$serializer, CoreSysCompanion, CoreSys$serializer, CoreWeatherCompanion, CoreWeather$serializer, CoreWindCompanion, CoreWind$serializer, CoreKLocation, CoreCity, CoreCityCompanion, CoreCity$serializer, CoreForecastItem, CoreTemp, CoreForecastItemCompanion, CoreForecastItem$serializer, CoreHourlyWeather, CoreHourlyWeatherCompanion, CoreHourlyWeather$serializer, CoreTempCompanion, CoreTemp$serializer, CoreCurrentCurrentWeatherRepositoryImpl, CoreKotlinUnit, CoreKotlinThrowable, CoreGetCurrentWeather, CoreGetForecast, CoreKotlinx_serialization_runtime_nativeEnumDescriptor, CoreKotlinx_serialization_runtime_nativeSerialKind, CoreKotlinNothing, CoreKotlinx_serialization_runtime_nativeUpdateMode, CoreKotlinx_serialization_runtime_nativeSerialClassDescImpl, CoreKotlinEnum;

@protocol CoreCurrentWeatherRepository, CoreHourlyForecastRepository, CoreKotlinx_serialization_runtime_nativeKSerializer, CoreKotlinx_serialization_runtime_nativeGeneratedSerializer, CoreKotlinx_serialization_runtime_nativeSerializationStrategy, CoreKotlinx_serialization_runtime_nativeEncoder, CoreKotlinx_serialization_runtime_nativeSerialDescriptor, CoreKotlinx_serialization_runtime_nativeDeserializationStrategy, CoreKotlinx_serialization_runtime_nativeDecoder, CoreKotlinIterator, CoreKotlinx_serialization_runtime_nativeCompositeEncoder, CoreKotlinx_serialization_runtime_nativeSerialModule, CoreKotlinAnnotation, CoreKotlinx_serialization_runtime_nativeCompositeDecoder, CoreKotlinx_serialization_runtime_nativeSerialModuleCollector, CoreKotlinKClass, CoreKotlinComparable, CoreKotlinKDeclarationContainer, CoreKotlinKAnnotatedElement, CoreKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface CoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface CoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface CoreNumber : NSNumber
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

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface CoreByte : CoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface CoreUByte : CoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface CoreShort : CoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface CoreUShort : CoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface CoreInt : CoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface CoreUInt : CoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface CoreLong : CoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface CoreULong : CoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface CoreFloat : CoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface CoreDouble : CoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface CoreBoolean : CoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Injector")))
@interface CoreInjector : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)injector __attribute__((swift_name("init()")));
@property (readonly) CoreApi *api __attribute__((swift_name("api")));
@property (readonly) id<CoreCurrentWeatherRepository> weatherRepository __attribute__((swift_name("weatherRepository")));
@property (readonly) id<CoreHourlyForecastRepository> hourlyForecastRepository __attribute__((swift_name("hourlyForecastRepository")));
@property (readonly) CoreGetLocation *getLocation __attribute__((swift_name("getLocation")));
@end;

__attribute__((swift_name("HourlyForecastRepository")))
@protocol CoreHourlyForecastRepository
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HourlyForecastRepositoryImpl")))
@interface CoreHourlyForecastRepositoryImpl : KotlinBase <CoreHourlyForecastRepository>
- (instancetype)initWithApi:(CoreApi *)api __attribute__((swift_name("init(api:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constants")))
@interface CoreConstants : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)constants __attribute__((swift_name("init()")));
@property (readonly) NSString *WEATHER __attribute__((swift_name("WEATHER")));
@property (readonly) NSString *FORECAST __attribute__((swift_name("FORECAST")));
@property (readonly) NSString *HOURLY __attribute__((swift_name("HOURLY")));
@property (readonly) NSString *DAILY __attribute__((swift_name("DAILY")));
@property (readonly) NSString *BASE_URL __attribute__((swift_name("BASE_URL")));
@property (readonly) NSString *APP_ID __attribute__((swift_name("APP_ID")));
@property (readonly) NSString *UNITS __attribute__((swift_name("UNITS")));
@property (readonly) NSString *QUERY __attribute__((swift_name("QUERY")));
@property (readonly) NSString *LATITUDE __attribute__((swift_name("LATITUDE")));
@property (readonly) NSString *LONGITUDE __attribute__((swift_name("LONGITUDE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Api")))
@interface CoreApi : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Clouds")))
@interface CoreClouds : KotlinBase
- (instancetype)initWithAll:(int32_t)all __attribute__((swift_name("init(all:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (CoreClouds *)doCopyAll:(int32_t)all __attribute__((swift_name("doCopy(all:)")));
@property int32_t all __attribute__((swift_name("all")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Clouds.Companion")))
@interface CoreCloudsCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol CoreKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol CoreKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol CoreKotlinx_serialization_runtime_nativeKSerializer <CoreKotlinx_serialization_runtime_nativeSerializationStrategy, CoreKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol CoreKotlinx_serialization_runtime_nativeGeneratedSerializer <CoreKotlinx_serialization_runtime_nativeKSerializer>
@required
- (CoreKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Clouds.$serializer")))
@interface CoreClouds$serializer : KotlinBase <CoreKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CoreClouds *)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreClouds *)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(CoreClouds *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(CoreClouds *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Coord")))
@interface CoreCoord : KotlinBase
- (instancetype)initWithLon:(double)lon lat:(double)lat __attribute__((swift_name("init(lon:lat:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (CoreCoord *)doCopyLon:(double)lon lat:(double)lat __attribute__((swift_name("doCopy(lon:lat:)")));
@property double lon __attribute__((swift_name("lon")));
@property double lat __attribute__((swift_name("lat")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Coord.Companion")))
@interface CoreCoordCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Coord.$serializer")))
@interface CoreCoord$serializer : KotlinBase <CoreKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CoreCoord *)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreCoord *)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(CoreCoord *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(CoreCoord *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeather")))
@interface CoreCurrentWeather : KotlinBase
- (instancetype)initWithCoord:(CoreCoord *)coord weather:(NSArray<CoreWeather *> *)weather base:(NSString *)base main:(CoreMain *)main visibility:(int32_t)visibility wind:(CoreWind *)wind clouds:(CoreClouds *)clouds dt:(int64_t)dt sys:(CoreSys *)sys id:(int32_t)id name:(NSString *)name cod:(int32_t)cod dt_txt:(NSString *)dt_txt __attribute__((swift_name("init(coord:weather:base:main:visibility:wind:clouds:dt:sys:id:name:cod:dt_txt:)"))) __attribute__((objc_designated_initializer));
- (CoreCoord *)component1 __attribute__((swift_name("component1()")));
- (NSArray<CoreWeather *> *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (CoreMain *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (CoreWind *)component6 __attribute__((swift_name("component6()")));
- (CoreClouds *)component7 __attribute__((swift_name("component7()")));
- (int64_t)component8 __attribute__((swift_name("component8()")));
- (CoreSys *)component9 __attribute__((swift_name("component9()")));
- (int32_t)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (int32_t)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (CoreCurrentWeather *)doCopyCoord:(CoreCoord *)coord weather:(NSArray<CoreWeather *> *)weather base:(NSString *)base main:(CoreMain *)main visibility:(int32_t)visibility wind:(CoreWind *)wind clouds:(CoreClouds *)clouds dt:(int64_t)dt sys:(CoreSys *)sys id:(int32_t)id name:(NSString *)name cod:(int32_t)cod dt_txt:(NSString *)dt_txt __attribute__((swift_name("doCopy(coord:weather:base:main:visibility:wind:clouds:dt:sys:id:name:cod:dt_txt:)")));
@property CoreCoord *coord __attribute__((swift_name("coord")));
@property NSArray<CoreWeather *> *weather __attribute__((swift_name("weather")));
@property NSString *base __attribute__((swift_name("base")));
@property CoreMain *main __attribute__((swift_name("main")));
@property int32_t visibility __attribute__((swift_name("visibility")));
@property CoreWind *wind __attribute__((swift_name("wind")));
@property CoreClouds *clouds __attribute__((swift_name("clouds")));
@property int64_t dt __attribute__((swift_name("dt")));
@property CoreSys *sys __attribute__((swift_name("sys")));
@property int32_t id __attribute__((swift_name("id")));
@property NSString *name __attribute__((swift_name("name")));
@property int32_t cod __attribute__((swift_name("cod")));
@property NSString *dt_txt __attribute__((swift_name("dt_txt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeather.Companion")))
@interface CoreCurrentWeatherCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeather.$serializer")))
@interface CoreCurrentWeather$serializer : KotlinBase <CoreKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CoreCurrentWeather *)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreCurrentWeather *)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(CoreCurrentWeather *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(CoreCurrentWeather *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Main")))
@interface CoreMain : KotlinBase
- (instancetype)initWithTemp:(double)temp pressure:(int32_t)pressure humidity:(int32_t)humidity temp_min:(double)temp_min temp_max:(double)temp_max __attribute__((swift_name("init(temp:pressure:humidity:temp_min:temp_max:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (CoreMain *)doCopyTemp:(double)temp pressure:(int32_t)pressure humidity:(int32_t)humidity temp_min:(double)temp_min temp_max:(double)temp_max __attribute__((swift_name("doCopy(temp:pressure:humidity:temp_min:temp_max:)")));
@property double temp __attribute__((swift_name("temp")));
@property int32_t pressure __attribute__((swift_name("pressure")));
@property int32_t humidity __attribute__((swift_name("humidity")));
@property double temp_min __attribute__((swift_name("temp_min")));
@property double temp_max __attribute__((swift_name("temp_max")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Main.Companion")))
@interface CoreMainCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Main.$serializer")))
@interface CoreMain$serializer : KotlinBase <CoreKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CoreMain *)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreMain *)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(CoreMain *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(CoreMain *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sys")))
@interface CoreSys : KotlinBase
- (instancetype)initWithType:(int32_t)type id:(int32_t)id message:(double)message country:(NSString *)country sunrise:(int32_t)sunrise sunset:(int32_t)sunset __attribute__((swift_name("init(type:id:message:country:sunrise:sunset:)"))) __attribute__((objc_designated_initializer));
@property int32_t type __attribute__((swift_name("type")));
@property int32_t id __attribute__((swift_name("id")));
@property double message __attribute__((swift_name("message")));
@property NSString *country __attribute__((swift_name("country")));
@property int32_t sunrise __attribute__((swift_name("sunrise")));
@property int32_t sunset __attribute__((swift_name("sunset")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sys.Companion")))
@interface CoreSysCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sys.$serializer")))
@interface CoreSys$serializer : KotlinBase <CoreKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CoreSys *)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreSys *)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(CoreSys *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(CoreSys *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather")))
@interface CoreWeather : KotlinBase
- (instancetype)initWithId:(int32_t)id main:(NSString *)main description:(NSString *)description icon:(NSString *)icon __attribute__((swift_name("init(id:main:description:icon:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (CoreWeather *)doCopyId:(int32_t)id main:(NSString *)main description:(NSString *)description icon:(NSString *)icon __attribute__((swift_name("doCopy(id:main:description:icon:)")));
@property int32_t id __attribute__((swift_name("id")));
@property NSString *main __attribute__((swift_name("main")));
@property (getter=description_) NSString *description __attribute__((swift_name("description")));
@property NSString *icon __attribute__((swift_name("icon")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather.Companion")))
@interface CoreWeatherCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather.$serializer")))
@interface CoreWeather$serializer : KotlinBase <CoreKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CoreWeather *)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreWeather *)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(CoreWeather *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(CoreWeather *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wind")))
@interface CoreWind : KotlinBase
- (instancetype)initWithSpeed:(NSString *)speed deg:(NSString *)deg __attribute__((swift_name("init(speed:deg:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CoreWind *)doCopySpeed:(NSString *)speed deg:(NSString *)deg __attribute__((swift_name("doCopy(speed:deg:)")));
@property NSString *speed __attribute__((swift_name("speed")));
@property NSString *deg __attribute__((swift_name("deg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wind.Companion")))
@interface CoreWindCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wind.$serializer")))
@interface CoreWind$serializer : KotlinBase <CoreKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CoreWind *)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreWind *)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(CoreWind *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(CoreWind *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLocation")))
@interface CoreGetLocation : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CoreKLocation *)getCurrentLocation __attribute__((swift_name("getCurrentLocation()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("City")))
@interface CoreCity : KotlinBase
- (instancetype)initWithId:(int64_t)id name:(NSString *)name coord:(CoreCoord *)coord country:(NSString *)country population:(int32_t)population timezone:(int32_t)timezone __attribute__((swift_name("init(id:name:coord:country:population:timezone:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CoreCoord *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (CoreCity *)doCopyId:(int64_t)id name:(NSString *)name coord:(CoreCoord *)coord country:(NSString *)country population:(int32_t)population timezone:(int32_t)timezone __attribute__((swift_name("doCopy(id:name:coord:country:population:timezone:)")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) CoreCoord *coord __attribute__((swift_name("coord")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property int32_t population __attribute__((swift_name("population")));
@property int32_t timezone __attribute__((swift_name("timezone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("City.Companion")))
@interface CoreCityCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("City.$serializer")))
@interface CoreCity$serializer : KotlinBase <CoreKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CoreCity *)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreCity *)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(CoreCity *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(CoreCity *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForecastItem")))
@interface CoreForecastItem : KotlinBase
- (instancetype)initWithCoord:(CoreCoord *)coord temp:(CoreTemp *)temp weather:(NSArray<CoreWeather *> *)weather speed:(double)speed humidity:(int32_t)humidity clouds:(int32_t)clouds rain:(double)rain dt:(int64_t)dt pressure:(double)pressure deg:(int32_t)deg __attribute__((swift_name("init(coord:temp:weather:speed:humidity:clouds:rain:dt:pressure:deg:)"))) __attribute__((objc_designated_initializer));
- (CoreCoord *)component1 __attribute__((swift_name("component1()")));
- (CoreTemp *)component2 __attribute__((swift_name("component2()")));
- (NSArray<CoreWeather *> *)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (double)component7 __attribute__((swift_name("component7()")));
- (int64_t)component8 __attribute__((swift_name("component8()")));
- (double)component9 __attribute__((swift_name("component9()")));
- (int32_t)component10 __attribute__((swift_name("component10()")));
- (CoreForecastItem *)doCopyCoord:(CoreCoord *)coord temp:(CoreTemp *)temp weather:(NSArray<CoreWeather *> *)weather speed:(double)speed humidity:(int32_t)humidity clouds:(int32_t)clouds rain:(double)rain dt:(int64_t)dt pressure:(double)pressure deg:(int32_t)deg __attribute__((swift_name("doCopy(coord:temp:weather:speed:humidity:clouds:rain:dt:pressure:deg:)")));
@property CoreCoord *coord __attribute__((swift_name("coord")));
@property CoreTemp *temp __attribute__((swift_name("temp")));
@property NSArray<CoreWeather *> *weather __attribute__((swift_name("weather")));
@property double speed __attribute__((swift_name("speed")));
@property int32_t humidity __attribute__((swift_name("humidity")));
@property int32_t clouds __attribute__((swift_name("clouds")));
@property double rain __attribute__((swift_name("rain")));
@property int64_t dt __attribute__((swift_name("dt")));
@property double pressure __attribute__((swift_name("pressure")));
@property int32_t deg __attribute__((swift_name("deg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForecastItem.Companion")))
@interface CoreForecastItemCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForecastItem.$serializer")))
@interface CoreForecastItem$serializer : KotlinBase <CoreKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CoreForecastItem *)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreForecastItem *)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(CoreForecastItem *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(CoreForecastItem *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HourlyWeather")))
@interface CoreHourlyWeather : KotlinBase
- (instancetype)initWithCod:(NSString *)cod message:(double)message cnt:(int32_t)cnt list:(NSArray<CoreForecastItem *> *)list city:(CoreCity *)city __attribute__((swift_name("init(cod:message:cnt:list:city:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSArray<CoreForecastItem *> *)component4 __attribute__((swift_name("component4()")));
- (CoreCity *)component5 __attribute__((swift_name("component5()")));
- (CoreHourlyWeather *)doCopyCod:(NSString *)cod message:(double)message cnt:(int32_t)cnt list:(NSArray<CoreForecastItem *> *)list city:(CoreCity *)city __attribute__((swift_name("doCopy(cod:message:cnt:list:city:)")));
@property NSString *cod __attribute__((swift_name("cod")));
@property double message __attribute__((swift_name("message")));
@property int32_t cnt __attribute__((swift_name("cnt")));
@property NSArray<CoreForecastItem *> *list __attribute__((swift_name("list")));
@property CoreCity *city __attribute__((swift_name("city")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HourlyWeather.Companion")))
@interface CoreHourlyWeatherCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HourlyWeather.$serializer")))
@interface CoreHourlyWeather$serializer : KotlinBase <CoreKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CoreHourlyWeather *)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreHourlyWeather *)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(CoreHourlyWeather *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(CoreHourlyWeather *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KLocation")))
@interface CoreKLocation : KotlinBase
- (instancetype)initWithLat:(double)lat lng:(double)lng __attribute__((swift_name("init(lat:lng:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (CoreKLocation *)doCopyLat:(double)lat lng:(double)lng __attribute__((swift_name("doCopy(lat:lng:)")));
@property double lat __attribute__((swift_name("lat")));
@property double lng __attribute__((swift_name("lng")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Temp")))
@interface CoreTemp : KotlinBase
- (instancetype)initWithDay:(double)day min:(double)min max:(double)max night:(double)night eve:(double)eve morn:(double)morn __attribute__((swift_name("init(day:min:max:night:eve:morn:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (CoreTemp *)doCopyDay:(double)day min:(double)min max:(double)max night:(double)night eve:(double)eve morn:(double)morn __attribute__((swift_name("doCopy(day:min:max:night:eve:morn:)")));
@property double day __attribute__((swift_name("day")));
@property double min __attribute__((swift_name("min")));
@property double max __attribute__((swift_name("max")));
@property double night __attribute__((swift_name("night")));
@property double eve __attribute__((swift_name("eve")));
@property double morn __attribute__((swift_name("morn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Temp.Companion")))
@interface CoreTempCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Temp.$serializer")))
@interface CoreTemp$serializer : KotlinBase <CoreKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (CoreTemp *)deserializeDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (CoreTemp *)patchDecoder:(id<CoreKotlinx_serialization_runtime_nativeDecoder>)decoder old:(CoreTemp *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<CoreKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(CoreTemp *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((swift_name("CurrentWeatherRepository")))
@protocol CoreCurrentWeatherRepository
@required
- (void)getCurrentWeatherByNameCity:(NSString *)city success:(CoreKotlinUnit *(^)(CoreCurrentWeather *))success failure:(CoreKotlinUnit *(^)(CoreKotlinThrowable * _Nullable))failure __attribute__((swift_name("getCurrentWeatherByName(city:success:failure:)")));
- (void)getCurrentWeatherByLocationLocation:(CoreKLocation *)location success:(CoreKotlinUnit *(^)(CoreCurrentWeather *))success failure:(CoreKotlinUnit *(^)(CoreKotlinThrowable * _Nullable))failure __attribute__((swift_name("getCurrentWeatherByLocation(location:success:failure:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentCurrentWeatherRepositoryImpl")))
@interface CoreCurrentCurrentWeatherRepositoryImpl : KotlinBase <CoreCurrentWeatherRepository>
- (instancetype)initWithApi:(CoreApi *)api __attribute__((swift_name("init(api:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCurrentWeather")))
@interface CoreGetCurrentWeather : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getCurrentWeatherByNameCity:(NSString *)city success:(CoreKotlinUnit *(^)(CoreCurrentWeather *))success failure:(CoreKotlinUnit *(^)(CoreKotlinThrowable * _Nullable))failure __attribute__((swift_name("getCurrentWeatherByName(city:success:failure:)")));
- (void)getCurrentWeatherByLocationKLocation:(CoreKLocation *)kLocation success:(CoreKotlinUnit *(^)(CoreCurrentWeather *))success failure:(CoreKotlinUnit *(^)(CoreKotlinThrowable * _Nullable))failure __attribute__((swift_name("getCurrentWeatherByLocation(kLocation:success:failure:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetForecast")))
@interface CoreGetForecast : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CoreKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(CoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol CoreKotlinx_serialization_runtime_nativeEncoder
@required
- (id<CoreKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(CoreKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<CoreKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(CoreKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(CoreKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<CoreKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CoreKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<CoreKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol CoreKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<CoreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<CoreKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) CoreKotlinx_serialization_runtime_nativeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol CoreKotlinx_serialization_runtime_nativeDecoder
@required
- (id<CoreKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(CoreKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(CoreKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CoreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CoreKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CoreKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<CoreKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<CoreKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<CoreKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) CoreKotlinx_serialization_runtime_nativeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CoreKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CoreKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CoreKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
@property (readonly) CoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol CoreKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<CoreKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<CoreKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<CoreKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface CoreKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <CoreKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<CoreKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<CoreKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<CoreKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface CoreKotlinx_serialization_runtime_nativeEnumDescriptor : CoreKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(CoreKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<CoreKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialModule")))
@protocol CoreKotlinx_serialization_runtime_nativeSerialModule
@required
- (void)dumpToCollector:(id<CoreKotlinx_serialization_runtime_nativeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getContextualKclass:(id<CoreKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getPolymorphicBaseClass:(id<CoreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<CoreKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getPolymorphicBaseClass:(id<CoreKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CoreKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface CoreKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol CoreKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CoreKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CoreKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CoreKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<CoreKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CoreKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<CoreKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) CoreKotlinx_serialization_runtime_nativeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CoreKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol CoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface CoreKotlinEnum : KotlinBase <CoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(CoreKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface CoreKotlinx_serialization_runtime_nativeUpdateMode : CoreKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) CoreKotlinx_serialization_runtime_nativeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) CoreKotlinx_serialization_runtime_nativeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) CoreKotlinx_serialization_runtime_nativeUpdateMode *update __attribute__((swift_name("update")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(CoreKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialModuleCollector")))
@protocol CoreKotlinx_serialization_runtime_nativeSerialModuleCollector
@required
- (void)contextualKClass:(id<CoreKotlinKClass>)kClass serializer:(id<CoreKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CoreKotlinKClass>)baseClass actualClass:(id<CoreKotlinKClass>)actualClass actualSerializer:(id<CoreKotlinx_serialization_runtime_nativeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CoreKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CoreKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CoreKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CoreKotlinKClass <CoreKotlinKDeclarationContainer, CoreKotlinKAnnotatedElement, CoreKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

NS_ASSUME_NONNULL_END
