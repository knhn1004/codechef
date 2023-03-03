// https://www.codechef.com/LP1TO201/problems/MANYSUMS
#include <bits/stdc++.h>
#include <ios>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int t;
  cin >> t;
  while (t--) {
    int l, r;
    cin >> l >> r;
    int res = 2*r - 2*l + 1;
    cout << res <<  endl;
    
  }

  return 0;
}
