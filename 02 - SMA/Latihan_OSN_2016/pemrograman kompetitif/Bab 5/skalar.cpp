#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll A[10005],B[10005];

bool comp(ll a,ll b){
	return a > b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	for (i = 0 ; i < n ; i++) cin >> B[i];
	sort(A,A+n); sort(B,B+n,comp);
	for (i = 0 ; i < n ; i++) j += A[i]*B[i];
	cout << j << '\n';
	return 0;
}