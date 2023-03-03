// https://www.codechef.com/LP1TO201/problems/CHFSPL
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int A, B, C;
    cin >> A >> B >> C;
    int total = A+B+C;
    cout << total - min(A, min(B, C)) <<  endl;
  }

  return 0;
}
