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




*/

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	std::vector<int> v = {1, 2, 4, 5, 23, 2, 2, 0, 9};

	cout << v.size() << endl;

	auto it = find(v.begin(), v.end(), 9);

	cout << it - v.begin();
}