#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,jawaban;
	int A[1000],min;
	bool p=true;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
	}
	min=A[0];
	for (i=1;i<n;i++){
		if (A[i]<min)
			min=A[i];
	}
	if (min==1)
		jawaban=n;
	else{
		for (i=min;i>=1;i--){
			if (min%i==0){
			p=true;
			j=0;
			while ((j<n) && (p)){
				if (A[j]!=min){
					if (A[j]%i!=0){
						p=false;
						break;
					}
					else
						j++;
				}
				else
					j++;
			}
			if (p==true){
				jawaban=i*n;
				break;
			}
		}
		}
	}
	cout<<jawaban<<endl;
}
