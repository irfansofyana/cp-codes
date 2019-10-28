#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int t,maks,ans;
int A[1050];


int jumlah(int a,int sum) {
	if (a==1) return sum;
	else {
		sum+=A[a-1];
		a/=2;
		return jumlah(a,sum);
	}
}

int main() {
	scanf("%d",&n);
	for (i=1;i<=(1<<(n+1))-2;i++)
		scanf("%d",&A[i]);
	
}
