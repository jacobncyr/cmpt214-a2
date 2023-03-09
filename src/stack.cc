#include<cstdlib>
#include<cstdio>
#include"stack.h"

int main(void){
	printf("test");
	push(2.0);
	pop();
	empty();
	peek();
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
	printf("empty works");
	return true;
}
float peek(void){
	printf("peek works");
	return 2.0;
}


