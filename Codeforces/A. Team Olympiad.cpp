#include <bits/stdc++.h>
using namespace std;
int min(int p,int q,int r){
	int min;
	if (p<q)
		min=p;
	else if (p>=q)
		min=q;
	
	if (r>=min)
		return min;
	else
		return r;
}
int main(){
	int banyak=0,n,i,j,x;
	int k,a=1,b=1,c=1;
	int A[4];
	int idx1[10000],idx2[10000],idx3[10000];
	
	memset(A,0,sizeof(A));
	cin>>n;
	for (i=0;i<n;i++){
		cin>>x;
		A[x]++;
		if (x==1){
			idx1[a]=i+1;
			a++;
		}
		else if (x==2){
			idx2[b]=i+1;
			b++;
		}
		else if (x==3){
			idx3[c]=i+1;
			c++;
		}
	}
	banyak=min(A[1],A[2],A[3]);
	if (banyak==0)
		cout<<0<<endl;
	else{
		cout<<banyak<<endl;
		for (i=1;i<=banyak;i++)
			cout<<idx1[i]<<" "<<idx2[i]<<" "<<idx3[i]<<endl;
	}
	return 0;
}
