#include <bits/stdc++.h>
using namespace std;

int k,n,i,j;
vector<string> arr;
string s;

void generate(int pos) {
	if (pos == n) {
		arr.push_back(s);
	}
	else {
		string tmp = s;
		s = tmp + '1';
		generate(pos+1);
		s = tmp + '2';
		generate(pos+1);
		s = tmp + '3';
		generate(pos+1);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		arr.clear();
		s = "";
		generate(0);
		sort(arr.begin(),arr.end());
		for (i = 0 ; i < arr.size(); i++){
			cout << arr[i] << '\n';
		}
		cout << '\n';
	}
	return 0;
}