// https://www.codechef.com/LP1TO201/problems/TWODISH
#include <bits/stdc++.h>
using namespace std;

// 3 2 2 2
bool possible(int N, int A, int B, int C) {
  if (A+C < N) return false;
  if (B < N) return false;

  return true;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int N, A, B, C;
    cin >> N >> A >> B >> C;
    bool res = possible(N, A, B, C);

    cout << (res ? "YES" : "NO") << endl;

  }
  return 0;
}
