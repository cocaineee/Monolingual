import PackageDescription

let package = Package(
	name: "XPCService",
	dependencies: [
		.Package(url: "https://github.com/IngmarStein/SMJobKit.git", versions: Version(0, 0, 7)..<Version(1, 0, 0)),
	]
)
