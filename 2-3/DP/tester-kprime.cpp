#include <cassert>
#include <iostream>
using namespace std;

int P[100010];
int R[6][100010];
void pre() {
  for (int i = 0; i <= 1e5; i++)
    P[i] = 0;
  for (int i = 2; i <= 1e5; i++)
    if (P[i] == 0)
      for (int j = i; j <= 1e5; j += i)
        P[j]++;
  for (int t = 1; t <= 5; t++) {
    R[t][0] = R[t][1] = 0;
    for (int i = 2; i <= 1e5; i++) {
      R[t][i] = R[t][i - 1];
      if (P[i] == t)
        R[t][i]++;
    }
  }
}

#define ASSERT(A, p, q) assert(p <= A && q >= A)

int main() {
  pre();
  int T;
  cin >> T;
  ASSERT(T, 1, 10000);
  while (T--) {
    int A, B, K;
    cin >> A >> B >> K;
    ASSERT(A, 2, 1e5);
    ASSERT(B, A, 1e5);
    ASSERT(K, 1, 5);
    cout << R[K][B] - R[K][A - 1] << endl;
  }
  return 0;
}
