#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define pb push_back

using namespace std;
using ll = long long;


/*

6
3 1 1 1
100
5 10 100 1
01010
5 10 1 1
11111
5 1 10 1
11111
12 2 1 10
101110110101
2 100 1 10
00



*/

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, c0, c1, h;
		cin >> n >> c0 >> c1 >> h;

		string s;
		cin >> s;



		std::vector<int> v;


		rep(i, n)
		{
			if (s[i] == '1')
			{
				v.push_back(1);
			}
			else
			{
				v.push_back(0);
			}
		}

		int sum = 0;

		if (c0 == c1)
		{
			sum = (n * c0);
		}
		else {

			if (c0 > c1)
			{
				if ( (h + c1) <= c0 )
				{
					rep(i, n)
					{
						if (v[i] == 1)
						{
							sum = sum + c1;
						}
						else
						{
							sum = sum + (h + c1);
						}
					}
				}
				else
				{
					rep(i, n)
					{
						if (v[i] == 1)
						{
							sum = sum + c1;
						}
						else
						{
							sum = sum + (c0);
						}
					}
				}
			}
			else
			{


				if ( (h + c0) <= c1 )
				{



					rep(i, n)
					{
						if (v[i] == 0)
						{

							sum = sum + c0;


						}
						else
						{

							sum = sum + (h + c0);


						}
					}
				}
				else
				{
					rep(i, n)
					{
						if (v[i] == 1)
						{
							sum = sum + c0;
						}
						else
						{
							sum = sum + (c1);
						}
					}
				}
			}
		}




		cout << sum << endl;





	}

}






