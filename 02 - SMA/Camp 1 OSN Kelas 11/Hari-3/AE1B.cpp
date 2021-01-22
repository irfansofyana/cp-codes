#include <bits/stdc++.h>
using namespace std;

int n,i,j,k,s;
int A[1005];
int sum;

bool comp(int a,int b){
	return a>b;
}

int main(){
	scanf("%d %d %d", &n, &k, &s);
	for (i = 0 ; i < n ; i++) {
		scanf("%d", &A[i]);
	}
	sort(A,A+n,comp);
	for (i = 0 ; i < n && sum<k*s ; i++) {
		sum += A[i];
	}
	printf("%d\n", i);
	return 0;
}