#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,a,b) for(ll i = a; i < b ; i ++)
#define fs first



bool solve_qu(string s) {
  ll n = s.length();
  char i = 'a';
  int ind = s.find(i);
  if (ind == -1)return false;


  ll left = ind - 1, right = ind + 1;
  while (left >= 0 || right < n) {
    if (left >= 0 && s[left] == i + 1)
      left--;
    else if (right < n && s[right] == i + 1)
      right++;
    else
      return false;
    i++;
  }
  return true;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  //honolulu

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    if (solve_qu(s))cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}