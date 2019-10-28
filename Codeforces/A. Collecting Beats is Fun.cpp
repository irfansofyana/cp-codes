#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,j;
	char A[4][4];
	int B[10];
	bool p=true;
	
	memset(B,0,sizeof(B));
	cin>>k;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			cin>>A[i][j];
			if (int(A[i][j])>=48 && int(A[i][j])<=57)
				B[int(A[i][j])-48]++;
		}
	}
	i=1;
	while ((i<=9) && p){
		if (B[i]>2*k)
			p=false;
		else
		i++;
	}
	if (p)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
