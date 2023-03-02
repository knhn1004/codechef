// https://www.codechef.com/problems/BROKPHON
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int N, res = 0;
    cin >> N;
    int arr[N];
    for (int i=0; i<N; i++) {
      cin >> arr[i];
    }

    if (arr[0] != arr[1]) res++;
    for (int i=1; i<N-1; i++) {
      if (arr[i] != arr[i-1] || arr[i] != arr[i+1]) res++;
    }
    if (arr[N-2] != arr[N-1]) res++;

    cout << res << endl;
  }

  return 0;
}
