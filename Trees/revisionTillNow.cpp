// #include <cstdio>
// #include <iostream>
// #include <vector>
// #include <map>
// #include <stack>
// #include <queue>

#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

/*
	TREE
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

void InorderRecursion(TreeNode *root)  // Inorder (L root R) Pre(root L R) Post (L R root) --> recursion
{
	if (root ==  NULL)
	{
		return;
	}

	InorderRecursion(root->left);
	InorderRecursion(root->right);
	cout << root->data << " ";
}

// Iterative Inorder

vector<int> InorderIterator(TreeNode *root)
{
	vector<int> ans;
	if (root == NULL)
	{
		return ans;
	}
	else
	{
		stack<TreeNode *> st;
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
				if (st.empty() == 1) {break;}
				node = st.top();
				st.pop();
				ans.push_back(node->data);
				node = node->right;
			}
		}

		return ans;
	}
}


// Level Order Triversal


vector<vector<int>> levelOrderTriversal(TreeNode *root)
{
	vector<vector<int>> ans;
	if (root == NULL)
	{
		return ans;
	}
	else
	{
		TreeNode *node;
		queue<TreeNode*> q;
		q.push(root);


		while (!q.empty())
		{
			vector<int> level;
			int size = q.size();

			for (int i = 0; i < size ; ++i)
			{
				node = q.front();
				if (node->left != NULL) {q.push(node->left);};
				if (node->right != NULL) {q.push(node->right);};
				q.pop();
				level.push_back(node->data);
			}
			ans.push_back(level);
		}

		return ans;
	}
}

//Iterative Preorder Triversal

stack<int> IterativePreorder(TreeNode *root)
{
	stack<int> ans;
	if (root == NULL) {return ans;}
	else
	{
		TreeNode *node;
		stack<TreeNode*> st;
		st.push(root);

		while (!st.empty())
		{
			node = st.top();
			ans.push(node->data);
			st.pop();
			if (node->right != NULL) {st.push(node->right);}
			if (node->left != NULL) {st.push(node->left);}
		}
		return ans;
	}
}

// Iterative Post Order using 2 stacks

stack<int> IterativePostOrder(TreeNode *root)
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
			ans.push(node->data);
			st1.pop();
			if (node->left != NULL) {st1.push(node->left);}
			if (node->right != NULL) {st1.push(node->right);}
		}
		return ans;
	}
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	TreeNode *root = new TreeNode(3);
	root->left = new TreeNode(11);
	root->right = new TreeNode(9);

	TreeNode *root1 = root->left;
	TreeNode *root2 = root->right;

	root1->left = new TreeNode(4);
	root1->right = new TreeNode(89);
	root1->right->left = new TreeNode(100);

	root2->left = new TreeNode(542);



	// InorderRecursion(root);
	// cout << endl;

	// vector<int> Initrve =  InorderIterator(root);
	// for (auto it : Initrve)
	// {
	// 	cout << it << " ";
	// }


	// vector<vector<int>> levelOrdrerVector =  levelOrderTriversal(root);

	// for (auto it : levelOrdrerVector)
	// {
	// 	for (auto it1 : it)
	// 	{
	// 		cout << it1 << " ";
	// 	}
	// 	cout << endl;
	// }

	// stack<int> IterativePreOrderStack = IterativePreorder(root);

	// while (!IterativePreOrderStack.empty())
	// {
	// 	cout << IterativePreOrderStack.top() << " ";
	// 	IterativePreOrderStack.pop();
	// }
	// cout << endl;
	// InorderRecursion(root);

	// stack<int> IterativePostOrderStack = IterativePostOrder(root);
	// while (!IterativePostOrderStack.empty())
	// {
	// 	cout << IterativePostOrderStack.top() << " ";
	// 	IterativePostOrderStack.pop();
	// }
	// cout << endl;
	// InorderRecursion(root);
}


