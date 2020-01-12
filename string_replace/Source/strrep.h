/*
 * strrep.h
 *
 *  Created on: 12 ene. 2020
 *      Author: ipserc
 */

#ifndef SOURCE_STRREP_H_
#define SOURCE_STRREP_H_

#include <stdio.h>
#include <string.h>
#include <malloc.h>

char * appendstr(char * string, const char * append);
char * strtokk(char * string, const char * strf);

char * strrep(const char * string, const char * strf, const char * strr);


#endif /* SOURCE_STRREP_H_ */
