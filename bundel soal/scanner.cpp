#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
	getline(cin,s);
	if (s.find("ideafuse")>=0 && s.find("ideafuse")<s.length()) cout<<s.find("ideafuse")+1<<endl;
	else cout<<-1<<endl;
}
