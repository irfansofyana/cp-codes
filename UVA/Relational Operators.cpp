#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	long long n;
	cin>>n;
	while (n--){
	cin>>a>>b;
	if (a>b) cout<<'>'<<endl;
	else if (a<b) cout<<'<'<<endl;
	else cout<<'='<<endl;
	}	
	return 0;
}
