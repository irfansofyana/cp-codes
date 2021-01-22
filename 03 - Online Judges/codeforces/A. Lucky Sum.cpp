#include <bits/stdc++.h>
using namespace std;

bool ceklucky(long long bil){
	bool p=true;
	string s;
	ostringstream convert;
	convert<<bil;
	s=convert.str();
	for (long long i=0;i<s.length();i++){
		if (s[i]!='4' && s[i]!='7'){
			p=false;
			break;
		}
	}
	return p;
}
long long mencari(long long b){
	for (long long i=b;i<=b+100000;i++){
		if (ceklucky(i)){
			return i;
			break;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	long long i,l,r;
	long long jumlah=0;
	cin>>l>>r;
	for (i=l;i<=r;i++){
		jumlah+=mencari(i);
	}
	cout<<jumlah<<endl;
}
