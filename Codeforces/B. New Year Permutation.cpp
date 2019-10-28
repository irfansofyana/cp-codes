#include <bits/stdc++.h>
using namespace std;

int main(){
int n,i,j,idx1,idx2;
int P[310],jawab[310];
char A[310][310];
int banyak,minimal,temp;
bool ada=false;

	cin>>n;
	for (i=0;i<n;i++){
		cin>>P[i];
		jawab[i]=P[i];
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++) {
			cin>>A[i][j];
		}
	}
	for (i=0;i<n;i++){
		banyak=0;
		ada=false;
		for (j=0;j<n;j++){
			if (A[i][j]=='1' && (i!=j)){
				banyak++;
				if (P[i]>P[j] && banyak==1){
					idx1=i; idx2=j;
					minimal=P[j];
					ada=true;
				}
				else if (P[i]>P[j] && banyak>1){
					if (P[j]<minimal){
						idx1=i; idx2=j;
						minimal=P[j];
					}
					ada=true;
				} 
			}
		}
		if (ada){
		temp=jawab[idx1];
		jawab[idx1]=jawab[idx2];
		jawab[idx2]=temp;
		A[idx2][idx1]='0';
		}
	}
	for (i=0;i<n;i++){
		if (i!=n-1) cout<<jawab[i]<<" ";
		else cout<<jawab[i]<<endl;
	}
}
