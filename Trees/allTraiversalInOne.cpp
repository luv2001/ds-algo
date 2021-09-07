#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
// #define push_back pb
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



vector<int> AllTraiversalInOneGo(TreeNode *root)
{
	stack<pair<TreeNode * , int> > st;
	st.push({root, 1});



	vector<int> PreOrder;
	vector<int> Inorder;
	vector<int> PostOrder;

	while (!st.empty())
	{

		if (st.top().second == 1)
		{
			PreOrder.push_back(st.top().first->data);
			st.top().second++;
			if (st.top().first->left != NULL)
			{
				st.push( {st.top().first->left , 1} );
			}
		}
		else if (st.top().second == 2)
		{
			Inorder.push_back(st.top().first->data);
			st.top().second++;
			if (st.top().first->right != NULL)
			{
				st.push( {st.top().first->right , 1} );
			}

		}
		else if (st.top().second == 3)
		{
			PostOrder.push_back(st.top().first->data);
			st.pop();
		}
		else
		{
			continue;
		}

	}





	return PostOrder;





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


	vector<int> InorderVector =  AllTraiversalInOneGo(root);

	for (auto it : InorderVector)
	{
		cout << it << " ";
	}





}


















