#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; int temp;
	int k;
	cin>>k; temp=k;
	while (getline( cin,s ) && (k>0)){
		if (k!=temp) cout<<s<<endl;
		k=k-1;
	}
	cout<<s<<endl;
}
