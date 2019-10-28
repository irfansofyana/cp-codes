#include<bits/stdc++.h>
using namespace std;
string A,B;

int main(){
	for (int i=0;i<24;i++){
	cin>>A;
	cin>>B;
	if (A.find(B)>=0 && A.find(B)<A.length()) cout<<1<<endl;
	else cout<<0<<endl;
	}	
}
