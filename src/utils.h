/*
 *  MrBayes 3.1.2
 *
 *  copyright 2002-2005
 *
 *  John P. Huelsenbeck
 *  Section of Ecology, Behavior and Evolution
 *  Division of Biological Sciences
 *  University of California, San Diego
 *  La Jolla, CA 92093-0116
 *
 *  johnh@biomail.ucsd.edu
 *
 *	Fredrik Ronquist
 *  Paul van der Mark
 *  School of Computational Science
 *  Florida State University
 *  Tallahassee, FL 32306-4120
 *
 *  ronquist@scs.fsu.edu
 *  paulvdm@scs.fsu.edu
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details (www.gnu.org).
 *
 */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>


typedef struct
	{
    MrBFlt          mean;
    MrBFlt          median;
    MrBFlt          lower;
    MrBFlt          upper;
    MrBFlt          var;
    MrBFlt          PSRF;
	}
	Stat;


int      AddBitfield (safeLong ***list, int listLen, int *set, int setLen);
void     ClearBits (safeLong *bits, int nLongs);
int      CopyResults (FILE *toFile, char *fromFileName, int lastGen);
int      CopyTreeResults (FILE *toFile, char *fromFileName, int lastGen, int *treeNum);
int      FirstTaxonInPartition (safeLong *partition, int length);
safeLong FirstTree (FILE *fp, char *lineBuf, int longestLine);
int      Flip01 (int x);
void     FlipBits (safeLong *partition, int length, safeLong *mask);
void     FlipOneBit (int n, safeLong *p);
void     GetIntSummary (int **vals, int nRows, int *rowCount, Stat *theStats, int HPD);
void     GetSummary (MrBFlt **vals, int nRows, int *rowCount, Stat *theStats, int HPD);
int      HarmonicArithmeticMeanOnLogs (MrBFlt *vals, int nVals, MrBFlt *mean, MrBFlt *harm_mean);
int      IsBitSet (int i, safeLong *bits);
int      IsConsistentWith (const char *token, const char *expected);
int      IsPartNested (safeLong *smaller, safeLong *larger, int length);
int      IsPartCompatible (safeLong *smaller, safeLong *larger, int length);
safeLong LastBlock (FILE *fp, char *lineBuf, int longestLine);
int		 LineTermType (FILE *fp);
int      LongestLine (FILE *fp);
void     LowerUpperMedian (MrBFlt *vals, int nVals, MrBFlt *lower, MrBFlt *upper, MrBFlt *median);
void     LowerUpperMedianHPD (MrBFlt *vals, int nVals, MrBFlt *lower, MrBFlt *upper, MrBFlt *median);
void     MeanVariance (MrBFlt *vals, int nVals, MrBFlt *mean, MrBFlt *var);
int      NumBits (safeLong *x, int len);
char    *MbPrintNum (MrBFlt num);
void     MrBayesPrint (char *format, ...);
void     MrBayesPrintf (FILE *f, char *format, ...);
FILE    *OpenBinaryFileR (char *name);
FILE 	*OpenTextFileA (char *name);
FILE    *OpenTextFileR (char *name);
FILE 	*OpenTextFileW (char *name);
MrBFlt   PotentialScaleReduction (MrBFlt **vals, int nRows, int *count);
void    *SafeCalloc(size_t n, size_t s);
int      SafeFclose(FILE **fp);
void     SafeFree(void **ptr);
void    *SafeMalloc(size_t s);
void    *SafeRealloc(void *ptr, size_t s);
char    *SafeStrcat(char **target, const char *source);
void	 SetBit (int i, safeLong *bits);
void     SortInts(int *item, int *assoc, int count, int descendingOrder);
void     SortInts2(int *item, int *assoc, int left, int right, int descendingOrder);
void     SortMrBFlt (MrBFlt *item, int left, int right);
int      StrCmpCaseInsensitive (char *s, char *t);
void     StripComments (char *s);
int      WantTo (const char *msg);