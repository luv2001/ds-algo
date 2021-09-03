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

	// std::map<int, string> m;
	// m = { {2, "acdk"} , {3, "acd"} };
	// m[0] = "Oioi";						// O(log(n))
	// m.insert({1, "Ayushi"});

	// for (auto it = m.begin() ; it != m.end() ; it++)
	// {
	// 	cout << it->first << " " << it->second;
	// 	cout << endl;
	// }

	// for (auto &pr : m)			// & for origanal || auto pr :m crates copy.
	// {
	// 	if (pr.first == 1)
	// 	{
	// 		pr.second = "newCrush";
	// 	}
	// 	cout << pr.first << " " << pr.second << endl;
	// }


	// for (auto it = m.begin() ; it != m.end() ; it++)
	// {
	// 	cout << it->first << " " << it->second;
	// 	cout << endl;
	// }

	// cout << endl << endl ;

	// auto it = m.find(2);
	// if (it == m.end())
	// {
	// 	cout << "how you doin ?" << endl;
	// }
	// else
	// {
	// 	cout << it->first << it->second << endl;
	// }

	// cout << endl << endl;

	// m.erase(1);
	// // m.clear(); 				// Clear the map.
	// for (auto it = m.begin() ; it != m.end() ; it++)
	// {
	// 	cout << it->first << " " << it->second;
	// 	cout << endl;
	// }



//------------------------------------------------------------------//

// lexiographical Question

	// abc
	// def
	// abc
	// ghj
	// jkl
	// ghj
	// ghj
	// abc

	// unordered_map<int, int> m;

	// m[0] = 1;
	// m[3] = 9;
	// m[19] = 8;
	// m[1] = 74;

	// int t;
	// cin >> t;
	// while (t--)
	// {
	// 	string x;
	// 	cin >> x;
	// 	m[x]++;

	// }

	// for (auto it = m.begin() ; it != m.end() ; it++)
	// {
	// 	cout << it->first << " " << it->second;
	// 	cout << endl;
	// }


//------------------------------------------------------------------//

// twoSum

	unordered_map<int, int> m;



	int t;
	int sum;
	cin >> t;
	cin >> sum;
	rep(i, t)
	{
		int x;
		cin >> x;
		int targetNumber = sum - x;

		auto it = m.find(targetNumber);
		if (it != m.end())
		{
			cout << it->second << " " << i  << " ans " << endl;
		}
		else
		{
			m[x] = i;
		}
	}





}

































