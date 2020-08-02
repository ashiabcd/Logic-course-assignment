/*
Group no=A12
Group members:
Godhala Meganaa 2017B3A70973H
Pranavi Marripudi 2018A7PS0507H
Ashi Sinha 2017B5A71149H
*/
#include<stdio.h>
#include<string.h>
#include"day1.h"
void infixToPostfix(char infix_exp[])
{
	int l=strlen(infix_exp);
	char stack[l];
	int max=l;
	int stackPointer=-1;
	for(int i=0;i<l;i++)
	{
	   //  printf("%d:\n",i);
		if((infix_exp[i]>='a') && (infix_exp[i]<='z'))
			printf("%c",infix_exp[i]);
		else if(infix_exp[i]=='V'||infix_exp[i]=='^'||infix_exp[i]=='~'||infix_exp[i]=='>')
			push(stack,max,&stackPointer,infix_exp[i]);
			
		else if(infix_exp[i]=='(')
			//{
			push(stack,max,&stackPointer,infix_exp[i]);
			//printf("%i:%c",stackPointer)}

		else if(infix_exp[i]==')')
		{
			while(((stack[stackPointer])!='(')&&(stackPointer>-1))
			{
				printf("%c",stack[stackPointer]);
				//printf("%d\n",stackPointer);
				pop(stack,max,&stackPointer);
				//(stackPointer--);
			}	
			pop(stack,max,&stackPointer);
		}
	}
		while(stackPointer!=(-1))
		     pop(stack,l,&stackPointer);
	
}
