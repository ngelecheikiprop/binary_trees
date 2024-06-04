#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int item;
	struct node* left;
	struct node* right;
};

void inorderTraversal(struct node* root)
{
	if (root == NULL)
		return;
	inorderTraversal(root->left);
	printf("%d->",root->item);
	inorderTraversal(root->right);
}

struct node* createNode(int value)
{
	/**/
	struct node* newNode = malloc(sizeof(struct node));
	newNode->item = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}

void insertLeft(struct node* root, int value)
{
	root->left = createNode(value);
}

void insertRight( struct node* root, int value)
{
	root->right = createNode(value);
}
void main()
{
	struct node* root = createNode(13);
	insertLeft(root, 12);
	insertRight(root, 14);
	printf("%d----\n", root->item);
	printf("left - %d", root->left->item);
	printf("right - %d", root->right->item);
}
