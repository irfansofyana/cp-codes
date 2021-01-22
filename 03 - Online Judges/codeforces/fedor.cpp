#include <bits/stdc++.h>
using namespace std;
int n,m,k,i,j,ans;
int A[1010];
string fedor,temp,smt;
string binary(int k){
	string kl="";
	while (k>0){
		if (k%2==1) kl='1'+kl;
		else kl='0'+kl;
		k/=2;
	}
	return kl; 
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m>>k;
//	cout<<binary(1024)<<endl;
	for (i=0;i<m+1;i++){
		cin>>A[i];
	//	cout<<binary(A[i])<<endl;
	}
	fedor=binary(A[m]); 
	smt="";
	for (j=1;j<=20-fedor.length();j++) smt=smt+'0';
	fedor=smt+fedor;
	for (i=0;i<m;i++){
		temp=binary(A[i]);
		smt="";
		for (j=1;j<=20-temp.length();j++){
			smt=smt+'0';
		} int bd=0;
		temp=smt+temp;
		for (j=0;j<20;j++){
			if (temp[j]!=fedor[j]) bd++;
		}
		if (bd<=k) ans++;
	}
	cout<<ans<<endl;
}
