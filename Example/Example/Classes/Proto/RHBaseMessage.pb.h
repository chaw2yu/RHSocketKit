// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class RHBaseMessage;
@class RHBaseMessageBuilder;



@interface RhbaseMessageRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define RHBaseMessage_protobuf_type @"protobufType"
#define RHBaseMessage_protobuf_class_name @"protobufClassName"
#define RHBaseMessage_protobuf_data @"protobufData"
@interface RHBaseMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasProtobufType_:1;
  BOOL hasProtobufClassName_:1;
  BOOL hasProtobufData_:1;
  SInt32 protobufType;
  NSString* protobufClassName;
  NSData* protobufData;
}
- (BOOL) hasProtobufType;
- (BOOL) hasProtobufClassName;
- (BOOL) hasProtobufData;
@property (readonly) SInt32 protobufType;
@property (readonly, strong) NSString* protobufClassName;
@property (readonly, strong) NSData* protobufData;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RHBaseMessageBuilder*) builder;
+ (RHBaseMessageBuilder*) builder;
+ (RHBaseMessageBuilder*) builderWithPrototype:(RHBaseMessage*) prototype;
- (RHBaseMessageBuilder*) toBuilder;

+ (RHBaseMessage*) parseFromData:(NSData*) data;
+ (RHBaseMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RHBaseMessage*) parseFromInputStream:(NSInputStream*) input;
+ (RHBaseMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RHBaseMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RHBaseMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RHBaseMessageBuilder : PBGeneratedMessageBuilder {
@private
  RHBaseMessage* resultRhbaseMessage;
}

- (RHBaseMessage*) defaultInstance;

- (RHBaseMessageBuilder*) clear;
- (RHBaseMessageBuilder*) clone;

- (RHBaseMessage*) build;
- (RHBaseMessage*) buildPartial;

- (RHBaseMessageBuilder*) mergeFrom:(RHBaseMessage*) other;
- (RHBaseMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RHBaseMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasProtobufType;
- (SInt32) protobufType;
- (RHBaseMessageBuilder*) setProtobufType:(SInt32) value;
- (RHBaseMessageBuilder*) clearProtobufType;

- (BOOL) hasProtobufClassName;
- (NSString*) protobufClassName;
- (RHBaseMessageBuilder*) setProtobufClassName:(NSString*) value;
- (RHBaseMessageBuilder*) clearProtobufClassName;

- (BOOL) hasProtobufData;
- (NSData*) protobufData;
- (RHBaseMessageBuilder*) setProtobufData:(NSData*) value;
- (RHBaseMessageBuilder*) clearProtobufData;
@end


// @@protoc_insertion_point(global_scope)
