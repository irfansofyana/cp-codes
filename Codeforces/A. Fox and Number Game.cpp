#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int A[1000];
	int maks1=0,maks2=1,jumlah=0,temp;
	int idx1,idx2;
	bool p=true;
	
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	
	while (maks1!=maks2){ 
		i=0;
		idx1=0;
		idx2=0;
		while (i<n){
			if (i==0){
				maks1=A[i];
				idx1=i;
				i++;
			}
			else{
					if (i==1){
						if (A[i]>=maks1){
							maks2=maks1;
							idx2=idx1;
							maks1=A[i];
							idx1=i;
						}
						else{
							maks2=A[i];
							idx2=i;
						}
						i++;
					}
					else{
						if (A[i]>=maks1){
							maks1=A[i];
							idx1=i;
						}
						else{
							if (A[i]>=maks2){
								maks2=A[i];
								idx2=i;
							}
						}
						i++;
					}
				}
		}
		A[idx1]=A[idx1]-A[idx2];
	}
	for (i=0;i<n;i++)
		jumlah=jumlah+A[i];
	cout<<jumlah+A[0]<<endl;
}
