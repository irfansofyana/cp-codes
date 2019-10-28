#include <bits/stdc++.h>
using namespace std;

int n,k,s,i;
int A[1005];

bool comp(int a,int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k >> s;
	for ( i = 0 ; i < n ; i++) cin >> A[i];
	int sum = 0;
	sort(A,A+n,comp);
	for ( i = 0 ; i < n && sum<k*s; i++) sum += A[i];
	cout << i << '\n';
	return 0;
}