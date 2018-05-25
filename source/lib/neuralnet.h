/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of version 3 or later of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * neuralnet.h
 *
 * by Gary Wong, 1998
 * $Id: neuralnet.h,v 1.35 2017/02/18 16:19:44 plm Exp $
 */

#ifndef NEURALNET_H
#define NEURALNET_H

#include <stdio.h>
#include "common.h"

typedef struct _neuralnet {
    unsigned int cInput;
    unsigned int cHidden;
    unsigned int cOutput;
    int nTrained;
    float rBetaHidden;
    float rBetaOutput;
    float *arHiddenWeight;
    float *arOutputWeight;
    float *arHiddenThreshold;
    float *arOutputThreshold;
} neuralnet;

typedef enum {
    NNEVAL_NONE,
    NNEVAL_SAVE,
    NNEVAL_FROMBASE
} NNEvalType;

typedef enum {
    NNSTATE_NONE = -1,
    NNSTATE_INCREMENTAL,
    NNSTATE_DONE
} NNStateType;

typedef struct _NNState {
    NNStateType state;
    float *savedBase;
    float *savedIBase;
#if !defined(USE_SIMD_INSTRUCTIONS)
    unsigned int cSavedIBase;
#endif
} NNState;

extern void NeuralNetDestroy(neuralnet * pnn);
#if !defined(USE_SIMD_INSTRUCTIONS)
extern int NeuralNetEvaluate(const neuralnet * pnn, float arInput[], float arOutput[], NNState * pnState);
#else
extern int NeuralNetEvaluateSSE(const neuralnet * pnn, float arInput[], float arOutput[], NNState * pnState);
#endif
extern int NeuralNetLoad(neuralnet * pnn, FILE * pf);
extern int NeuralNetLoadBinary(neuralnet * pnn, FILE * pf);
extern int NeuralNetSaveBinary(const neuralnet * pnn, FILE * pf);
extern int SIMD_Supported(void);

/* Try to determine whether we are 64-bit or 32-bit */
#if defined(_WIN32) || defined(_WIN64)
#if defined(_WIN64)
#define ENVIRONMENT64
#else
#define ENVIRONMENT32
#endif
#endif

#if defined(__GNUC__)
#if defined(__x86_64__)
#define ENVIRONMENT64
#else
#define ENVIRONMENT32
#endif
#endif

#endif
