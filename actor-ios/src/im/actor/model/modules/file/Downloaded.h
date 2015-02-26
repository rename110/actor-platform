//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/modules/file/Downloaded.java
//

#ifndef _ImActorModelModulesFileDownloaded_H_
#define _ImActorModelModulesFileDownloaded_H_

@class BSBserValues;
@class BSBserWriter;
@class IOSByteArray;

#include "J2ObjC_header.h"
#include "im/actor/model/droidkit/bser/BserObject.h"
#include "im/actor/model/storage/KeyValueItem.h"

@interface ImActorModelModulesFileDownloaded : BSBserObject < AMKeyValueItem > {
}

+ (ImActorModelModulesFileDownloaded *)fromBytesWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithLong:(jlong)fileId
                     withInt:(jint)fileSize
                withNSString:(NSString *)descriptor;

- (jlong)getFileId;

- (jint)getFileSize;

- (NSString *)getDescriptor;

- (void)parseWithBSBserValues:(BSBserValues *)values;

- (void)serializeWithBSBserWriter:(BSBserWriter *)writer;

- (jlong)getEngineId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesFileDownloaded)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ImActorModelModulesFileDownloaded *ImActorModelModulesFileDownloaded_fromBytesWithByteArray_(IOSByteArray *data);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesFileDownloaded)

#endif // _ImActorModelModulesFileDownloaded_H_
