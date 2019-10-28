#include <bits/stdc++.h>
using namespace std;
int n,i,j,k;
string jawaban="";

string ngubah(int p){
	stringstream ss;
	ss<<p;
	return ss.str();
}

string ubah_basis(int x,int y){
	string ans="";
	while (x>0) {
		ans=ngubah(x%y)+ans;
		x/=y;
	}
	return ans;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	cin>>k;
	for (int z=1;z<=k;z++){
		cin>>i;
		if (n==0) cout<<0<<endl;
		else {
			cout<<ubah_basis(n,i)<<endl;
		}
	}
	return 0;
}
