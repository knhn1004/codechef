// https://www.codechef.com/LP1TO201/problems/IMDB
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int N, X;
    cin >> N >> X;
    int S[N], R[N];
    int rating = INT_MIN;
    for (int i=0; i<N; i++) {
      cin >> S[i] >> R[i];
      if (S[i] <= X) {
        rating = max(rating ,R[i]);
      }
    }
    cout << rating << endl;
    
  }

  return 0;
}
