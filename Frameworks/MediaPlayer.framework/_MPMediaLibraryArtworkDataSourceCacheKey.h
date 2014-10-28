/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPArtworkCatalog;

@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    MPArtworkCatalog *_catalog;
    } _representationSize;
}

@property(retain) MPArtworkCatalog * catalog;
@property struct CGSize { float x1; float x2; } representationSize;

- (void).cxx_destruct;
- (id)catalog;
- (unsigned int)hash;
- (id)initWithArtworkCatalog:(id)arg1 representativeSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)isEqual:(id)arg1;
- (struct CGSize { float x1; float x2; })representationSize;
- (void)setCatalog:(id)arg1;
- (void)setRepresentationSize:(struct CGSize { float x1; float x2; })arg1;

@end