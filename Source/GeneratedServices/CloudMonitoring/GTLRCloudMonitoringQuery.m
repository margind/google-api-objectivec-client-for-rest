// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Monitoring API (cloudmonitoring/v2beta2)
// Description:
//   Accesses Google Cloud Monitoring data.
// Documentation:
//   https://cloud.google.com/monitoring/v2beta2/

#import "GTLRCloudMonitoringQuery.h"

#import "GTLRCloudMonitoringObjects.h"

// ----------------------------------------------------------------------------
// Constants

// aggregator
NSString * const kGTLRCloudMonitoringAggregatorMax  = @"max";
NSString * const kGTLRCloudMonitoringAggregatorMean = @"mean";
NSString * const kGTLRCloudMonitoringAggregatorMin  = @"min";
NSString * const kGTLRCloudMonitoringAggregatorSum  = @"sum";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRCloudMonitoringQuery

@dynamic fields;

@end

@implementation GTLRCloudMonitoringQuery_MetricDescriptorsCreate

@dynamic project;

+ (instancetype)queryWithObject:(GTLRCloudMonitoring_MetricDescriptor *)object
                        project:(NSString *)project {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"project" ];
  NSString *pathURITemplate = @"{project}/metricDescriptors";
  GTLRCloudMonitoringQuery_MetricDescriptorsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.project = project;
  query.expectedObjectClass = [GTLRCloudMonitoring_MetricDescriptor class];
  query.loggingName = @"cloudmonitoring.metricDescriptors.create";
  return query;
}

@end

@implementation GTLRCloudMonitoringQuery_MetricDescriptorsDelete

@dynamic metric, project;

+ (instancetype)queryWithProject:(NSString *)project
                          metric:(NSString *)metric {
  NSArray *pathParams = @[
    @"metric", @"project"
  ];
  NSString *pathURITemplate = @"{project}/metricDescriptors/{metric}";
  GTLRCloudMonitoringQuery_MetricDescriptorsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.project = project;
  query.metric = metric;
  query.expectedObjectClass = [GTLRCloudMonitoring_DeleteMetricDescriptorResponse class];
  query.loggingName = @"cloudmonitoring.metricDescriptors.delete";
  return query;
}

@end

@implementation GTLRCloudMonitoringQuery_MetricDescriptorsList

@dynamic count, pageToken, project, query;

+ (instancetype)queryWithObject:(GTLRCloudMonitoring_ListMetricDescriptorsRequest *)object
                        project:(NSString *)project {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"project" ];
  NSString *pathURITemplate = @"{project}/metricDescriptors";
  GTLRCloudMonitoringQuery_MetricDescriptorsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.project = project;
  query.expectedObjectClass = [GTLRCloudMonitoring_ListMetricDescriptorsResponse class];
  query.loggingName = @"cloudmonitoring.metricDescriptors.list";
  return query;
}

@end

@implementation GTLRCloudMonitoringQuery_TimeseriesDescriptorsList

@dynamic aggregator, count, labels, metric, oldest, pageToken, project,
         timespan, window, youngest;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"labels" : [NSString class]
  };
  return map;
}

+ (instancetype)queryWithObject:(GTLRCloudMonitoring_ListTimeseriesDescriptorsRequest *)object
                        project:(NSString *)project
                         metric:(NSString *)metric
                       youngest:(NSString *)youngest {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"metric", @"project"
  ];
  NSString *pathURITemplate = @"{project}/timeseriesDescriptors/{metric}";
  GTLRCloudMonitoringQuery_TimeseriesDescriptorsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.project = project;
  query.metric = metric;
  query.youngest = youngest;
  query.expectedObjectClass = [GTLRCloudMonitoring_ListTimeseriesDescriptorsResponse class];
  query.loggingName = @"cloudmonitoring.timeseriesDescriptors.list";
  return query;
}

@end

@implementation GTLRCloudMonitoringQuery_TimeseriesList

@dynamic aggregator, count, labels, metric, oldest, pageToken, project,
         timespan, window, youngest;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"labels" : [NSString class]
  };
  return map;
}

+ (instancetype)queryWithObject:(GTLRCloudMonitoring_ListTimeseriesRequest *)object
                        project:(NSString *)project
                         metric:(NSString *)metric
                       youngest:(NSString *)youngest {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"metric", @"project"
  ];
  NSString *pathURITemplate = @"{project}/timeseries/{metric}";
  GTLRCloudMonitoringQuery_TimeseriesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.project = project;
  query.metric = metric;
  query.youngest = youngest;
  query.expectedObjectClass = [GTLRCloudMonitoring_ListTimeseriesResponse class];
  query.loggingName = @"cloudmonitoring.timeseries.list";
  return query;
}

@end

@implementation GTLRCloudMonitoringQuery_TimeseriesWrite

@dynamic project;

+ (instancetype)queryWithObject:(GTLRCloudMonitoring_WriteTimeseriesRequest *)object
                        project:(NSString *)project {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"project" ];
  NSString *pathURITemplate = @"{project}/timeseries:write";
  GTLRCloudMonitoringQuery_TimeseriesWrite *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.project = project;
  query.expectedObjectClass = [GTLRCloudMonitoring_WriteTimeseriesResponse class];
  query.loggingName = @"cloudmonitoring.timeseries.write";
  return query;
}

@end