#include<bits/stdc++.h>
using namespace std;
long long n,a,b,i,j;
long long bil,temp;
bool ans=0;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>a>>b;
	if (a*b>=6*n) {
		cout<<a*b<<endl;
		cout<<a<<" "<<b<<endl;
	}
	else if (a*b<6*n){
		bil=6*n;
		ans=true;
		while (ans){
			for (j=2;j<=static_cast<long long>(sqrt(bil));j++){
				if (bil%j==0){
					if (j>=a){
						temp=bil/j;
						if (temp>=b) {
							ans=false;
							break;
						}
					}
					else if (j>=b){
						temp=bil/j;
						if (temp>=a){
							ans=false;
							break;
						}
					}
				}
			}
			if (ans) bil+=;
		}
		cout<<bil<<endl;
		if (temp>=a) {
			cout<<temp<<" "<<j<<endl;
		}
		else cout<<j<<" "<<temp<<endl;
	}
}
