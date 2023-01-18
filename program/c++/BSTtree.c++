#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* createNode(int data)
{
	struct node *n;
	n=(struct node*) malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}
void preOrder(struct node* root)
{
	if(root!=NULL)
	{
		cout<<" "<<root->data;
		preOrder(root->left);
		//cout<<" "<<root->data;
		preOrder(root->right);
	}
}

void inOrder(struct node* root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		cout<<" "<<root->data;
		inOrder(root->right);
	}
}
void postOrder(struct node* root)
{
	if(root!=NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout<<" "<<root->data;
	}
}
int  isBST(struct node* root)
{
static struct node *prev=NULL;
	if(root!=NULL)
	{
	if(!isBST(root->left)){
	return 0;
	}
	if(prev!=NULL && root->data<= prev->data){
	return 0;
   }
    prev = root;
    return isBST(root->right);
 }
 else{
 return 1;
}
}
int main()
{
	struct node *p=createNode(5);
	struct node *p1=createNode(3);
	struct node *p2=createNode(6);
	struct node *p3=createNode(1);
	struct node *p4=createNode(4);
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	
	//preOrder(p);
	//cout<<"\n";
	inOrder(p);
	cout<<"\n";
    cout<<(isBST(p));
	return 0;
}
