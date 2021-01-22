#include <bits/stdc++.h>
using namespace std;

long long n,i;

string ubah(long long k){
	string ans="";
	while (k>0){
		ans=ans+char((k%10)+48);
		k/=10;
	}
	return ans;
}

string balik(string s){
	string ans="";
	for (int z=s.length()-1;z>=0;z--){
		ans=ans+s[z];
	}
	return ans;
}
int main(){
	scanf("%lld",&n);
	for (i=2;i<=static_cast<long long>(sqrt(n));i++){
		if (n%i==0){
			if (ubah(i)==balik(ubah(n/i))){
				cout<<i+(n/i)<<endl;
				break;
			}
		}
	}	
}
