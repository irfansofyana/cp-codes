#include <bits/stdc++.h>
using namespace std;

string s,ans;

string ubah(string k){
	string j="";
	for (int z=k.length()-1;z>=0;z--){
		j=j+k[z];
	}
	return j;
}
int main(){
	cin>>s;
	ans=ubah(s.substr(0,((s.length()-1)/2)+1))+ubah(s.substr(s.length()/2,s.length()-1-(s.length()/2)+1));
	cout<<ans<<endl;
}
