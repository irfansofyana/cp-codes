#include <bits/stdc++.h>
using namespace std;
int t;
int a,b;
int idx;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0); 
	cin>>t; idx=1;
	while (t--){
		cin>>a;
		cin>>b; int ans=0;
		for (int i=a;i<=b;i++){
			if (i%2==1) ans+=i;
		}
		cout<<"Case "<<idx<<": "<<ans<<endl;
		idx++;
	}
	return 0;
}
