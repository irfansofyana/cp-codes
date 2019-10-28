#include <bits/stdc++.h>
using namespace std;
int n,i,j,idx1,idx2;
char A[310][310];
int P[310];
int banyak=0;
cek ada=false;

void tukar(int p,int q){
	int temp;
	temp=p; p=q; q=temp;
}

void input(){
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
}

void ngecek(){
	
	for (i=0;i<n;i++){
		banyak=0;
		for (j=0;j<n;j++){
			if (A[i][j]==1 && (i!=j)){
				if (i<j){
					if (P[i]>P[j]){
						idx1=i;
						idx2=j;
						if (i==0) min=P[j];
						else
					}
				}
			}
		}
	}
}
int main(){
	cin>>n;
	for (i=0;i<n;i++) cin>>P[i];
	input();
	
}
