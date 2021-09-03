#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

struct Node {
	int data;
	struct Node *left;
	struct Node *right;

	Node(int val) {
		data = val;
		left = right = NULL;
	}
};

// void Preorder(struct Node *root)
// {
// 	if (root == NULL)
// 	{
// 		return;
// 	}
// 	cout << root->data << " ";
// 	Preorder(root->left);
// 	Preorder(root->right);
// }

// void Inorder(struct Node *root)
// {
// 	if (root == NULL)
// 	{
// 		return;
// 	}
// 	Inorder(root->left);
// 	cout << root->data << " ";
// 	Inorder(root->right);
// }

void Postorder(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	Postorder(root->left);
	Postorder(root->right);
	cout << root->data << " ";
}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Node *root = new Node(1);
	root->left = new Node(2);
	root ->right = new Node(3);

	Node *root1 = root->left;
	root1->left = new Node(4);
	root1->right = new Node(5);

	Node *root2 = root->right;
	root2->left = new Node(7);
	root2->right = new Node(8);

	Node *root3 = root2->right;
	root3->left = new Node(9);


	// Preorder(root);
	// Inorder(root);
	Postorder(root);





}