@interface SymbolInfo : NSObject
@property(nonatomic, copy) NSString *name;
@property(nonatomic) uint64_t offset;
@property(nonatomic, copy) NSString *sourcePath;
@property(nonatomic) NSUInteger sourceLineNumber;
@end

/* vim: set ft=objcpp ff=unix sw=4 ts=4 tw=80 expandtab: */
