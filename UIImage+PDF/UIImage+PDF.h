//
//  UIImage+PDF.h
//
//  Created by Nigel Barber on 15/10/2011.
//  Copyright 2011 Mindbrix Limited. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+Image.h"
#import "NTBPDFView.h"
#import "NSData+MD5.h"
#import "NSString+MD5.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIImage( PDF )

+(void)setShouldCacheOnDisk:(BOOL)shouldCache; // Default = YES
+(void)setShouldCacheInMemory:(BOOL)shouldCache; // Default = NO

+(void)cleanDiskCache;
+(void)cleanMemoryCache;

+(nullable UIImage *) imageOrPDFNamed:(NSString *)resourceName;
+(nullable UIImage *) imageOrPDFWithContentsOfFile:(NSString *)path;


+(nullable UIImage *) imageWithPDFNamed:(NSString *)resourceName atSize:(CGSize)size atPage:(NSUInteger)page;
+(nullable UIImage *) imageWithPDFNamed:(NSString *)resourceName atSize:(CGSize)size;

+(nullable UIImage *) imageWithPDFNamed:(NSString *)resourceName atWidth:(CGFloat)width atPage:(NSUInteger)page;
+(nullable UIImage *) imageWithPDFNamed:(NSString *)resourceName atWidth:(CGFloat)width;

+(nullable UIImage *) imageWithPDFNamed:(NSString *)resourceName atHeight:(CGFloat)height atPage:(NSUInteger)page;
+(nullable UIImage *) imageWithPDFNamed:(NSString *)resourceName atHeight:(CGFloat)height;

+(nullable UIImage *) imageWithPDFNamed:(NSString *)resourceName fitSize:(CGSize)size atPage:(NSUInteger)page;
+(nullable UIImage *) imageWithPDFNamed:(NSString *)resourceName fitSize:(CGSize)size;
+(nullable UIImage *) imageWithPDFNamed:(NSString *)resourceName formBundle:(NSBundle *)bundle fitSize:(CGSize)size;

+(nullable UIImage *) originalSizeImageWithPDFNamed:(NSString *)resourceName atPage:(NSUInteger)page;
+(nullable UIImage *) originalSizeImageWithPDFNamed:(NSString *)resourceName;


+(nullable UIImage *) imageWithPDFURL:(NSURL *)URL atSize:(CGSize)size atPage:(NSUInteger)page;
+(nullable UIImage *) imageWithPDFURL:(NSURL *)URL atSize:(CGSize)size;

+(nullable UIImage *) imageWithPDFURL:(NSURL *)URL atWidth:(CGFloat)width atPage:(NSUInteger)page;
+(nullable UIImage *) imageWithPDFURL:(NSURL *)URL atWidth:(CGFloat)width;

+(nullable UIImage *) imageWithPDFURL:(NSURL *)URL atHeight:(CGFloat)height atPage:(NSUInteger)page;
+(nullable UIImage *) imageWithPDFURL:(NSURL *)URL atHeight:(CGFloat)height;

+(nullable UIImage *) imageWithPDFURL:(NSURL *)URL fitSize:(CGSize)size atPage:(NSUInteger)page;
+(nullable UIImage *) imageWithPDFURL:(NSURL *)URL fitSize:(CGSize)size;


+(nullable UIImage *) imageWithPDFData:(NSData *)data atSize:(CGSize)size;
+(nullable UIImage *) imageWithPDFData:(NSData *)data atSize:(CGSize)size atPage:(NSUInteger)page;

+(nullable UIImage *) imageWithPDFData:(NSData *)data atWidth:(CGFloat)width;
+(nullable UIImage *) imageWithPDFData:(NSData *)data atWidth:(CGFloat)width atPage:(NSUInteger)page;

+(nullable UIImage *) imageWithPDFData:(NSData *)data atHeight:(CGFloat)height;
+(nullable UIImage *) imageWithPDFData:(NSData *)data atHeight:(CGFloat)height atPage:(NSUInteger)page;

+(nullable UIImage *) imageWithPDFData:(NSData *)data fitSize:(CGSize)size;
+(nullable UIImage *) imageWithPDFData:(NSData *)data fitSize:(CGSize)size atPage:(NSUInteger)page;


+(nullable UIImage *) originalSizeImageWithPDFData:(NSData *)data;
+(nullable UIImage *) originalSizeImageWithPDFURL:(NSURL *)URL atPage:(NSUInteger)page;
+(nullable UIImage *) originalSizeImageWithPDFURL:(NSURL *)URL;


@end

NS_ASSUME_NONNULL_END
