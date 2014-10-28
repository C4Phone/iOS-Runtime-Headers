/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapItem, NSArray, NSDate;

@interface MKDirectionsRequest : NSObject <NSCopying> {
    NSArray *_additionalTransportTypesRequested;
    NSDate *_arrivalDate;
    NSDate *_departureDate;
    MKMapItem *_destination;
    BOOL _includeBasicRoutePoints;
    BOOL _includeDistanceInETA;
    BOOL _includeEntryPoints;
    BOOL _includeTrafficIncidents;
    BOOL _includeTravelTimes;
    BOOL _includeZilchRoutePoints;
    BOOL _requestsAlternateRoutes;
    MKMapItem *_source;
    unsigned int _transportType;
}

@property(readonly) BOOL _includeBasicRoutePoints;
@property(readonly) BOOL _includeEntryPoints;
@property(readonly) BOOL _includeTrafficIncidents;
@property(readonly) BOOL _includeTravelTimes;
@property(readonly) BOOL _includeTypicalRouteDuration;
@property(readonly) BOOL _includeZilchRoutePoints;
@property(getter=_additionalTransportTypesRequested,setter=_setAdditionalTransportTypesRequested:,retain) NSArray * additionalTransportTypesRequested;
@property(retain) MKMapItem * destination;
@property(getter=_includeDistanceInETA,setter=_setIncludeDistanceInETA:) BOOL includeDistanceInETA;
@property(retain) MKMapItem * source;

+ (BOOL)isDirectionsRequestURL:(id)arg1;

- (void).cxx_destruct;
- (id)_additionalTransportTypesRequested;
- (id)_arrivalDate;
- (id)_departureDate;
- (BOOL)_includeBasicRoutePoints;
- (BOOL)_includeDistanceInETA;
- (BOOL)_includeEntryPoints;
- (BOOL)_includeTrafficIncidents;
- (BOOL)_includeTravelTimes;
- (BOOL)_includeTypicalRouteDuration;
- (BOOL)_includeZilchRoutePoints;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned int)arg3 arrivalDate:(id)arg4 includeTravelTimes:(BOOL)arg5 includeTrafficIncidents:(BOOL)arg6 includeEntryPoints:(BOOL)arg7 includeRoutePoints:(BOOL)arg8;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned int)arg3 arrivalDate:(id)arg4;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned int)arg3 departureDate:(id)arg4 includeTravelTimes:(BOOL)arg5 includeTrafficIncidents:(BOOL)arg6 includeEntryPoints:(BOOL)arg7 includeRoutePoints:(BOOL)arg8;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned int)arg3 departureDate:(id)arg4;
- (void)_setAdditionalTransportTypesRequested:(id)arg1;
- (void)_setIncludeDistanceInETA:(BOOL)arg1;
- (unsigned int)_transportType;
- (id)arrivalDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureDate;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1;
- (BOOL)requestsAlternateRoutes;
- (void)setArrivalDate:(id)arg1;
- (void)setDepartureDate:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setRequestsAlternateRoutes:(BOOL)arg1;
- (void)setSource:(id)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (id)source;
- (unsigned int)transportType;
- (BOOL)writeToURL:(id)arg1 error:(id*)arg2;

@end