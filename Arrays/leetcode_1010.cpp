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

int numPairsDivisibleBy60(vector<int>& nums) {

	int count = 0;


	int pt1, pt2;
	pt1 = 0;
	pt2 = 1;
	int size = nums.size();

	while (pt1 != size)
	{
		if (pt1 == pt2)
		{
			pt2++;
		}
		else if (pt2 == size)
		{
			pt1++;
			pt2 = pt1 + 1;
		}
		else
		{
			if ((nums[pt1] + nums[pt2]) % 60 == 0 )
			{
				count++;
				pt2++;
			}
			else
			{
				pt2++;
			}
		}
	}




	return count;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	std::vector<int> nums = {30, 20, 150, 100, 40};

	cout << numPairsDivisibleBy60(nums);


}


















