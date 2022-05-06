// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Stackdriver Profiler API (cloudprofiler/v2)
// Description:
//   Manages continuous profiling information.
// Documentation:
//   https://cloud.google.com/profiler/

#import <GoogleAPIClientForREST/GTLRService.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: See, edit, configure, and delete your Google Cloud data
 *  and see the email address for your Google Account.
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCloudProfilerCloudPlatform;
/**
 *  Authorization scope: View and write monitoring data for all of your Google
 *  and third-party Cloud and API projects
 *
 *  Value "https://www.googleapis.com/auth/monitoring"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCloudProfilerMonitoring;
/**
 *  Authorization scope: Publish metric data to your Google Cloud projects
 *
 *  Value "https://www.googleapis.com/auth/monitoring.write"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCloudProfilerMonitoringWrite;

// ----------------------------------------------------------------------------
//   GTLRCloudProfilerService
//

/**
 *  Service for executing Stackdriver Profiler API queries.
 *
 *  Manages continuous profiling information.
 */
@interface GTLRCloudProfilerService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRCloudProfilerQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop