#include <bits/stdc++.h>
using namespace std;
int q,n,i,j,c;
int idx,indeks;
int A[100000];
int sum[100000];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n; idx=1; indeks=1;
	for (i=1;i<=n;i++) {
		cin>>q; int temp1,temp2;
		if (q==1) {
			cin>>temp1;
			A[idx]=temp1; sum[indeks]+=sum[indeks-1]+A[idx];
			idx++; indeks++;
		}
		else if (q==2){
			cin>>temp1>>temp2;
			c=sum[temp2]-sum[temp1-1];
			
		}
	}
}
