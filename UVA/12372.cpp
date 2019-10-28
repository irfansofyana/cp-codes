#include <bits/stdc++.h>
using namespace std;
int n;

int main(){
	cin>>n;
	for (int i=1;i<=n;i++) {
		int x,y,z;
		cin>>x>>y>>z;
		if (x==y && y==z && x==20) cout<<"Case "<<i<<": good"<<endl;
		else cout<<"Case "<<i<<": bad"<<endl;
	}
	return 0;
}

