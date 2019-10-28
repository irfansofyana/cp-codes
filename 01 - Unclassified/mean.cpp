#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main(){
	cin.tie(0);
	cin>>a>>b;
	while ((a!=0) || (b!=0)){
	if (2*a-b<=2*b-a) cout<<2*a-b<<endl;
	else cout<<2*b-a<<endl;
	cin>>a>>b;
	}
	return 0;
}
