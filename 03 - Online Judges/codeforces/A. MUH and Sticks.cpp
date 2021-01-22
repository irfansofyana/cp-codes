#include <bits/stdc++.h>
using namespace std;
int A[100],p,q;
int i;
int temp,kaki;
bool ngecek=false;

int main(){
	memset(A,0,sizeof(A));
	for (i=0;i<6;i++){
		cin>>temp;
		A[temp]++;
	}
	for (i=1;i<=9;i++){
		if (A[i]>=4){
			kaki=i;
			ngecek=true;
		}
	}
	if (ngecek){
		if (A[kaki]==4){
			for (i=1;i<=9;i++){
				if (i!=kaki && A[i]==2){
					cout<<"Elephant"<<endl;
					ngecek=false;
				}
			}
			if (ngecek) cout<<"Bear"<<endl;
		}
		else if (A[kaki]>4){
			if (A[kaki]==5) cout<<"Bear"<<endl;
			else cout<<"Elephant"<<endl;
		}
	}
	else cout<<"Alien"<<endl;
}
