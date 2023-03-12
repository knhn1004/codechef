// https://www.codechef.com/LP2TO301/problems/MINPIZZAS?tab=statement
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int N, K;
    cin >> N >> K;
    // find (P*K)%N == 0, print P
    // TLE:
    /* for (int p = 1; p <= N; p++) {
      if (p * K % N == 0) {
        cout << p << endl;
        break;
      }
    } */

    // FIND P*K = LCM of N  and K
    // find LCM/K
    cout << lcm(N, K) / K << endl;
  }

  return 0;
}
