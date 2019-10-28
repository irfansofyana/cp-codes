#include <bits/stdc++.h>
using namespace std;

long long int n,m,i,j,x,ans,a,b;
string s,temp;
char op;
vector<char> operasi;
vector<long long int> bil;

long long int ubah(string s){
	stringstream ss(s);
	long long int result;
	return ss>>result?result:0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	getline(cin,s);
	while (t--) {
		getline(cin,s);
		getline(cin,s);
		ans = 1; temp = ""; operasi.clear(); bil.clear();
		i = 0;
		while (i<s.size()){
			if (s[i]>='0' && s[i]<='9') temp = temp+s[i];
			else if (s[i]==' ') {
				if (temp!="") bil.push_back(ubah(temp)); temp = ""; 
			}
			else if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
				operasi.push_back(s[i]);
			}
			i++;
		}
		if (temp!="")bil.push_back(ubah(temp));
		ans = bil[0];
		for (i = 0 ; i < operasi.size(); i++) {
			if (operasi[i]=='+') ans += bil[i+1];
			else if (operasi[i]=='-') ans -= bil[i+1];
			else if (operasi[i]=='*') ans *= bil[i+1];
			else ans /= bil[i+1];
		}
		cout << ans << '\n';
	}
	return 0;
}