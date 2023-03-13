#include<cstdlib>
#include<cstdio>
#include"stack.h"


const int stack_size = 5;
int next_index = 0;
float the_stack[stack_size];


int main(void){
	return EXIT_SUCCESS;
}

bool push(float){
	printf("push works");
	return true;;
}

float pop(void){
	printf("pop works");
	return 1.0;
}
bool empty(void){
	return 0 == next_index;
}
float peek(void){
	printf("peek works");
	return 2.0;
}


