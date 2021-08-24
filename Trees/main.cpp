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

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	struct Node *root = new Node(1);
	root -> left = new Node(3);
	root -> left -> left = new Node(2);
	root -> right = new Node(5);

	while (root  != NULL)
	{
		cout << root->data << " ";
		root = root->left;
	}



}