// https://www.codechef.com/problems/STUDVOTE
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int N, K;
    cin >> N >> K;
    int arr[N];
    vector<int> votes(N, 0);
    int res = 0;
    
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
      votes[arr[i]-1]++;
      if (arr[i] == i+1) votes[i] = INT_MIN;
    }
    for (int i=0; i<N; i++) {
      if (votes[i] >= K) res++;
    }

    cout << res << endl;
  }

  return 0;
}
