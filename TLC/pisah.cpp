#include <bits/stdc++.h>
using namespace std;
string s;
int titik;

int main(){
	cin.tie(0);
	cin>>s;
	titik=s.find('.');
	cout<<s.substr(0,titik)<<" "<<s.substr(titik+1,s.length()-1-(titik+1)+1);
	return 0;	 
}
