#include <bits/stdc++.h>
using namespace std;
int n,i,j,bil,op;
string s,jawab;
char c;
int ubah(string s){
	int ans=0;
	for (int z=s.length()-1;z>=0;z--){
		ans+=(1<<(s.length()-1-z))*(int(s[z])-48);
	}
	return ans;
}

string bikin(int k){
	string ans="";
	while (k>0){
		if (k%2==1) ans='1'+ans;
		else ans='0'+ans;
		k/=2;
	}
	return ans;
}
int main(){
	cin>>n;
	while (n--){
		cin>>s;
		bil=ubah(s);
		cin>>op;
		for (i=0;i<op;i++){
			cin>>c;
			if (c=='3') {
				for (int z=0;z<8;z++){
					bil^=(1<<z);
				}
			}
			else if (c=='2'){
				bil=(bil<<1);
			}
			else if (c=='1'){
				bil=(bil>>1);
			}
		}
		cout<<bikin(bil)<<endl;
		if (bikin(bil).length()<8) {
			jawab=bikin(bil);
			for (int z=1;z<=8-bikin(bil).length();z++) jawab='0'+jawab;
			cout<<jawab<<endl; 
		}
		else cout<<bikin(bil)<<endl;
	}
}
