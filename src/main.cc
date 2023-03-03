#include<cstdlib>
#include<cstdio>
#include<cassert>
#include<unistd.h>
#include "processtheargs.h"



int main(int argc, char *argv[]){
	while (int opt = getopt(argc, argv,"h") != -1){
	
		switch(opt){
			case 'h':
				printf("h case triggerred");
				break;
			default:
				printf("drfault case triggerred");
				break;

	}
	return EXIT_SUCCESS;
	}}
