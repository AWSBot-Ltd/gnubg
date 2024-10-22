/*
 * dice.h
 *
 * by Gary Wong, 1999
 *
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
 * $Id: dice.h,v 1.35 2016/08/24 22:00:57 plm Exp $
 */

#ifndef DICE_H
#define DICE_H

#include <stdio.h>

typedef enum _rng {
    RNG_BBS, RNG_ISAAC, RNG_MD5, RNG_MERSENNE,
    RNG_MANUAL, RNG_RANDOM_DOT_ORG, RNG_FILE,
    NUM_RNGS
} rng;

typedef struct _rngcontext rngcontext;

extern const char *aszRNG[NUM_RNGS];
extern const char *aszRNGTip[NUM_RNGS];
extern char szDiceFilename[];
extern rng rngCurrent;
extern rngcontext *rngctxCurrent;

rngcontext *CopyRNGContext(rngcontext * rngctx);

extern void free_rngctx(rngcontext * rngctx);
extern void *InitRNG(unsigned long *pnSeed, int *pfInitFrom, const int fSet, const rng rngx);
extern void CloseRNG(const rng rngx, rngcontext * rngctx);
extern void DestroyRNG(const rng rngx, rngcontext ** rngctx);
extern void PrintRNGSeed(const rng rngx, rngcontext * rngctx);
extern void PrintRNGCounter(const rng rngx, rngcontext * rngctx);
extern void InitRNGSeed(unsigned int n, const rng rngx, rngcontext * rngctx);
extern int RNGSystemSeed(const rng rngx, void *p, unsigned long *pnSeed);

extern int RollDice(unsigned int anDice[2], rng * prngx, rngcontext * rngctx);

#if defined(HAVE_LIBGMP)
extern int InitRNGSeedLong(char *sz, rng rng, rngcontext * rngctx);
extern int InitRNGBBSModulus(const char *sz, rngcontext * rngctx);
extern int InitRNGBBSFactors(char *sz0, char *sz1, rngcontext * rngctx);
#endif

extern FILE *OpenDiceFile(rngcontext * rngctx, const char *sz);

extern char *GetDiceFileName(rngcontext * rngctx);

#endif
