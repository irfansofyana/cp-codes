#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	int hasil;
	
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t;
	while (t--){
		cin>>n;
		hasil=(((((n*567)/9)+7492)*235)/47)-498;
		cout<<(abs(hasil)%100)/10<<endl;
	}
}
