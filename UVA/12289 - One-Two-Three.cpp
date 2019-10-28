#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	int n; string s;
	
	cin>>n;
	while (n--){
		cin>>s;
		if (s.length()==5) cout<<3<<endl;
		else {
			int i=0; 
			if (s.substr(1,2-1+1)=="ne") cout<<1<<endl;
			else if (s[0]=='o' && s[2]=='e') cout<<1<<endl;
			else if (s[0]=='o' && s[1]=='n') cout<<1<<endl;
			else cout<<2<<endl; 
		}
	}
	return 0;
}
