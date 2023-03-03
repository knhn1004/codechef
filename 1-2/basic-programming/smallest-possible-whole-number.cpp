// https://www.codechef.com/LP1TO201/problems/SMOL
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
    if (K!=0) {
      cout << N%K <<  endl;
    } else {
      cout << N <<  endl;
    }
  }

  return 0;
}
