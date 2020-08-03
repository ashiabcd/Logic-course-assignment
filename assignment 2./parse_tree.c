/*
Group no=A12
Group members:
Godhala Meganaa 2017B3A70973H
Pranavi Marripudi 2018A7PS0507H
Ashi Sinha 2017B5A71149H
*/
// contains functions to construct a parse tree and print the infix expression. 
// author : Rashi Jain, 11/10/19

// prints the infix expression via inorder traversal. 
// root : Pointer to root of the binary tree. (dataype : node *)
// node dataype is defined as
// typedef struct node
// {
//		char ch;  	
//   	struct node *left;
//		struct node *right;
// }node;
// return : void
#include<stdio.h>
#include<string.h>
#include"stack.h"
	node* stack[1000];
	int stackPointer=-1,cnt=0;
	node n[1000];
void inorder(node *root)
{
	//printf("(");
	if((root->ch)!='~')
	{
		if((root)->left==NULL)
			{printf("%c",(root->ch));
			return;
			}
		else
			{printf("(");
			inorder(root->left);}
		printf("%c",root->ch);
		if((root)->right==NULL)
			{printf("%c",(root)->ch);
			return;
			}
		else
			{inorder(root->right);
			printf(")");}
	}
	
	else
	{
		printf("(%c",root->ch);
		root=root->right;
		inorder(root);
		printf(")");
		
	}
	
		
			
	//printf(")");
}
	

// constructs the binary tree given a postfix expression. 
// post_exp : character array containing postfix expression.
// return : (node *) dataype - pointer to the root of the binary tree. 
node* parseTree(char post_exp[])
{
	int l=strlen(post_exp);
	/*node* stack[l];
	int stackPointer=-1,cnt=0;
	node n[l+10];*/
	for(int i=0;i<l;i++)
	{
		if(post_exp[i]>='a' && post_exp[i]<='z')
		{
			
			n[cnt].ch=post_exp[i];	
			push(stack,l,&stackPointer,&n[cnt]);
			cnt++;
		}
		else if(post_exp[i]=='V'||post_exp[i]=='>'||post_exp[i]=='^')
		{
			
			n[cnt].ch=post_exp[i];
			n[cnt].right=top(stack,l,stackPointer);
			pop(stack,l,&stackPointer);
			n[cnt].left=top(stack,l,stackPointer);
			pop(stack,l,&stackPointer);
			push(stack,l,&stackPointer,&n[cnt]);
			cnt++;
		}
		else if(post_exp[i]=='~')
		{
			
			n[cnt].ch=post_exp[i];
			n[cnt].right=top(stack,l,stackPointer);
			pop(stack,l,&stackPointer);
			push(stack,l,&stackPointer,&n[cnt]);
			cnt++;
		}
	}
	return top(stack,l,stackPointer);
}


