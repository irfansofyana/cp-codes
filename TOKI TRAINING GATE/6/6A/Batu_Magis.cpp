#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[100005];
int ans,sisa;

bool comp(int a,int b){
	return a>b;
}

int main(){
	scanf("%d", &n);
	for (i=0;i<n;i++) 
		scanf("%d", &A[i]);
	sort(A,A+n,comp);
	sisa = n;
	for (i=0;i<n && sisa>0;i++)  {	//algoritma greedy mulai berjalan disini
		ans++;
		sisa-=(A[i]+1);
	}
	printf("%d\n", ans);
	return 0;
}
