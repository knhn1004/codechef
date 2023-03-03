// https://www.codechef.com/LP1TO201/problems/MAX_DIFF?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  

  int t;
  cin >> t;
  while (t--) {
    int N, S;
    cin >> N >> S;

    // S: 1..N -> max diff: S
    if (S<=N) {
      cout << S << endl;
    }
    // S: 1..N+1 -> T2=N, T1=S-N -> diff = T2-T1 = N-(S-N) = 2N-S
    else {
      cout << 2*N-S << endl;
    }
  }

  return 0;
}
