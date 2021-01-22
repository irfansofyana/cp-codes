#include <bits/stdc++.h>
using namespace std;
int main(){
	int h,i;
	int A[1000];
	int keuntungan=0,maks,sebelumnya,idx;
	int k=1,j=1;
	
	cin>>h;
	for (i=0;i<h;i++)
		cin>>A[i];
	i=0;
	while (i<h-1){
		if (A[i]>2*A[i+1]){
			if (k==1){
				sebelumnya=i;
				
				
				k++;
				maks=A[i]-2*A[i+1];			
			}
			else{
				idx=i;
				if ((A[i]-2*A[i+1]>maks) && (idx-sebelumnya==1)){
					sebelumnya=i;
					maks=A[i]-2*A[i+1];
					keuntungan=keuntungan+A[i]-2*A[i+1];
				}
				else if ((A[i]-2*A[i+1]>maks) && (idx-sebelumnya!=1)){
					maks=A[i]-2*A[i+1];
					keuntungan=keuntungan+A[i]-2*A[i+1];
					sebelumnya=i;
				}
				else if ((A[i]-2*A[i+1]<maks))
					keuntungan=keuntungan+maks;
				else if ((A[i]-2*A[i+1]==maks))
			}
			i++;
		}
		else
			i++;
	}
	cout<<keuntungan<<endl;
}
