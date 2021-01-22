#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,h;
	string s;
	
	cin>>n;
	cin>>s;
	h=0;
	for (i=0;i<=n-2;i++){
		if (s[i]==s[i+1])
			h++;
	}
	cout<<h<<endl;
}