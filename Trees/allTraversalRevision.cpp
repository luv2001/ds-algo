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


void PostOrderRecursion(TreeNode *root)
{
	if (root == NULL)
	{
		return;
	}
	else
	{
		PostOrderRecursion(root->left);
		PostOrderRecursion(root->right);
		cout << root->data << " ";
	}
}

vector<vector<int>> levelOrderTraversal(TreeNode *root)
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

		while (!q.empty())
		{
			int size = q.size();
			TreeNode *node;
			vector<int> level;

			rep(i, size)
			{
				node = q.front();
				level.push_back(node->data);

				if (node->left != NULL) {q.push(node->left);}
				if (node->right != NULL) {q.push(node->right);}
				q.pop();
			}
			ans.push_back(level);
		}

		return ans;
	}

}

int maxDeapth(TreeNode *root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		return 1 + max(maxDeapth(root->left) , maxDeapth(root->right)) ;
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


	// cout << maxDeapth(root);


	// PostOrderRecursion(root);

	vector<vector<int>> levelOrderVector = levelOrderTraversal(root);

	for (auto it : levelOrderVector)
	{
		for (auto ut : it)
		{
			cout << ut << " ";
		}
		cout << endl;
	}


	cout << levelOrderVector.size();




}


















