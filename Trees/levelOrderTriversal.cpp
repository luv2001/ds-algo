#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

void print2DVector(vector<vector<int>> ans)
{
	for (auto it : ans)
	{
		for (auto it1 : it)
		{
			cout << it1 << " ";
		}
		cout << endl;
	}
}

struct TreeNode {
	int data;
	struct TreeNode *left;
	struct TreeNode *right;

	TreeNode(int val) {
		data = val;
		left = right = NULL;
	}
};

void Postorder(TreeNode *root)
{
	if (root == NULL)
	{
		return;
	}
	Postorder(root->left);
	Postorder(root->right);
	cout << root->data << " ";
}
std::vector<int> v;


void Preorder(TreeNode *root)
{
	if (root == NULL)
	{
		return;
	}
	v.push_back(root->data);
	Preorder(root->left);
	Preorder(root->right);
}

vector<int> preOrderVector(TreeNode *)
{
	return v;
}


vector<vector<int>> levelOrder(TreeNode* root) {

	vector<vector<int>> ans;
	if (root == NULL)
	{
		return ans;
	}
	else
	{
		queue<TreeNode*> q;
		q.push(root);
		vector<int> level;

		while (!q.empty())
		{
			vector<int> level;
			int size = q.size();
			rep(i, size)
			{
				TreeNode *node = q.front();
				q.pop();

				if (node->left != NULL) { q.push(node->left); }
				if (node->right != NULL) { q.push(node->right); }
				level.push_back(node->data);

			}
			ans.push_back(level);
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

	vector<vector<int>> ans =  levelOrder(root);

	// Postorder(root);

	// print2DVector(ans);



	// for (auto it : PreAns)
	// {
	// 	cout << it << " ";
	// }
	Preorder(root);
	// cout << endl;
	// for (auto it : v)
	// {
	// 	cout << it << " ";
	// }
	vector<int> PreAns = preOrderVector(root);

	for (auto it : PreAns)
	{
		cout << it << " ";
	}


}