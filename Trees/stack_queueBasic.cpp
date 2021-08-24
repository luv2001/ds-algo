#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	stack<int> q;
	q.push(3);
	q.push(2);
	q.push(19);
	q.push(6);
	cout << "stack" << endl;
	while (!q.empty())
	{
		cout << q.top() << endl;
		q.pop();
	}

	cout << endl << "Queue" << endl ;

	queue<int> q1;
	q1.push(3);
	q1.push(2);
	q1.push(19);
	q1.push(6);

	while (!q1.empty())
	{
		cout << q1.front() << endl;
		q1.pop();
	}
}