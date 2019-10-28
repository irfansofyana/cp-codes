#include <bits/stdc++.h>

using namespace std;
int A[4],i;
string s;
int banyak=0;
int main(){
	for (i=0;i<4;i++) cin>>A[i];
	cin>>s;
	banyak=0;
	for (i=0;i<s.length();i++) banyak+=A[int(s[i])-'0'-1];
	cout<<banyak<<endl;
}
