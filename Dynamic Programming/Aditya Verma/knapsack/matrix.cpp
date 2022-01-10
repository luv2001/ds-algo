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



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	std::vector<char> poly1;

	int length = s.length();
	// cout << length;

	int j;

	for (int i = 1 ; i < length ; i++)
	{
		if (s[i] == ')')
		{
			j = i;
			break;
		}
		poly1.push_back(s[i]);
	}

	for (auto it : poly1)
	{
		cout << it << " ";
	}

	vector<char> poly2;

	for (int i = j + 2 ; i < length - 1 ; i++)
	{
		poly2.push_back(s[i]);
	}

	cout << endl;

	for (auto it : poly2)
	{
		cout << it << " ";
	}


}


















