#include <bits/stdc++.h>
using namespace std;
int n,i,j;
long long bil,ans;
string temp;
string ubah(long long k){
	stringstream ss;
	ss<<k;
	return ss.str();
}
bool cek(string s){
	int depan=0,belakang=s.length()-1;
	bool jwb=true;
	while (depan<=belakang){
		if (s[depan]!=s[belakang]){
			jwb=false;
			break;
		}
		else {
			depan++; belakang--;
		}
	}
	return jwb;
}
string balik(string s){
	string jw="";
	for (int j=s.length()-1;j>=0;j--){
		jw=jw+s[j];
	}
	return jw;
}
long long ngubah(string k){
	stringstream ss(k);
	long long jwb;
	return ss>>jwb?jwb:0;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=1;i<=n;i++) {
		int w=0;
		cin>>bil;
		temp=ubah(bil);
		while (!cek(temp)){
			w++; 
			bil=bil+ngubah(balik(temp));
			temp=ubah(bil);
		}
		cout<<w<<" "<<temp<<endl;
	}
}
