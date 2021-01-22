#include <bits/stdc++.h>
using namespace std;
int loba(string s){
	int j=0;
	for (int i=0;i<s.length();i++){
		if (s[i]=='2') j++;
	}
	return j;
}
int main(){
	int i;
	int banyak=0;
	string temp;
	
	for (i=1;i<=250;i++){
		stringstream ss;
		ss<<i;
		temp=ss.str();
		banyak+=loba(temp);
	}
	cout<<banyak<<endl;
}
