#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

struct TreeNode {
	int data;
	struct TreeNode *left;
	struct TreeNode *right;

	TreeNode(int val)
	{
		data = val;
		left = right = NULL;
	}
};

vector<int> ItrrativePreorder(TreeNode *root)
{
	vector<int> ans;
	if (root == 0)
	{
		return ans;
	}
	else
	{
		stack<TreeNode*> st;
		st.push(root);
		TreeNode *node;

		while (!st.empty())
		{
			node = st.top();
			st.pop();
			ans.push_back(node->data);
			if (node->right != NULL) { st.push(node->right); }
			if (node->left != NULL) { st.push(node->left); }


		}
		return ans;
	}
}

vector<int> InorderItr(TreeNode *root)
{
	vector<int> ans;
	if (root == NULL)
	{
		return ans;
	}
	else
	{
		stack<TreeNode*> st;
		TreeNode *node = root;

		while (true)
		{
			if (node != NULL)
			{
				st.push(node);
				node = node->left;
			}
			else
			{
				if ( st.empty() ==  1 ) { break; }
				node = st.top();
				st.pop();
				ans.push_back(node->data);
				node = node->right;

			}
		}

		return ans;
	}
}

stack<int> IterPost(TreeNode *root)
{
	stack<int> ans;
	if (root == NULL)
	{
		return ans;
	}
	else
	{
		stack<TreeNode*> st1;
		st1.push(root);
		TreeNode *node;

		while (!st1.empty())
		{
			node = st1.top();
			st1.pop();

			if (node -> left != NULL) {st1.push(node->left);}
			if (node -> right != NULL) {st1.push(node->right);}

			ans.push(node->data);

		}
		return ans;
	}
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	struct TreeNode *root = new TreeNode(3);
	root->left = new TreeNode(9);
	root->right = new TreeNode(20);

	TreeNode *root2 = root->left;
	root2->left = new TreeNode(46);
	root2->right = new TreeNode(5);

	TreeNode *root1 = root->right;
	root1->left = new TreeNode(15);
	root1->right  = new TreeNode(7);

	// vector<int> PreOrd = ItrrativePreorder(root);
	// for (auto it : PreOrd)
	// {
	// 	cout << it << " ";
	// }


	// vector<int> InorderItrvec = InorderItr(root);
	// for (auto it : InorderItrvec)
	// {
	// 	cout << it << " ";
	// }

	// Iterative Postorder

	// stack<int> IterativePostOrder = IterPost(root);
	// while (!IterativePostOrder.empty())
	// {
	// 	cout << IterativePostOrder.top() << " ";
	// 	IterativePostOrder.pop();
	// }

	// int number = 90831;

	string num = "";


	string n = "3";

	num.push_back(n[0]);
	cout << num ;





}











