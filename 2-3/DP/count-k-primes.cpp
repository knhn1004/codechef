#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int limit = 1e5;
vector<vector<int>> ans(6, vector<int>(limit, 0));

void solve() {
  vector<int> primeFactors(limit, 0);
  for (int i = 2; i < limit; i++) {
    if (primeFactors[i] == 0) {
      for (int j = i; j < limit; j += i) {
        primeFactors[j]++;
      }
    }
  }

  for (int i = 0; i < limit; i++) {
    if (primeFactors[i] < 6) {
      ans[primeFactors[i]][i]++;
    }
  }

  // prefix sum
  for (int i = 0; i < 6; i++) {
    for (int j = 1; j < limit; j++) {
      ans[i][j] += ans[i][j - 1];
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solve();
  int t;
  cin >> t;
  while (t--) {
    int A, B, K;
    cin >> A >> B >> K;
    cout << ans[K][B] - ans[K][A - 1] << endl;
  }

  return 0;
}
