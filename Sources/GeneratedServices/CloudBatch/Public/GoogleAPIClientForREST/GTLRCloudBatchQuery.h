// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Batch API (batch/v1)
// Description:
//   An API to manage the running of batch jobs on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/batch/

#import <GoogleAPIClientForREST/GTLRQuery.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

#import "GTLRCloudBatchObjects.h"

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Batch query classes.
 */
@interface GTLRCloudBatchQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets information about a location.
 *
 *  Method: batch.projects.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsGet : GTLRCloudBatchQuery

/** Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBatch_Location.
 *
 *  Gets information about a location.
 *
 *  @param name Resource name for the location.
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Create a Job.
 *
 *  Method: batch.projects.locations.jobs.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsJobsCreate : GTLRCloudBatchQuery

/**
 *  ID used to uniquely identify the Job within its parent scope. This field
 *  should contain at most 63 characters and must start with lowercase
 *  characters. Only lowercase characters, numbers and '-' are accepted. The '-'
 *  character cannot be the first or the last one. A system generated ID will be
 *  used if the field is not set. The job.name field in the request will be
 *  ignored and the created resource name of the Job will be
 *  "{parent}/jobs/{job_id}".
 */
@property(nonatomic, copy, nullable) NSString *jobId;

/**
 *  Required. The parent resource name where the Job will be created. Pattern:
 *  "projects/{project}/locations/{location}"
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Optional. An optional request ID to identify requests. Specify a unique
 *  request ID so that if you must retry your request, the server will know to
 *  ignore the request if it has already been completed. The server will
 *  guarantee that for at least 60 minutes since the first request. For example,
 *  consider a situation where you make an initial request and the request times
 *  out. If you make the request again with the same request ID, the server can
 *  check if original operation with the same request ID was received, and if
 *  so, will ignore the second request. This prevents clients from accidentally
 *  creating duplicate commitments. The request ID must be a valid UUID with the
 *  exception that zero UUID is not supported
 *  (00000000-0000-0000-0000-000000000000).
 */
@property(nonatomic, copy, nullable) NSString *requestId;

/**
 *  Fetches a @c GTLRCloudBatch_Job.
 *
 *  Create a Job.
 *
 *  @param object The @c GTLRCloudBatch_Job to include in the query.
 *  @param parent Required. The parent resource name where the Job will be
 *    created. Pattern: "projects/{project}/locations/{location}"
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsJobsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudBatch_Job *)object
                         parent:(NSString *)parent;

@end

/**
 *  Delete a Job.
 *
 *  Method: batch.projects.locations.jobs.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsJobsDelete : GTLRCloudBatchQuery

/** Job name. */
@property(nonatomic, copy, nullable) NSString *name;

/** Optional. Reason for this deletion. */
@property(nonatomic, copy, nullable) NSString *reason;

/**
 *  Optional. An optional request ID to identify requests. Specify a unique
 *  request ID so that if you must retry your request, the server will know to
 *  ignore the request if it has already been completed. The server will
 *  guarantee that for at least 60 minutes after the first request. For example,
 *  consider a situation where you make an initial request and the request times
 *  out. If you make the request again with the same request ID, the server can
 *  check if original operation with the same request ID was received, and if
 *  so, will ignore the second request. This prevents clients from accidentally
 *  creating duplicate commitments. The request ID must be a valid UUID with the
 *  exception that zero UUID is not supported
 *  (00000000-0000-0000-0000-000000000000).
 */
@property(nonatomic, copy, nullable) NSString *requestId;

/**
 *  Fetches a @c GTLRCloudBatch_Operation.
 *
 *  Delete a Job.
 *
 *  @param name Job name.
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsJobsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Get a Job specified by its resource name.
 *
 *  Method: batch.projects.locations.jobs.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsJobsGet : GTLRCloudBatchQuery

/** Required. Job name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBatch_Job.
 *
 *  Get a Job specified by its resource name.
 *
 *  @param name Required. Job name.
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsJobsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List all Jobs for a project within a region.
 *
 *  Method: batch.projects.locations.jobs.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsJobsList : GTLRCloudBatchQuery

/** List filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Optional. Sort results. Supported are "name", "name desc", "create_time",
 *  and "create_time desc".
 */
@property(nonatomic, copy, nullable) NSString *orderBy;

/** Page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** Page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Parent path. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudBatch_ListJobsResponse.
 *
 *  List all Jobs for a project within a region.
 *
 *  @param parent Parent path.
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsJobsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Return a single Task.
 *
 *  Method: batch.projects.locations.jobs.taskGroups.tasks.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsJobsTaskGroupsTasksGet : GTLRCloudBatchQuery

/** Required. Task name. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBatch_Task.
 *
 *  Return a single Task.
 *
 *  @param name Required. Task name.
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsJobsTaskGroupsTasksGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List Tasks associated with a job.
 *
 *  Method: batch.projects.locations.jobs.taskGroups.tasks.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsJobsTaskGroupsTasksList : GTLRCloudBatchQuery

/**
 *  Task filter, null filter matches all Tasks. Filter string should be of the
 *  format State=TaskStatus.State e.g. State=RUNNING
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** Page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** Page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. Name of a TaskGroup from which Tasks are being requested. Pattern:
 *  "projects/{project}/locations/{location}/jobs/{job}/taskGroups/{task_group}"
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudBatch_ListTasksResponse.
 *
 *  List Tasks associated with a job.
 *
 *  @param parent Required. Name of a TaskGroup from which Tasks are being
 *    requested. Pattern:
 *    "projects/{project}/locations/{location}/jobs/{job}/taskGroups/{task_group}"
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsJobsTaskGroupsTasksList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: batch.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsList : GTLRCloudBatchQuery

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
 *  Fetches a @c GTLRCloudBatch_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsList
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
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  `Code.CANCELLED`.
 *
 *  Method: batch.projects.locations.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsOperationsCancel : GTLRCloudBatchQuery

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBatch_Empty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not guaranteed.
 *  If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation, the
 *  operation is not deleted; instead, it becomes an operation with an
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  `Code.CANCELLED`.
 *
 *  @param object The @c GTLRCloudBatch_CancelOperationRequest to include in the
 *    query.
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsOperationsCancel
 */
+ (instancetype)queryWithObject:(GTLRCloudBatch_CancelOperationRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: batch.projects.locations.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsOperationsDelete : GTLRCloudBatchQuery

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBatch_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsOperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: batch.projects.locations.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsOperationsGet : GTLRCloudBatchQuery

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBatch_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *
 *  Method: batch.projects.locations.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsOperationsList : GTLRCloudBatchQuery

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudBatch_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Report agent's state, e.g. agent status and tasks information
 *
 *  Method: batch.projects.locations.state.report
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBatchCloudPlatform
 */
@interface GTLRCloudBatchQuery_ProjectsLocationsStateReport : GTLRCloudBatchQuery

/**
 *  Required. Format: projects/{project}/locations/{location} {project} should
 *  be a project number.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudBatch_ReportAgentStateResponse.
 *
 *  Report agent's state, e.g. agent status and tasks information
 *
 *  @param object The @c GTLRCloudBatch_ReportAgentStateRequest to include in
 *    the query.
 *  @param parent Required. Format: projects/{project}/locations/{location}
 *    {project} should be a project number.
 *
 *  @return GTLRCloudBatchQuery_ProjectsLocationsStateReport
 */
+ (instancetype)queryWithObject:(GTLRCloudBatch_ReportAgentStateRequest *)object
                         parent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop