
/* Author : Vamsi Kavala */
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
#include <cassert>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,n) FOR(i,0,n)
#define PB push_back
#define ITER(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)	
#define mod 1000000007
#define MAXN 100001
#define MAXK 6
#define MP make_pair
#define INF mod

typedef pair<int,int>   PI;
typedef vector<int> VI;
typedef long long int LL;

int p[MAXN];
int kp[MAXN][6];
void precompute()
{
	FOR(i,2,MAXN)
		if(p[i]==0)
			for(int j=i;j<MAXN;j+=i)
				p[j]++;
	FOR(i,2,MAXN)
		FOR(j,1,MAXK)
			kp[i][j]=kp[i-1][j]+(p[i]==j?1:0);
}
int main(){

	precompute();
	int t,a,b,k;
	scanf("%d",&t);
	assert(t>=1 && t<=10000);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&k);
		assert(a>=2 && a<MAXN);
		assert(b>=a && b<MAXN);
		assert(k>=1 && k<=MAXK);
		printf("%d\n",kp[b][k]-kp[a-1][k]);
	}
	return 0;
}
