#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // calculate each frog' maximum distance that it can reach to the right dp(n)
  // two frogs can only communicate if their max dist is the same

  int N, K, P;
  cin >> N >> K >> P;

  vector<pair<int, int>> A(N + 1); // value - old index
  // 1-based index

  for (int i = 1; i <= N; i++) {
    cin >> A[i].first; // value
    A[i].second = i;   // old index
  }
  sort(A.begin(), A.end());

  unordered_map<int, int> newIndex; // map old index to new index
  for (int i = 1; i <= N; i++) {
    newIndex[A[i].second] = i;
  }

  vector<int> dp(N + 1, 0); // for each frog, max steps it can move to the right

  /* for (int i = 2; i <= N; i++) {
    if (A[i].first - A[i - 1].first <= K) {
      dp[i] = dp[i - 1] + 1;
    }
  } */
  for (int i = 1; i < N; i++) {
    if (A[i + 1].first - A[i].first <= K) {
      dp[i + 1] = dp[i] + 1;
    }
  }

  while (P--) {
    int a, b;
    cin >> a >> b;
    if (a == b)
      cout << "Yes" << endl;
    else {
      int x = newIndex[a]; // left frog
      int y = newIndex[b]; // right frog
      if (x > y)
        swap(x, y);
      if (y - x > dp[y])
        cout << "No" << endl;
      else
        cout << "Yes" << endl;
    }
  }
  return 0;
}
