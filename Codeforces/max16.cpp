#include <bits/stdc++.h>
using namespace std;

int banyak,i,j,nilai;
string s;

string konvert(int p){
	stringstream ss;
	ss<<p;
	return ss.str();
}
int main(){
	cin.tie(0);
	for (i=100;i<=999;i++){
		s=konvert(i); nilai=0;	
		for (j=0;j<s.length();j++){
			nilai+=int(s[j])-48;
		}	
		if (nilai<=16) banyak++;
	}
	cout<<banyak<<endl;
}
