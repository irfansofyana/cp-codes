#include <bits/stdc++.h>
using namespace std;

string s;
int i;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	i=1;
	while (getline(cin,s) && s!="*"){
		cout<<"Case "<<i<<": "<<(s=="Hajj" ? "Hajj-e-Akbar":"Hajj-e-Asghar")<<endl;
		i++;
	}
	return 0;
}
