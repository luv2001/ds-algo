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

5

3 2 2
2 0
0 5

4 3 2
2 0 5
0 6

0 2 2
1 0
2 3

5 4 4
6 0 8 0
0 7 0 9

5 4 1
8 7 8 0
0

*/

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int k, m, n;

		cin >> k >> m >> n;
		std::vector<int> A;
		std::vector<int> B;

		rep(i, m)
		{
			int x;
			cin >> x;
			A.push_back(x);
		}

		rep(i, n)
		{
			int x;
			cin >> x;
			B.push_back(x);
		}

		int p1 = 0;
		int p2 = 0;

		std::vector<int> v_res;

		cout << A.size() << B.size() << endl << endl;

		while ( (p1 != A.size()) && (p2 != B.size())  )
		{
			if (A[p1] == 0 && p1 != A.size())
			{
				cout << "A[p1] , B[p2] ==" << A[p1] << " " << B[p2] << endl;
				cout << "Got A[p1]" << A[p1] << endl;
				v_res.push_back(A[p1]);
				cout << "k " << k << endl;
				k++;
				cout << "k " << k << endl;
				p1++;
			}
			else if (B[p2] == 0  && p2 != B.size())
			{
				cout << "A[p1] , B[p2] ==" << A[p1] << " " << B[p2] << endl;
				v_res.push_back(B[p2]);
				cout << "Got B[p1]" << B[p2] << endl;
				cout << "k " << k << endl;
				k++;
				cout << "k " << k << endl;
				p2++;
			}
			else
			{
				cout << "else shit" << endl;
				cout << "A[p1] , B[p2] ==" << A[p1] << " " << B[p2] << endl;
				if (A[p1] <= k)
				{

					cout << "Got A[p1]" << A[p1] << endl;
					v_res.push_back(A[p1]);
					p1++;
				}
				else if (B[p2] <= k)
				{
					cout << "Got B[p2]" << B[p2] << endl;

					v_res.push_back(B[p2]);
					p2++;
				}
				else
				{
					cout << "this shit run" << endl;
					continue;
				}


			}
		}


		cout << endl << "Loop ends ::: " << endl << endl;

		rep(i , v_res.size())
		{
			cout << v_res[i] << endl;
		}



	}
	return 0;
}










