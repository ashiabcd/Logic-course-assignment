/*
Group no=A12
Group members:
Godhala Meganaa 2017B3A70973H
Pranavi Marripudi 2018A7PS0507H
Ashi Sinha 2017B5A71149H
*/
#include<stdio.h>
#include "day2.h"

// main program to convert infix expression to postfix.
// author: Rashi Jain, 11/10/19

int main()
{
	char infix_exp[100];
	//scan the infix expression 
	scanf("%s", infix_exp);
	infixToPostfix(infix_exp); //The function will print the postFix expression. 
	return 0;
}
