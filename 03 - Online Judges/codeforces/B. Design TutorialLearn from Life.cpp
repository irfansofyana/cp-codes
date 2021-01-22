#include <bits/stdc++.h>
using namespace std;

int n,k,i,j,tot,banyak;
int A[2015];

bool comp(int p,int q){
	if (p>q) return true;
	else return false;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	
	cin>>n>>k;
	for (i=0;i<n;i++) cin>>A[i];
	sort(A,A+n,comp);
	i=0; banyak=n;
	while (i<n && banyak>0) {
		if (banyak>=k){
			for (j=i;j<k+i-1;j++){
				tot+=abs(A[j]-A[j+1]);
			}
			tot+=abs(A[i]-1)+abs(A[k+i-1]-1);
			banyak-=k;
			i+=k;
		}
		else if (banyak<k) {
			if (i==n-1) {
				tot+=abs(A[i]-1)+abs(A[i]-1);
			}
			else {
				for (j=i;j<n-1;j++){
					tot+=abs(A[j]-A[j+1]);
				}
				tot+=abs(A[i]-1)+abs(A[n-1]-1);
			}
			i=n;
			banyak=0;	
		}
	}
	cout<<tot<<endl; 
	return 0;
}
