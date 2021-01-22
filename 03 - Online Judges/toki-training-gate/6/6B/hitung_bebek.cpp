#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define mod 1000000
#define INF 2e9
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;

int n,i,j;
int A[1000005];

int main(){
	_
	A[1] = 1; A[2] = 2;
	for (i = 3 ; i <= 1000000 ; i++) {
		A[i] = (A[i-1]%mod+A[i-2]%mod)%mod;
	}
	cin >> n;
	cout << A[n] << endl;
}
