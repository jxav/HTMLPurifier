//
//  HTMLPurifier_Arborize.h
//  HTMLPurifier
//
//  Created by Roman Priebe on 12.01.14.
//  Copyright (c) 2014 Mynigma. All rights reserved.
//

#import <Foundation/Foundation.h>

@class HTMLPurifier_Node, HTMLPurifier_Config, HTMLPurifier_Context;

/**
 * Converts a stream of HTMLPurifier_Token into an HTMLPurifier_Node,
 * and back again.
 *
 * @note This transformation is not an equivalence.  We mutate the input
 * token stream to make it so; see all [MUT] markers in code.
 */
@interface HTMLPurifier_Arborize : NSObject


+ (NSArray*)arborizeTokens:(NSArray*)tokens config:(HTMLPurifier_Config*)config context:(HTMLPurifier_Context*)context;

+ (NSArray*)flattenNode:(HTMLPurifier_Node*)node config:(HTMLPurifier_Config*)config context:(HTMLPurifier_Context*)context;

@end
