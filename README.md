UIImage+PDF
===========

`UIImage+PDF` provides a `UIImage` class category method to render a `UIImage` from any PDF stored in the application bundle. The motivation for this was to enable the easy use of scaleable vector assets in `iOS` apps.


Installation
------------

### Swift Package Manager

Add to your `Package.swift`:

```swift
dependencies: [
    .package(url: "https://github.com/silvansky/UIImage-PDF.git", from: "2.0.0")
]
```

Or in Xcode: File → Add Package Dependencies → enter the repository URL.


Usage
-----

**Swift:**

```swift
import UIImagePDF

let img = UIImage(pdfNamed: "YingYang.pdf", at: CGSize(width: 40, height: 40))
let img = UIImage(pdfNamed: "YingYang.pdf", fitSize: CGSize(width: 90, height: 50))
let img = UIImage(pdfNamed: "YingYang.pdf", atWidth: 60)
let img = UIImage(pdfNamed: "YingYang.pdf", atHeight: 90)
let img = UIImage(originalSizeWithPDFNamed: "YingYang.pdf")

let img = UIImage(pdfURL: url, at: CGSize(width: 60, height: 60), atPage: 1)
let img = UIImage(pdfData: data, at: CGSize(width: 60, height: 60), atPage: 1)
```

**Objective-C:**

```objc
@import UIImagePDF;

UIImage *img = [UIImage imageWithPDFNamed:@"YingYang.pdf" atSize:CGSizeMake(40, 40)];
UIImage *img = [UIImage imageWithPDFNamed:@"YingYang.pdf" fitSize:CGSizeMake(90, 50)];
UIImage *img = [UIImage imageWithPDFNamed:@"YingYang.pdf" atWidth:60];
UIImage *img = [UIImage imageWithPDFNamed:@"YingYang.pdf" atHeight:90];
UIImage *img = [UIImage originalSizeImageWithPDFNamed:@"YingYang.pdf"];

UIImage *img = [UIImage imageWithPDFURL:url atSize:CGSizeMake(60, 60) atPage:1];
UIImage *img = [UIImage imageWithPDFData:data atSize:CGSizeMake(60, 60) atPage:1];
```

The `fitSize:`, `atWidth:` and `atHeight:` methods preserve the aspect ratio of the source PDF.

For full API list see `UIImage+PDF.h`.


Disk Caching
------------

`UIImage+PDF` transparently caches all rendered PDFs in `<Application_Home>/Library/Caches/__PDF_CACHE__`. To disable:

```objc
[UIImage setShouldCacheOnDisk:NO];
```


Memory Caching
--------------

`UIImage+PDF` can use `NSCache` to cache rendered PDFs in memory. Disabled by default. To enable:

```objc
[UIImage setShouldCacheInMemory:YES];
```


PDF file size
-------------

By default Adobe Illustrator saves exported PDFs inefficiently. For best results, select File → Save a Copy, select PDF format and uncheck all general options.

Other vector graphics editors which natively use the OSX Quartz renderer, such as [Sketch](http://www.bohemiancoding.com/sketch/), create much more compact PDFs.

[ShrinkIt](http://www.panic.com/blog/2010/02/shrinkit-1-0/) from [Panic](http://www.panic.com/) can help optimize PDF assets.


Licence
-------

Copyright 2012 Nigel Timothy Barber - [@mindbrix](http://twitter.com/mindbrix). All rights reserved.

Permission is given to use this source code file without charge in any project, commercial or otherwise, entirely at your risk, with the condition that any redistribution (in part or whole) of source code must retain this copyright and permission notice. Attribution in compiled projects is appreciated but not required.
