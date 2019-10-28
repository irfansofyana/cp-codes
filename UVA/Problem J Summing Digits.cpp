#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	long long n;
	while (cin>>n && n!=0){
		cout<<((n%9==0) ? 9:(n%9))<<endl;
	}
	return 0;
}
