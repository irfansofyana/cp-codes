#include <bits/stdc++.h>
using namespace std;
int n1,n2,k1,k2;

int main(){
	cin.tie(0);
	cin>>n1>>n2>>k1>>k2;
	if (n1<=n2) cout<<"Second"<<endl;
	else if (n1>n2) cout<<"First"<<endl;
	return 0;
}
