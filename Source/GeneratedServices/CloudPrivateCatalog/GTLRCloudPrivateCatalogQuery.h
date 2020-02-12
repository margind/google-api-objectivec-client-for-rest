// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Private Catalog API (cloudprivatecatalog/v1beta1)
// Description:
//   Enable cloud users to discover enterprise catalogs and products in their
//   organizations.
// Documentation:
//   https://cloud.google.com/private-catalog/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Private Catalog query classes.
 */
@interface GTLRCloudPrivateCatalogQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Search Catalog resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  Method: cloudprivatecatalog.folders.catalogs.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudPrivateCatalogCloudPlatform
 */
@interface GTLRCloudPrivateCatalogQuery_FoldersCatalogsSearch : GTLRCloudPrivateCatalogQuery
// Previous library name was
//   +[GTLQueryCloudPrivateCatalog queryForFoldersCatalogsSearchWithresource:]

/** The maximum number of entries that are requested. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to SearchCatalogs that
 *  indicates where this listing should continue from.
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The query to filter the catalogs. The supported queries are:
 *  * Get a single catalog: `name=catalogs/{catalog_id}`
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Required. The name of the resource context. It can be in following formats:
 *  * `projects/{project_id}`
 *  * `folders/{folder_id}`
 *  * `organizations/{organization_id}`
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c
 *  GTLRCloudPrivateCatalog_GoogleCloudPrivatecatalogV1beta1SearchCatalogsResponse.
 *
 *  Search Catalog resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  @param resource Required. The name of the resource context. It can be in
 *    following formats:
 *    * `projects/{project_id}`
 *    * `folders/{folder_id}`
 *    * `organizations/{organization_id}`
 *
 *  @return GTLRCloudPrivateCatalogQuery_FoldersCatalogsSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Search Product resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  Method: cloudprivatecatalog.folders.products.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudPrivateCatalogCloudPlatform
 */
@interface GTLRCloudPrivateCatalogQuery_FoldersProductsSearch : GTLRCloudPrivateCatalogQuery
// Previous library name was
//   +[GTLQueryCloudPrivateCatalog queryForFoldersProductsSearchWithresource:]

/** The maximum number of entries that are requested. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to SearchProducts that
 *  indicates where this listing should continue from.
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The query to filter the products.
 *  The supported queries are:
 *  * List products of all catalogs: empty
 *  * List products under a catalog: `parent=catalogs/{catalog_id}`
 *  * Get a product by name:
 *  `name=catalogs/{catalog_id}/products/{product_id}`
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Required. The name of the resource context. See
 *  SearchCatalogsRequest.resource for details.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c
 *  GTLRCloudPrivateCatalog_GoogleCloudPrivatecatalogV1beta1SearchProductsResponse.
 *
 *  Search Product resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  @param resource Required. The name of the resource context. See
 *    SearchCatalogsRequest.resource for details.
 *
 *  @return GTLRCloudPrivateCatalogQuery_FoldersProductsSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Search Version resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  Method: cloudprivatecatalog.folders.versions.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudPrivateCatalogCloudPlatform
 */
@interface GTLRCloudPrivateCatalogQuery_FoldersVersionsSearch : GTLRCloudPrivateCatalogQuery
// Previous library name was
//   +[GTLQueryCloudPrivateCatalog queryForFoldersVersionsSearchWithresource:]

/** The maximum number of entries that are requested. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to SearchVersions
 *  that indicates where this listing should continue from.
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The query to filter the versions. Required.
 *  The supported queries are:
 *  * List versions under a product:
 *  `parent=catalogs/{catalog_id}/products/{product_id}`
 *  * Get a version by name:
 *  `name=catalogs/{catalog_id}/products/{product_id}/versions/{version_id}`
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Required. The name of the resource context. See
 *  SearchCatalogsRequest.resource for details.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c
 *  GTLRCloudPrivateCatalog_GoogleCloudPrivatecatalogV1beta1SearchVersionsResponse.
 *
 *  Search Version resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  @param resource Required. The name of the resource context. See
 *    SearchCatalogsRequest.resource for details.
 *
 *  @return GTLRCloudPrivateCatalogQuery_FoldersVersionsSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Search Catalog resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  Method: cloudprivatecatalog.organizations.catalogs.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudPrivateCatalogCloudPlatform
 */
@interface GTLRCloudPrivateCatalogQuery_OrganizationsCatalogsSearch : GTLRCloudPrivateCatalogQuery
// Previous library name was
//   +[GTLQueryCloudPrivateCatalog queryForOrganizationsCatalogsSearchWithresource:]

/** The maximum number of entries that are requested. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to SearchCatalogs that
 *  indicates where this listing should continue from.
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The query to filter the catalogs. The supported queries are:
 *  * Get a single catalog: `name=catalogs/{catalog_id}`
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Required. The name of the resource context. It can be in following formats:
 *  * `projects/{project_id}`
 *  * `folders/{folder_id}`
 *  * `organizations/{organization_id}`
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c
 *  GTLRCloudPrivateCatalog_GoogleCloudPrivatecatalogV1beta1SearchCatalogsResponse.
 *
 *  Search Catalog resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  @param resource Required. The name of the resource context. It can be in
 *    following formats:
 *    * `projects/{project_id}`
 *    * `folders/{folder_id}`
 *    * `organizations/{organization_id}`
 *
 *  @return GTLRCloudPrivateCatalogQuery_OrganizationsCatalogsSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Search Product resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  Method: cloudprivatecatalog.organizations.products.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudPrivateCatalogCloudPlatform
 */
@interface GTLRCloudPrivateCatalogQuery_OrganizationsProductsSearch : GTLRCloudPrivateCatalogQuery
// Previous library name was
//   +[GTLQueryCloudPrivateCatalog queryForOrganizationsProductsSearchWithresource:]

/** The maximum number of entries that are requested. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to SearchProducts that
 *  indicates where this listing should continue from.
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The query to filter the products.
 *  The supported queries are:
 *  * List products of all catalogs: empty
 *  * List products under a catalog: `parent=catalogs/{catalog_id}`
 *  * Get a product by name:
 *  `name=catalogs/{catalog_id}/products/{product_id}`
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Required. The name of the resource context. See
 *  SearchCatalogsRequest.resource for details.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c
 *  GTLRCloudPrivateCatalog_GoogleCloudPrivatecatalogV1beta1SearchProductsResponse.
 *
 *  Search Product resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  @param resource Required. The name of the resource context. See
 *    SearchCatalogsRequest.resource for details.
 *
 *  @return GTLRCloudPrivateCatalogQuery_OrganizationsProductsSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Search Version resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  Method: cloudprivatecatalog.organizations.versions.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudPrivateCatalogCloudPlatform
 */
@interface GTLRCloudPrivateCatalogQuery_OrganizationsVersionsSearch : GTLRCloudPrivateCatalogQuery
// Previous library name was
//   +[GTLQueryCloudPrivateCatalog queryForOrganizationsVersionsSearchWithresource:]

/** The maximum number of entries that are requested. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to SearchVersions
 *  that indicates where this listing should continue from.
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The query to filter the versions. Required.
 *  The supported queries are:
 *  * List versions under a product:
 *  `parent=catalogs/{catalog_id}/products/{product_id}`
 *  * Get a version by name:
 *  `name=catalogs/{catalog_id}/products/{product_id}/versions/{version_id}`
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Required. The name of the resource context. See
 *  SearchCatalogsRequest.resource for details.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c
 *  GTLRCloudPrivateCatalog_GoogleCloudPrivatecatalogV1beta1SearchVersionsResponse.
 *
 *  Search Version resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  @param resource Required. The name of the resource context. See
 *    SearchCatalogsRequest.resource for details.
 *
 *  @return GTLRCloudPrivateCatalogQuery_OrganizationsVersionsSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Search Catalog resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  Method: cloudprivatecatalog.projects.catalogs.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudPrivateCatalogCloudPlatform
 */
@interface GTLRCloudPrivateCatalogQuery_ProjectsCatalogsSearch : GTLRCloudPrivateCatalogQuery
// Previous library name was
//   +[GTLQueryCloudPrivateCatalog queryForProjectsCatalogsSearchWithresource:]

/** The maximum number of entries that are requested. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to SearchCatalogs that
 *  indicates where this listing should continue from.
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The query to filter the catalogs. The supported queries are:
 *  * Get a single catalog: `name=catalogs/{catalog_id}`
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Required. The name of the resource context. It can be in following formats:
 *  * `projects/{project_id}`
 *  * `folders/{folder_id}`
 *  * `organizations/{organization_id}`
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c
 *  GTLRCloudPrivateCatalog_GoogleCloudPrivatecatalogV1beta1SearchCatalogsResponse.
 *
 *  Search Catalog resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  @param resource Required. The name of the resource context. It can be in
 *    following formats:
 *    * `projects/{project_id}`
 *    * `folders/{folder_id}`
 *    * `organizations/{organization_id}`
 *
 *  @return GTLRCloudPrivateCatalogQuery_ProjectsCatalogsSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Search Product resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  Method: cloudprivatecatalog.projects.products.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudPrivateCatalogCloudPlatform
 */
@interface GTLRCloudPrivateCatalogQuery_ProjectsProductsSearch : GTLRCloudPrivateCatalogQuery
// Previous library name was
//   +[GTLQueryCloudPrivateCatalog queryForProjectsProductsSearchWithresource:]

/** The maximum number of entries that are requested. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to SearchProducts that
 *  indicates where this listing should continue from.
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The query to filter the products.
 *  The supported queries are:
 *  * List products of all catalogs: empty
 *  * List products under a catalog: `parent=catalogs/{catalog_id}`
 *  * Get a product by name:
 *  `name=catalogs/{catalog_id}/products/{product_id}`
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Required. The name of the resource context. See
 *  SearchCatalogsRequest.resource for details.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c
 *  GTLRCloudPrivateCatalog_GoogleCloudPrivatecatalogV1beta1SearchProductsResponse.
 *
 *  Search Product resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  @param resource Required. The name of the resource context. See
 *    SearchCatalogsRequest.resource for details.
 *
 *  @return GTLRCloudPrivateCatalogQuery_ProjectsProductsSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Search Version resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  Method: cloudprivatecatalog.projects.versions.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudPrivateCatalogCloudPlatform
 */
@interface GTLRCloudPrivateCatalogQuery_ProjectsVersionsSearch : GTLRCloudPrivateCatalogQuery
// Previous library name was
//   +[GTLQueryCloudPrivateCatalog queryForProjectsVersionsSearchWithresource:]

/** The maximum number of entries that are requested. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to SearchVersions
 *  that indicates where this listing should continue from.
 *  This field is optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The query to filter the versions. Required.
 *  The supported queries are:
 *  * List versions under a product:
 *  `parent=catalogs/{catalog_id}/products/{product_id}`
 *  * Get a version by name:
 *  `name=catalogs/{catalog_id}/products/{product_id}/versions/{version_id}`
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Required. The name of the resource context. See
 *  SearchCatalogsRequest.resource for details.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c
 *  GTLRCloudPrivateCatalog_GoogleCloudPrivatecatalogV1beta1SearchVersionsResponse.
 *
 *  Search Version resources that consumers have access to, within the
 *  scope of the consumer cloud resource hierarchy context.
 *
 *  @param resource Required. The name of the resource context. See
 *    SearchCatalogsRequest.resource for details.
 *
 *  @return GTLRCloudPrivateCatalogQuery_ProjectsVersionsSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop