#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
int A[105];
int ans,x;

bool comp(int a,int b){
	return a>b;
}

int main(){
	OPTIMASI
	cin >> n >> x;
	for (i = 0 ; i < n-1 ; i++) cin >> A[i];
	sort(A,A+n-1,comp);
	i = 0;
	while (i < n-1) {
		if (A[i]<x) i++;
		else {
			int frek = 1;
			j = i+1;
			while (j < n-1 && A[j]==A[i]) {
				frek++;
				j++;
			}
			ans += frek*(((A[i]-x)/(frek+1))+1);
			x += frek*(((A[i]-x)/(frek+1))+1);
			i = j;
		}
	}
	cout << ans << '\n';
	return 0;
}