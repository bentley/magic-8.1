/*
 * lef.h --
 *
 * Contains definitions for things that are exported by the
 * lef module.
 *
 */

#ifndef LEF_H
#define LEF_H

#include "utils/magic.h"

/* Procedures for reading the technology file: */

extern void LefTechInit();
extern bool LefTechLine();
extern void LefTechScale();

/* Initialization: */

extern void LefInit();

#endif /* LEF_H */
