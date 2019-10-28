#include <bits/stdc++.h>
using namespace std;

string s;
int i,j,bil;

int main() {
	cin>>s;
	for (i=s.size()-1;i>=0;i--) {
		bil = int(s[i])-48;
		if (bil<5) cout<<"O-|";
		else {
			cout<<"-O|";
			bil-=5;
		}
		for (int z=1;z<=bil;z++) cout<<'O';
		cout<<'-'; for (int z=1;z<=4-bil;z++) cout<<'O';
		cout<<endl;
	}
	return 0;
}
