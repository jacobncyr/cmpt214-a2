#ifndef STACK_H
#define STACK_H
//push takes a float and pushes it onto the stack.
//returns true is successfull false if not
bool push(float);

//pop the float off the top of the stack and remove the last item
float pop();

//empty return whether the stack is empty or not
bool empty();

//return top of stack without removing top
float peek();


#endif
