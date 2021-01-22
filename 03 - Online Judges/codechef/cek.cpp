#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
string s;
char c;

vector<int> getclause(){
	char c;
	vector<int> cl;
	string line;
	getline(cin,line);
	istringstream iss(line);
	while (iss>>c) {
		cl.push_back(c);
	}
	return cl;
}

int main(){
	ans = getclause();
	cout << ans.size() << endl;
}
