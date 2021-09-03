#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;


int kthLargest(int arr[], int k , int arrSize)
{

	priority_queue<int> minH;

	rep(i, arrSize)
	{
		minH.push(arr[i]);
		if (minH.size() > k)
		{
			minH.pop();
		}
	}

	return minH.top();
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[] = {7, 10, 4, 3, 20};
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	int k = 3;


	cout << kthLargest(arr, k , arrSize);




}