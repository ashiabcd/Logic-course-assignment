/*
Group no=A12
Group members:
Godhala Meganaa 2017B3A70973H
Pranavi Marripudi 2018A7PS0507H
Ashi Sinha 2017B5A71149H
*/
// contains functions for basic operations on stack.
//#include<stdio.h>


// stack : character array used for implementation.
// max : integer variable denoting maximum size of array.
// stackPointer : Integer variable which denotes the top index of the stack, -1 when the stack is empty.  
// (*stackPointer) = Pointer to the integer variable denoting top index.  
// Pointers have been used as the function will update the top index of the stack.
// value : is a character variable - the value to be pushed.

// used to insert a value into the stack.
// return : void
void push(char stack[], int max, int *stackPointer, char value)
{
	if((*stackPointer)>=max-1)
	{
		return;
	}
	else
		stack[++(*stackPointer)]=value;
	//printf("spush:%d\n",*stackPointer);

}

// deletes the top value from stack and updates *stackPointer.
// return : void.
void pop(char stack[], int max, int *stackPointer)
{
	if((*stackPointer)==-1)
	{
		return;
	}
	else
		(*stackPointer)--;
	//printf("spop:%d\n",*stackPointer);
}


// to check whether stack is empty or not by the value of *stackPointer. 
// return : 1 when stack is empty and 0 when it isn't
int isEmpty(char stack[], int max, int stackPointer)
{
	if(stackPointer==-1)
		return 1;
	else
		return 0;
}

// checks whether stack is full or not. 
// return : 1 when stack is full and 0 when it isn't. 
int isFull(char stack[], int max, int stackPointer)
{
	if(stackPointer==(max-1))
		return 1;
	else
		return 0;
}
