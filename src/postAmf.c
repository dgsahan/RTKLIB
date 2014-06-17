/*
 * postAmf.c
 *
 *  Created on: Jun 16, 2014
 *      Author: sahan
 */

#include <stdarg.h>
#include "rtklib.h"

#define PROGNAME    "postAmf"          /* program name */
#define MAXFILE     8


/*postAmf main -----------------------------------------------------------------------*/
int main(int argc, char **argv)
{
	prcopt_t prcopt=prcopt_default;
	solopt_t solopt=solopt_default;
	filopt_t filopt={""};
	gtime_t ts={0},te={0};
	double tint=0.0,es[]={2000,1,1,0,0,0},ee[]={2000,12,31,23,59,59},pos[3];
	int i,j,n,ret;
	char *infile[MAXFILE],*outfile="";


	prcopt.mode  =PMODE_STATIC;
	prcopt.navsys=SYS_GPS|SYS_GLO;
	prcopt.refpos=1;
	prcopt.glomodear=1;

	sprintf(solopt.prog ,"%s ver.%s",PROGNAME,VER_RTKLIB);
	sprintf(filopt.trace,"%s.trace",PROGNAME);


