#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;
char ch;

int main(){
	cin >> a >> ch >> b;
	cin >> c >> ch >> d;
	if (a>=c && b>=d) {
		if (a-c<10) cout<<'0'<<a-c<<':';
		else cout<<a-c<<':';
		if (b-d<10) cout<<'0'<<b-d<<endl;
		else cout<<b-d<<endl;
	}
	else if (a>=c) {
		a-=1; b+=60;
		if (a<c) a+=24;
		if (a-c<10) cout<<'0'<<a-c<<':';
		else cout<<a-c<<':';
		if (b-d<10) cout<<'0'<<b-d<<endl;
		else cout<<b-d<<endl;
	}
	else if (b>=d) {
		a+=24;
		if (a-c<10) cout<<'0'<<a-c<<':';
		else cout<<a-c<<':';
		if (b-d<10) cout<<'0'<<b-d<<endl;
		else cout<<b-d<<endl;
	}
	else {
		b+=60; a+=23;
		if (a-c<10) cout<<'0'<<a-c<<':';
		else cout<<a-c<<':';
		if (b-d<10) cout<<'0'<<b-d<<endl;
		else cout<<b-d<<endl;
	}
	return 0; 
}
