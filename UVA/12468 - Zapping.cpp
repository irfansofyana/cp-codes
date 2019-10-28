#include<bits/stdc++.h>
using namespace std;
int a,b;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (cin>>a>>b && (a!=-1 && b!=-1)){
		if (abs(a-b)>49) cout<<100-(abs(a-b))<<endl;
		else cout<<abs(a-b)<<endl;
	}
	return 0;
}
