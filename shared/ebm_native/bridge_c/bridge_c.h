// Copyright (c) 2018 Microsoft Corporation
// Licensed under the MIT license.
// Author: Paul Koch <code@koch.ninja>

#ifndef BRIDGE_C_H
#define BRIDGE_C_H

#include "ebm_native.h"

#ifdef __cplusplus
extern "C" {
#define INTERNAL_IMPORT_EXPORT_BODY extern "C"
#else // __cplusplus
#define INTERNAL_IMPORT_EXPORT_BODY extern
#endif // __cplusplus

#define INTERNAL_IMPORT_EXPORT_INCLUDE extern

INTERNAL_IMPORT_EXPORT_INCLUDE ErrorEbmType CreateLoss_Cpu_64(
   const size_t cOutputs,
   const char * const sLoss,
   const char * const sLossEnd,
   const void ** const ppLossOut
);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif // BRIDGE_C_H