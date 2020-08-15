#include"utility.h"

using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
	Node(int pdata)
	{
		data = pdata;
		left = NULL;
		right = NULL;
	}
};

Node* insert(int data)
{
	return new Node(data);
}

int height(Node *root)
{
	if (root == NULL)
		return 0;

	int left = height(root->left);
	int right = height(root->right);

	return max(left, right) + 1;
}

void traverse(Node *root)
{
	if (root == NULL)
		return;

	traverse(root->left);
	cout << root->data << " ";
	traverse(root->right);

}

int main()
{
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	cout << height(root) << endl;
}