#include <bits/stdc++.h>
using namespace std;
void tukar(int p,int q){
	int temp;
	temp=p;
	p=q;
	q=temp;
}
int main(){
	int n,k,i,j;
	int A[1000],idx[1000];
	bool p=true;
	cin>>n;
	memset(A,0,sizeof(A));
	for (i=0;i<n;i++)
		cin>>A[i];
	k=1;
	for (j=0;j<n-1;j++){
		if (A[j]==A[j+1]){
			idx[k]=j;
			k++;
		}
	}
	if (k==1)
		cout<<"YES"<<endl;
	else{
		j=1;
		while ((j<k) && p){
			if ((A[idx[j]]==A[idx[j]-1])&&(A[idx[j]]!=A[idx[j]+1])){
				tukar(A[idx[j]],A[idx[j]+1]);
				j++;
			}
			else if ((A[idx[j]]!=A[idx[j]-1]) && (A[idx[j]]==A[idx[j]+1])){
				tukar(A[idx[j]],A[idx[j]-1]);
				j++;
			}
			else if ((A[idx[j]]==A[idx[j]-1]) && (A[idx[j]]==A[idx[j]+1]))
				p=false;
		}
		if (p)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
