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

	TreeNode(int val) {
		data = val;
		left = right = NULL;
	}
};

vector<vector<int>> levelOrderTriversal(TreeNode *root)
{
	vector<vector<int>> ans;

	if (root == NULL)
	{
		return ans;
	}
	else
	{
		queue<TreeNode *> q;
		q.push(root);
		TreeNode *node;
		while (!q.empty())
		{
			vector<int> level;
			int size = q.size();
			rep(i, size)
			{
				TreeNode *node = q.front();
				q.pop();
				level.push_back(node->data);

				if (node -> left != NULL )
				{
					q.push(node->left);
				}
				if (node -> right != NULL)
				{
					q.push(node->right);
				}
			}
			ans.push_back(level);
		}
	}
	return ans;
}

int deepestLeavesSum(TreeNode* root)
{
	vector<vector<int>> levelOrder = levelOrderTriversal(root);

	auto it = levelOrder.end() - 1;

	int sum = 0;
	for (auto it1 : *it)
	{
		sum = sum + it1;
	}
	return sum;


}

int leftRightleefsSum(TreeNode *root)
{

	int sum = deepestLeavesSum(root->left) + deepestLeavesSum(root->right);
	return sum;
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
	root2->left = new TreeNode(1);
	root2->right = new TreeNode(5);

	// TreeNode *root1 = root->right;
	// root1->left = new TreeNode(1);
	// root1->right  = new TreeNode(7);

	cout << deepestLevesSum(root);

	cout << leftRightleefsSum(root);

	// vector<vector<int>> ans =  levelOrderTriversal(root);


	// auto ptr = ans.end() - 1;

	// int sum = 0;
	// for (auto p : *ptr)
	// {
	// 	sum = sum + p;
	// }
	// cout << sum;



}