#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string s;
int arr[5];

int tipe(string s){
	if (s == "MF") return 1;
	else if (s == "MM") return 2;
	else if (s == "FM") return 3;
	else if (s == "FF") return 4;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	getline(cin,s);
	while (n--){
		getline(cin,s);
		i = 0;
		memset(arr,0,sizeof arr);
		while (i < s.size()){
			while (i < s.size() && s[i] == ' ') i++;
			string res = "";
			if (i < s.size()) res = res + s[i];
			j = i+1;
			if (j < s.size() && s[j] != ' '){
				res = res + s[j];
				//cout << res << '\n';
				arr[tipe(res)]++;
			}
			i = j+1;
		}
		int jm,jf;
		jm = arr[1]*1 + arr[2]*2 + arr[3]*1;
		jf = arr[1]*1 + arr[3]*1 + arr[4]*2;
		if (jm != jf) cout << "NO LOOP\n";
		else {
			if (jm == 1) cout << "NO LOOP\n";
			else cout << "LOOP\n";
		}
	}
	return 0;
}