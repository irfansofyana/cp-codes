#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
int n;
getline(cin,s);
while (s!="\n"){
	//getline(cin,s);
	cin>>n;
	cout<<s<<" "<<n<<endl;
	cin.ignore();
	getline(cin,s);
}
}