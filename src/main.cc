#include<cstdlib>
#include<cstdio>
#include<cassert>
#include<unistd.h>
#include "processtheargs.h"

//process -- read strings from stin and process them
//returns EXIT_SUCCESS on successfull completion
//returns EXIT_FAILURE on unsuccefful completion 
int process(void);

int main(int argc, char *argv[]){
	int opt;
	while (( opt = getopt(argc, argv,"h")) != -1){
	
		switch(opt){
			case 'h':
				printf("h case triggerred");
				return EXIT_SUCCESS;
				break;
			default:
				printf("drfault case triggerred");
				return EXIT_FAILURE;
				break;

	}
	}
	return process();
	}
//CMD_SIZE -- assumed size for an input string/comand
const int CMD_SIZE = 80;

int process(void){
	char cmd[CMD_SIZE + 1];//add space for tombstone
	while(0 == feof(stdin)){
		if (0 != scanf("%s",cmd)){
			float f = -9999999.99;
			switch(sscanf(cmd,"%g",&f)){
					case 1: printf("%g -- number\n", f);
					break;
					case 0: printf("%s\n",cmd);
					break;
					default: printf("sscanf failed --aborting\n"); // aka eof
						 return(EXIT_FAILURE);
						 break;
		}
	}}return EXIT_SUCCESS;
	
}
