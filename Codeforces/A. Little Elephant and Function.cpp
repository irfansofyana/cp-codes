#include <bits/stdc++.h>
using namespace std;
void tukar(int p,int q){
	int temp;
	temp=p;
	p=q;
	q=temp;
}
int swap(int k){
	int A[10000];
	for (i=1;i<=10000;i++){
		A[i]=i;
	}
	if (k==2)
		return tukar(A[k],A[k-1]);
	else{
		return swap(k-1);
	}
}
int main(){
	int n;
	int A[10000];
	int i,j;
	
	cin>>n;
	for (i=1;i<=n;i++){
		A[i]=i;
	}
}
