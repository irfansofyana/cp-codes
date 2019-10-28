#include <bits/stdc++.h>
using namespace std;

int n,i,j,a=0;
char A[310][310];
bool cek;
char acuan1,acuan2;
int main(){
	cin.tie(0);
	cin>>n;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++) cin>>A[i][j];
	}
	cek=true;
	acuan1=A[0][0];
	acuan2=A[0][1];
	if (acuan2==acuan1) cek=false;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if ((i==j) || (i==n-1-j)){
				if (A[i][j]!=acuan1) cek=false;
			}
			else if (A[i][j]!=acuan2) cek=false;
		}
		if (!cek) break;
	}
	if (cek) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
