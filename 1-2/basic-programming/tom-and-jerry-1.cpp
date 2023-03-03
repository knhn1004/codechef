// https://www.codechef.com/LP1TO201/problems/TANDJ1
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d, K;
    cin >> a >> b >> c >> d >> K;

    int tmp = abs(c-a) + abs(d-b);
    bool res;
    if (K >= tmp) {
      res = (K-tmp) %2 == 0;
    } else {
      res = false;
    }
    cout << (res ? "YES" : "NO") <<  endl;
  }

  return 0;
}
