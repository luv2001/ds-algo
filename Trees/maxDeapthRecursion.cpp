#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define push_back pb
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

int maxDeapth(TreeNode *root)
{
	if (root == NULL) return 0;

	int lh = maxDeapth(root->left);
	int rh = maxDeapth(root->right);

	return 1 + max(lh , rh);
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

	cout << maxDeapth(root);


}


















