#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using ll = long long;


using namespace std;
using ll = long long;

/*

*/

struct TreeNode
{
	int data;
	struct TreeNode* left;
	struct TreeNode* right;

	TreeNode(int val)
	{
		data = val;
		left = right = NULL;
	}

};

void IterativeInorder(TreeNode *root)
{
	if (root == NULL)
	{
		return;
	}
	else
	{
		stack<TreeNode *> st;
		st.push(root);
		TreeNode *node;

		while (true)
		{
			if (node != NULL)
			{
				st.push(node);
				node = node ->left;
			}
			else
			{
				if (st.empty() == true) break;
				node = st.top();
				st.pop();
				cout << node->data << " ";
				node = node->right;
			}
		}
	}
}

void IterativePreOrder(TreeNode *root)
{
	if (root == NULL)
	{
		return;
	}
	else
	{
		stack<TreeNode *> st;
		st.push(root);
		TreeNode *node;


		while (!st.empty())
		{
			node = st.top();
			cout << node->data << " ";
			st.pop();
			if (node->right != NULL) {st.push(node->right);}
			if (node->left != NULL) {st.push(node->left);}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);

	TreeNode *root1 = root->left;
	TreeNode *root2 = root->right;


	root1->left = new TreeNode(4);
	root1->right = new TreeNode(5);

	root2->left = new TreeNode(6);

	root1->left->left = new TreeNode(7);
	root1->right->right = new TreeNode(8);

	root1->right->right->left = new TreeNode(10);


	// IterativePreOrder(root);
	IterativeInorder(root);



}


















