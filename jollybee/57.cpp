#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
int sum;
int A[105];

bool comp(int a,int b){
	return a>b;
}

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0; i < n ; i++) {
		cin >> A[i];
		sum += A[i];
	}
	sort(A,A+n,comp);
	for (i = 0 ; i < n ; i+=2) j+=A[i];
	cout << j-(sum-j) << '\n';
	return 0;
}