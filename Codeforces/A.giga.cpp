#include <bits/stdc++.h>
using namespace std;

long long a;
long long b;

bool lucky(string s){
	int i;bool cek=false;
	for (i=0;i<s.length();i++){
		if (s[i]=='8'){
			cek=true;
			break;
		}
	}
	return cek;
}
string ubah(long long n){
	stringstream ss;
	ss<<n;
	return ss.str();
}
int main(){
	cin.tie(0);
	cin>>a;
	b=1;
	while (!lucky(ubah(a+b))){
		b++;
	}
	cout<<b<<endl;
}