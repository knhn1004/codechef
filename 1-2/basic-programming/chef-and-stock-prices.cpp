// https://www.codechef.com/LP1TO201/problems/CSTOCK
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    double S, A, B, C;
    cin >> S >> A >> B >> C;
    double res = S*(1+C/100);
    if (res < A || res > B) {
      cout << "No" <<  endl;
    } else {
      cout << "Yes" <<  endl;
    }
  }

  return 0;
}
