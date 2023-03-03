// https://www.codechef.com/LP1TO201/problems/MXEVNSUB
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
    int sum = N*(N+1)/2;
    if (sum%2==1) {
      cout << N-1 <<  endl;
    } else{
      cout << N <<  endl;
    }
  }

  

  return 0;
}
