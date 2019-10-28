#include <bits/stdc++.h>
using namespace std;

string s,ss;
int i,j;

bool comp(char a,char b){
	return (int)a>(int)b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> s , s!="#") {
		ss = s;
		sort(ss.begin(),ss.end(),comp);
		if (ss==s) cout << "No Successor\n";
		else {
			next_permutation(s.begin(),s.end());
			cout << s << '\n';
		}
	}
	return 0;
}