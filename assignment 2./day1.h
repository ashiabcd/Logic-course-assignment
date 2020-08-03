/*
Group no=A12
Group members:
Godhala Meganaa 2017B3A70973H
Pranavi Marripudi 2018A7PS0507H
Ashi Sinha 2017B5A71149H
*/
// contains function to make any propositional logic formula implication-free. 
// author : Rashi Jain, 30/10/19

// Removes all implications from the parse tree.   
// root : Pointer to root of the parse tree(dataype : node *)
// node dataype is defined as
// typedef struct node
// {
//		char ch;  	
//   	struct node *left;
//		struct node *right;
// }node;
// return : root of the parse tree not containing any implication (dataype : node *)
node *impl_free(node *root);
