#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<int> &a) {
  int n = a.size();

  // valid subarrays ending at given index
  vector<ll> dp(n, 1);
  dp[0] = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] >= a[i - 1])
      dp[i] = dp[i - 1] + 1;
    else
      dp[i] = 1;
  }
  ll sum = 0;
  for (int x : dp) {
    sum += x;
  }
  cout << sum << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    solve(a);
  }
  return 0;
}
