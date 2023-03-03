#include<cstdlib>
#include<cstdio>
#include<cassert>
#include<unistd.h>
#include "processtheargs.h"



int main(int argc, char *argv[]){
	int opt = getopt(argc, argv," abc");
	processtheargs(opt);
	return EXIT_SUCCESS;
	}
