// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Parallelstore API (parallelstore/v1)
// Documentation:
//   https://cloud.google.com/parallelstore

#import <GoogleAPIClientForREST/GTLRQuery.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

#import "GTLRParallelstoreObjects.h"

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Parallelstore query classes.
 */
@interface GTLRParallelstoreQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets information about a location.
 *
 *  Method: parallelstore.projects.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsGet : GTLRParallelstoreQuery

/** Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRParallelstore_Location.
 *
 *  Gets information about a location.
 *
 *  @param name Resource name for the location.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates a Parallelstore instance in a given project and location.
 *
 *  Method: parallelstore.projects.locations.instances.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsInstancesCreate : GTLRParallelstoreQuery

/**
 *  Required. The name of the Parallelstore instance. * Must contain only
 *  lowercase letters, numbers, and hyphens. * Must start with a letter. * Must
 *  be between 1-63 characters. * Must end with a number or a letter. * Must be
 *  unique within the customer project / location
 */
@property(nonatomic, copy, nullable) NSString *instanceId;

/**
 *  Required. The instance's project and location, in the format
 *  `projects/{project}/locations/{location}`. Locations map to Google Cloud
 *  zones; for example, `us-west1-b`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Optional. An optional request ID to identify requests. Specify a unique
 *  request ID so that if you must retry your request, the server will know to
 *  ignore the request if it has already been completed. The server will
 *  guarantee that for at least 60 minutes since the first request. For example,
 *  consider a situation where you make an initial request and t he request
 *  times out. If you make the request again with the same request ID, the
 *  server can check if original operation with the same request ID was
 *  received, and if so, will ignore the second request. This prevents clients
 *  from accidentally creating duplicate commitments. The request ID must be a
 *  valid UUID with the exception that zero UUID is not supported
 *  (00000000-0000-0000-0000-000000000000).
 */
@property(nonatomic, copy, nullable) NSString *requestId;

/**
 *  Fetches a @c GTLRParallelstore_Operation.
 *
 *  Creates a Parallelstore instance in a given project and location.
 *
 *  @param object The @c GTLRParallelstore_Instance to include in the query.
 *  @param parent Required. The instance's project and location, in the format
 *    `projects/{project}/locations/{location}`. Locations map to Google Cloud
 *    zones; for example, `us-west1-b`.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsInstancesCreate
 */
+ (instancetype)queryWithObject:(GTLRParallelstore_Instance *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a single instance.
 *
 *  Method: parallelstore.projects.locations.instances.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsInstancesDelete : GTLRParallelstoreQuery

/** Required. Name of the resource */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Optional. An optional request ID to identify requests. Specify a unique
 *  request ID so that if you must retry your request, the server will know to
 *  ignore the request if it has already been completed. The server will
 *  guarantee that for at least 60 minutes after the first request. For example,
 *  consider a situation where you make an initial request and t he request
 *  times out. If you make the request again with the same request ID, the
 *  server can check if original operation with the same request ID was
 *  received, and if so, will ignore the second request. This prevents clients
 *  from accidentally creating duplicate commitments. The request ID must be a
 *  valid UUID with the exception that zero UUID is not supported
 *  (00000000-0000-0000-0000-000000000000).
 */
@property(nonatomic, copy, nullable) NSString *requestId;

/**
 *  Fetches a @c GTLRParallelstore_Operation.
 *
 *  Deletes a single instance.
 *
 *  @param name Required. Name of the resource
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsInstancesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Copies data from Parallelstore to Cloud Storage.
 *
 *  Method: parallelstore.projects.locations.instances.exportData
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsInstancesExportData : GTLRParallelstoreQuery

/** Required. Name of the resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRParallelstore_Operation.
 *
 *  Copies data from Parallelstore to Cloud Storage.
 *
 *  @param object The @c GTLRParallelstore_ExportDataRequest to include in the
 *    query.
 *  @param name Required. Name of the resource.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsInstancesExportData
 */
+ (instancetype)queryWithObject:(GTLRParallelstore_ExportDataRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Gets details of a single instance.
 *
 *  Method: parallelstore.projects.locations.instances.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsInstancesGet : GTLRParallelstoreQuery

/**
 *  Required. The instance resource name, in the format
 *  `projects/{project_id}/locations/{location}/instances/{instance_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRParallelstore_Instance.
 *
 *  Gets details of a single instance.
 *
 *  @param name Required. The instance resource name, in the format
 *    `projects/{project_id}/locations/{location}/instances/{instance_id}`.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsInstancesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Copies data from Cloud Storage to Parallelstore.
 *
 *  Method: parallelstore.projects.locations.instances.importData
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsInstancesImportData : GTLRParallelstoreQuery

/** Required. Name of the resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRParallelstore_Operation.
 *
 *  Copies data from Cloud Storage to Parallelstore.
 *
 *  @param object The @c GTLRParallelstore_ImportDataRequest to include in the
 *    query.
 *  @param name Required. Name of the resource.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsInstancesImportData
 */
+ (instancetype)queryWithObject:(GTLRParallelstore_ImportDataRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Lists all instances in a given project and location.
 *
 *  Method: parallelstore.projects.locations.instances.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsInstancesList : GTLRParallelstoreQuery

/** Optional. Filtering results. */
@property(nonatomic, copy, nullable) NSString *filter;

/** Optional. Hint for how to order the results. */
@property(nonatomic, copy, nullable) NSString *orderBy;

/**
 *  Optional. Requested page size. Server may return fewer items than requested.
 *  If unspecified, the server will pick an appropriate default.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional. A token identifying a page of results the server should return.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The project and location for which to retrieve instance
 *  information, in the format `projects/{project_id}/locations/{location}`. To
 *  retrieve instance information for all locations, use "-" as the value of
 *  `{location}`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRParallelstore_ListInstancesResponse.
 *
 *  Lists all instances in a given project and location.
 *
 *  @param parent Required. The project and location for which to retrieve
 *    instance information, in the format
 *    `projects/{project_id}/locations/{location}`. To retrieve instance
 *    information for all locations, use "-" as the value of `{location}`.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsInstancesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates the parameters of a single instance.
 *
 *  Method: parallelstore.projects.locations.instances.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsInstancesPatch : GTLRParallelstoreQuery

/**
 *  Identifier. The resource name of the instance, in the format
 *  `projects/{project}/locations/{location}/instances/{instance_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Optional. An optional request ID to identify requests. Specify a unique
 *  request ID so that if you must retry your request, the server will know to
 *  ignore the request if it has already been completed. The server will
 *  guarantee that for at least 60 minutes since the first request. For example,
 *  consider a situation where you make an initial request and t he request
 *  times out. If you make the request again with the same request ID, the
 *  server can check if original operation with the same request ID was
 *  received, and if so, will ignore the second request. This prevents clients
 *  from accidentally creating duplicate commitments. The request ID must be a
 *  valid UUID with the exception that zero UUID is not supported
 *  (00000000-0000-0000-0000-000000000000).
 */
@property(nonatomic, copy, nullable) NSString *requestId;

/**
 *  Required. Mask of fields to update. Field mask is used to specify the fields
 *  to be overwritten in the Instance resource by the update. At least one path
 *  must be supplied in this field. The fields specified in the update_mask are
 *  relative to the resource, not the full request.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRParallelstore_Operation.
 *
 *  Updates the parameters of a single instance.
 *
 *  @param object The @c GTLRParallelstore_Instance to include in the query.
 *  @param name Identifier. The resource name of the instance, in the format
 *    `projects/{project}/locations/{location}/instances/{instance_id}`.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsInstancesPatch
 */
+ (instancetype)queryWithObject:(GTLRParallelstore_Instance *)object
                           name:(NSString *)name;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: parallelstore.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsList : GTLRParallelstoreQuery

/**
 *  A filter to narrow down results to a preferred subset. The filtering
 *  language accepts strings like `"displayName=tokyo"`, and is documented in
 *  more detail in [AIP-160](https://google.aip.dev/160).
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The resource that owns the locations collection, if applicable. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The maximum number of results to return. If not set, the service selects a
 *  default.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A page token received from the `next_page_token` field in the response. Send
 *  that page token to receive the subsequent page.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRParallelstore_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not guaranteed.
 *  If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation, the
 *  operation is not deleted; instead, it becomes an operation with an
 *  Operation.error value with a google.rpc.Status.code of `1`, corresponding to
 *  `Code.CANCELLED`.
 *
 *  Method: parallelstore.projects.locations.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsOperationsCancel : GTLRParallelstoreQuery

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRParallelstore_GoogleProtobufEmpty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not guaranteed.
 *  If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation, the
 *  operation is not deleted; instead, it becomes an operation with an
 *  Operation.error value with a google.rpc.Status.code of `1`, corresponding to
 *  `Code.CANCELLED`.
 *
 *  @param object The @c GTLRParallelstore_CancelOperationRequest to include in
 *    the query.
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsOperationsCancel
 */
+ (instancetype)queryWithObject:(GTLRParallelstore_CancelOperationRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: parallelstore.projects.locations.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsOperationsDelete : GTLRParallelstoreQuery

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRParallelstore_GoogleProtobufEmpty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsOperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: parallelstore.projects.locations.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsOperationsGet : GTLRParallelstoreQuery

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRParallelstore_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *
 *  Method: parallelstore.projects.locations.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeParallelstoreCloudPlatform
 */
@interface GTLRParallelstoreQuery_ProjectsLocationsOperationsList : GTLRParallelstoreQuery

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRParallelstore_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRParallelstoreQuery_ProjectsLocationsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop