// https://www.codechef.com/LP1TO201/problems/CHFRICH
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int A, B, X;
    cin >> A >> B >> X;
    int res = (B-A)/X;
    if ((B-A)%X) res++;
    cout << res << endl;
  }

  

  return 0;
}
