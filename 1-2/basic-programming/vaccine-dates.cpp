// https://www.codechef.com/LP1TO201/problems/VDATES
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int D, L, R;
    cin >> D >> L >> R;

    if (D < L) {
      cout << "Too Early" << endl;
    } else if (D > R) {
      cout << "Too Late" << endl;
    } else {
      cout << "Take second dose now" << endl;
    }
  }

  return 0;
}
