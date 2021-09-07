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

void PostOrderRecursion(TreeNode *root)  // Inorder (L root R) Pre(root L R) Post (L R root) --> recursion
{
	if (root ==  NULL)
	{
		return;
	}

	PostOrderRecursion(root->left);
	PostOrderRecursion(root->right);
	cout << root->data << " ";
}


vector<int> PostOrderUsing1Stack(TreeNode *root)
{
	vector<int> ans;

	TreeNode *curl = root;
	stack<TreeNode *>st;
	TreeNode *temp;

	while (curl != NULL || !st.empty())
	{
		if (curl != NULL)	// Go as left as you can
		{
			st.push(curl);
			curl = curl->left;
		}
		else
		{
			temp = st.top() -> right;	// Check if it has a right element or not
			if (temp == NULL)
			{
				// Main Code
				temp = st.top();
				ans.push_back(temp->data);
				st.pop();

				while (!st.empty() && st.top()->right == temp)  	// Check if it (right element has a root)
				{
					temp = st.top();
					ans.push_back(temp->data);
					st.pop();
				}

			}
			else
			{
				curl = temp;	// If it has a right element then go for it and after that same as left as yo can => Left == NULL => Check right if There is no right element Aboue code will be executed
			}
		}
	}


	return ans;
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

	PostOrderRecursion(root);
	cout << endl;

	vector<int> Post1stackVector = PostOrderUsing1Stack(root);

	for (auto it : Post1stackVector)
	{
		cout << it << " ";
	}

}


















