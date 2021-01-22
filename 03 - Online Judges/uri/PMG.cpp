#include <bits/stdc++.h>

using namespace std;

int a,b,t;
char c;

int main(){
	cin >> t;
	while (t--) {
		cin >> a >> c >> b;
		if (a==b) cout<<b*a<<endl;
		else if (c>='A' && c<='Z') cout<<b-a<<endl;
		else if (c>='a' && c<='z') cout<<b+a<<endl;
	}
	return 0;
}
