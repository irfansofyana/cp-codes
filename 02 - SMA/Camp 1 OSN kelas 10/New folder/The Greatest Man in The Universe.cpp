#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int n,m,t,p,q,j,l,acuan,k,maks=0,banyak;
	int A[10000];
	
	cin>>t;
	for (int i=1;i<=t;i++){
		cin>>n>>p>>q;
		maks=0;
		for (j=0;j<n;j++)
			cin>>A[j];
		k=0;
		while (k<n){
			banyak=0;
			acuan=A[k];
				if (acuan>=p && acuan<=q){
					banyak++;
					l=k+acuan;
					while (l<n){
						if (A[l]>=p && A[l]<=q){
							banyak++;
							l=l+A[l];
							}
						else
							break;
					}
					if (banyak>maks)
						maks=banyak;
					k++;
				}
				else
					k++;	
		}
		cout<<"Case #"<<i<<": "<<maks<<endl;
	}
}
