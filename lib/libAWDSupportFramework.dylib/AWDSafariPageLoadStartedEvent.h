/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariPageLoadStartedEvent : PBCodable <NSCopying> {
    unsigned long long _configurationID;
    struct { 
        unsigned int configurationID : 1; 
        unsigned int pageID : 1; 
        unsigned int timestamp : 1; 
    } _has;
    unsigned long long _pageID;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned long long configurationID;
@property (nonatomic) BOOL hasConfigurationID;
@property (nonatomic) BOOL hasPageID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long pageID;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)configurationID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasConfigurationID;
- (BOOL)hasPageID;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)pageID;
- (BOOL)readFrom:(id)arg1;
- (void)setConfigurationID:(unsigned long long)arg1;
- (void)setHasConfigurationID:(BOOL)arg1;
- (void)setHasPageID:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPageID:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end