// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "UIImagePDF",
    platforms: [
        .iOS(.v16)
    ],
    products: [
        .library(
            name: "UIImagePDF",
            targets: ["UIImagePDF"]
        )
    ],
    targets: [
        .target(
            name: "UIImagePDF",
            path: "Sources/UIImagePDF",
            publicHeadersPath: "include",
            cSettings: [
                .headerSearchPath(".")
            ]
        )
    ]
)
