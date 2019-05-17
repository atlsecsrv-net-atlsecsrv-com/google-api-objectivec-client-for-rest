// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud OS Login API (oslogin/v1)
// Description:
//   You can use OS Login to manage access to your VM instances using IAM roles.
//   For more information, read [OS Login](/compute/docs/oslogin/).
// Documentation:
//   https://cloud.google.com/compute/docs/oslogin/

#import "GTLRCloudOSLoginQuery.h"

#import "GTLRCloudOSLoginObjects.h"

@implementation GTLRCloudOSLoginQuery

@dynamic fields;

@end

@implementation GTLRCloudOSLoginQuery_UsersGetLoginProfile

@dynamic name, projectId, systemId;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/loginProfile";
  GTLRCloudOSLoginQuery_UsersGetLoginProfile *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudOSLogin_LoginProfile class];
  query.loggingName = @"oslogin.users.getLoginProfile";
  return query;
}

@end

@implementation GTLRCloudOSLoginQuery_UsersImportSshPublicKey

@dynamic parent, projectId;

+ (instancetype)queryWithObject:(GTLRCloudOSLogin_SshPublicKey *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}:importSshPublicKey";
  GTLRCloudOSLoginQuery_UsersImportSshPublicKey *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudOSLogin_ImportSshPublicKeyResponse class];
  query.loggingName = @"oslogin.users.importSshPublicKey";
  return query;
}

@end

@implementation GTLRCloudOSLoginQuery_UsersProjectsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudOSLoginQuery_UsersProjectsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudOSLogin_Empty class];
  query.loggingName = @"oslogin.users.projects.delete";
  return query;
}

@end

@implementation GTLRCloudOSLoginQuery_UsersSshPublicKeysDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudOSLoginQuery_UsersSshPublicKeysDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudOSLogin_Empty class];
  query.loggingName = @"oslogin.users.sshPublicKeys.delete";
  return query;
}

@end

@implementation GTLRCloudOSLoginQuery_UsersSshPublicKeysGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudOSLoginQuery_UsersSshPublicKeysGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudOSLogin_SshPublicKey class];
  query.loggingName = @"oslogin.users.sshPublicKeys.get";
  return query;
}

@end

@implementation GTLRCloudOSLoginQuery_UsersSshPublicKeysPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRCloudOSLogin_SshPublicKey *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudOSLoginQuery_UsersSshPublicKeysPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudOSLogin_SshPublicKey class];
  query.loggingName = @"oslogin.users.sshPublicKeys.patch";
  return query;
}

@end
