#include<cstdlib>
#include<cstdio>
#include"stack.h"


const int stack_size = 5;
int next_index = 0;
float the_stack[stack_size];


int main(void value){
	return EXIT_SUCCESS;
	
}

bool push(float){
	//push a float onto the top of the stack
	//if the stack is not full
	//should check though if it is empty first or not add after
        if(next_index < stack_size){
		the_stack[next_index++]=value;
		return true;
	}else {
		printf("error: stack is full\n");
		return false;
	}}


float pop(void){
	//pop a value off the top of the stack and return the next
	//item on the stack
	if(next_index > 0){
	   return the_stack[--next_index];
	}else{
		//this should really be an assert check
		printf("error: the stack is empty");
		return 0.0;
}
}
bool empty(void){
	return 0 == next_index;
}
float peek(void){
	if(next_index > 0){
		return the_stack[next_index -1];
	}else{
		printf("error stack is empty");
		return 0.0;
	}}


