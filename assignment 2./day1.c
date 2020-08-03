/*
Group no=A12
Group members:
Godhala Meganaa 2017B3A70973H
Pranavi Marripudi 2018A7PS0507H
Ashi Sinha 2017B5A71149H
*/
#include<stdio.h>
//#include"day1.h"
#include"stack.h"
#include"parse_tree.h"
node ne[100];
int ct=0;
void func(node *root);
node *impl_free(node *root)
{
     func(root);
     return root;
}

void func(node *root)
{
     
     if((root->ch)>='a'&&(root->ch)<='z')
     {
          //printf("%c\n",root->ch);
          return;
     }
          
     if(root->ch=='V'||root->ch=='^')
     {
          func(root->left);
          func(root->right);
     }
     else if(root->ch=='~')
     {
          func(root->right);
     }
     else if(root->ch=='>')
     {
          
          root->ch='V';
          node *temp=root->left;
          root->left=(&ne[ct]);
          ne[ct].right=temp;
           ne[ct].ch='~';
          ct++;
          func(root);
          //func(root->left);   
          //func(root->right);
     }
}
