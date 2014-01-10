//
//  HTMLPurifier.h
//  HTMLPurifier

/*
 HTML Purifier for PHP 4.6.0 - Standards Compliant HTML Filtering
 Copyright (C) 2006-2008 Edward Z. Yang
 
 HTML Purifier for Objective-c - Standards Compliant HTML Filtering
 Copyright (c) 2014 Mynigma.
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#import <Foundation/Foundation.h>

@class HTMLPurifier_Config,HTMLPurifier_Strategy_Core,HTMLPurifier_Generator,HTMLPurifier_Context,HTMLPurifier_Filter,HTMLPurifier_Lexer;

#define VERSION @"0.1"
#define TRIGGER_ERROR NSLog;


@interface HTMLPurifier : NSObject

/**
 * Global configuration object.
 */
@property HTMLPurifier_Config* config;

/**
 * Array of extra filter objects to run on HTML,
 * for backwards compatibility.
 */
@property NSMutableArray* filter;

/**
 * @type HTMLPurifier_Strategy_Core
 */
@property HTMLPurifier_Strategy_Core* strategy;

/**
 * @type HTMLPurifier_Generator
 */
@property HTMLPurifier_Generator* generator;

/**
 * Resultant context of last run purification.
 * Is an array of contexts if the last called method was purifyArray().
 */
@property HTMLPurifier_Context* context;

@end
