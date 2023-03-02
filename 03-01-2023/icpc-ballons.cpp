#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    int A[N];
    for (int i=0; i<N; i++) {
      cin >> A[i];
    }

    int res = N;
    for (int i=N-1; i>=0; i--) {
      if (A[i] > 7) {
        res--;
      } else {
        break;
      }
    }
    cout << res << endl;
  }

  return 0;
}
