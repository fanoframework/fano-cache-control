(*!------------------------------------------------------------
 * [[APP_NAME]] ([[APP_URL]])
 *
 * @link      [[APP_REPOSITORY_URL]]
 * @copyright Copyright (c) [[COPYRIGHT_YEAR]] [[COPYRIGHT_HOLDER]]
 * @license   [[LICENSE_URL]] ([[LICENSE]])
 *------------------------------------------------------------- *)

container.add('appMiddlewares', TMiddlewareListFactory.create());

container.add(
    GuidToString(IDispatcher),
    TDispatcherFactory.create(
        container['appMiddlewares'] as IMiddlewareLinkList,
        getRouteMatcher(),
        TRequestResponseFactory.create()
    )
);