#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,t,tc;
int spasi,i,j;
string s,temp;
vector<string> ans;

char car(char c){
	if (c=='0') return 'o';
	else if (c=='1') return 'i';
	else if (c=='2') return 'z';
	else if (c=='3') return 'e';
	else if (c=='4') return 'a';
	else if (c=='5') return 's';
	else if (c=='6') return 'g';
	else if (c=='7') return 't';
	else if (c=='8') return 'b';
	else if (c=='9') return 'q';
}

string ubah(string ss){
	string res = "";
	for (i = 0 ; i < ss.size(); i++) {
		if (ss[i]>='0' && ss[i]<='9') res = res+car(ss[i]);
		else if (ss[i]>='a' && ss[i]<='z') res = res+ss[i];
		else if (ss[i]>='A' && ss[i]<='Z') res = res+char((int)ss[i]-'A'+'a');
	}
	return res;
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n ;
		getline(cin,s);getline(cin,s);
		reverse(s.begin(),s.end());
		i = 0;
		spasi = s.find(' ',i);
		cout << "Kasus #" << ++tc << ": ";
		while (spasi>=0 && spasi < s.size()) {
			temp = s.substr(i,spasi-i);
			reverse(temp.begin(),temp.end());
			//cout << temp << '\n';
			cout << ubah(temp) << " ";
			i = spasi+1;
			spasi = s.find(' ',spasi+1);
		}
		temp = s.substr(i,s.size()-i);
		reverse(temp.begin(),temp.end());
		//cout << temp << '\n';
		cout << ubah(temp) << '\n';
	}
	return 0;
}