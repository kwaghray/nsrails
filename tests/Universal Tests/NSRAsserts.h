//
//  NSRAsserts.h
//  NSRails
//
//  Created by Dan Hassin on 2/18/12.
//  Copyright (c) 2012 InContext LLC. All rights reserved.
//

#import "NSRails.h"
#import "NSRConfig.h"

//Make some private methods accessible
@interface NSRailsModel (internal)

+ (NSRConfig *) getRelevantConfig;

- (void) setAttributesAsPerDictionary:(NSDictionary *)dict;
- (NSDictionary *) dictionaryOfRelevantProperties;

+ (NSString *) railsProperties;
+ (NSString *) getModelName;
+ (NSString *) getPluralModelName;

+ (NSRConfig *) getRelevantConfig;

- (NSString *) listOfSendableProperties;

- (NSString *) routeForInstanceRoute:(NSString *)route error:(NSError **)error;
+ (NSString *) routeForControllerRoute:(NSString *)route;

@end


#define NSRAssertClassModelName(mname, class)	GHAssertEqualStrings([class getModelName], mname, @"%@ model name failed.", NSStringFromClass(class))

#define NSRAssertClassPluralName(mname, class)	GHAssertEqualStrings([class getPluralModelName], mname, @"%@ model name failed.", NSStringFromClass(class))

#define NSRAssertClassConfig(config, class)	GHAssertEqualStrings([class getRelevantConfig].appURL, config, @"%@ config failed.", NSStringFromClass(class))

#define NSRAssertClassProperties(props, class)	GHAssertEqualStrings([[class new] listOfSendableProperties], props, @"%@ properties failed.", NSStringFromClass(class))

#define NSRAssertRelevantConfigURL(x,y) GHAssertEqualStrings([NSRailsModel getRelevantConfig].appURL, x, y)