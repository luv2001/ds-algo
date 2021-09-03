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
3
4
4 3 2 5
4
3 3 2 2
5
1 2 3 5 4
*/

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		std::vector<pair<int, char>> v;
		rep(i, n)
		{
			int x;
			cin >> x;
			v.push_back({x, 'R'});
		}

		std::vector<pair<int, char>> v_res;


		std::vector<int> v_resIntegers;
		rep(i, n)
		{
			v_resIntegers.push_back(v[i].first);
		}

		sort(v_resIntegers.begin(), v_resIntegers.end());

		rep(i, n)
		{
			v_res.push_back( {v_resIntegers[i] , 'R'} );
		}

		std::vector<int> v_givenIntegers;
		rep(i, n)
		{
			v_givenIntegers.push_back(v[i].first);
		}





		// solving start


		int p_given_1 = 0;
		int p_gien_2 = 0;

		int p_res_1 = 0;

		while (p_given_1 != v.size())
		{
			if (v_givenIntegers[p_given_1] != v_resIntegers[p_res_1])
			{
				auto it = find(v_givenIntegers.begin(), v_givenIntegers.end() , v_resIntegers[p_res_1] );
				int index = it - v_givenIntegers.begin();

				if (index == v_givenIntegers.size())
				{
					break;
				}
				else
				{
					if ( ((index - p_given_1) % 2 == 0 ) && v[index].second == 'R')
					{
						cout << "success";
						swap()
					}
				}
			}
			else
			{

			}
		}

	}

}