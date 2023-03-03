// https://www.codechef.com/LP1TO201/problems/WEIGHTBL
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int w1, w2, x1, x2, M;
    cin >> w1 >> w2 >> x1 >> x2 >> M;
    /* double tmp = static_cast<double> (w2-w1)/M;
    if (tmp<x1 || tmp>x2) {
      cout << 0 <<  endl;
    } else {
      cout << 1 <<  endl;
    } */
    // don't use divide to avoid error
    int tmp = w2-w1;
    if (tmp < x1*M || tmp > x2*M) {
      cout << 0 <<  endl;
    } else {
      cout << 1 <<  endl;
    }

  }

  return 0;
}
