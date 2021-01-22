#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,hitung,idx;
	int A[1010];
	int i,putaran,banyak;
	
	cin>>n>>m>>x;
	for (i=1;i<=n;i++) A[i]=1;
	banyak=n;
	putaran=0;
	hitung=1;
	idx=1;
	while (putaran!=x && banyak!=1){
		if (idx>n){
			idx=1;
			if (A[idx]==1){
				if (hitung==m){
					A[idx]=0;
					idx++;
					hitung=1;
					putaran++;
					banyak--;
				}
				else{
					hitung++;
					idx++;
				}
			}
			else idx++;
		}
		else{
			if (A[idx]==1){
				if (hitung==m){
					A[idx]=0;
					idx++;
					hitung=1;
					putaran++;
					banyak--;
				}
				else{
					hitung++;
					idx++;
				}
			}
			else idx++;
		}
	}
	for (i=1;i<=n;i++){
		if (A[i]==1) cout<<i<<endl;
	}
}
