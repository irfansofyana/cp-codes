#include <bits/stdc++.h>
using namespace std;

int n,t,i,j,spasi;
string s,temp,stemp;
map<string,string> mep;
vector<string> ans;

void isi(){
	mep[".-"] = "A"; mep["-.-"] = "K"; mep["..-"] = "U";
	mep["-..."] = "B"; mep[".-.."] = "L"; mep["...-"] = "V";
	mep["-.-."] = "C"; mep["--"] = "M"; mep[".--"] = "W";
	mep["-.."] = "D"; mep["-."] = "N"; mep["-..-"] = "X";
	mep["."] = "E"; mep["---"] = "O"; mep["-.--"] = "Y";
	mep["..-."] = "F"; mep[".--."] = "P"; mep["--.."] = "Z";
	mep["--."] = "G"; mep["--.-"] = "Q";
	mep["...."] = "H"; mep[".-."] = "R";
	mep[".."] = "I"; mep["..."] = "S";
	mep[".---"] = "J"; mep["-"] = "T";
	mep["-----"] = "0"; mep[".----"] = "1"; mep["..---"] = "2"; mep["...--"] = "3";
	mep["....-"] = "4"; mep["....."] = "5"; mep["-...."] = "6"; mep["--..."] = "7";
	mep["---.."] = "8"; mep["----."] = "9"; mep[".-.-.-"] = "."; mep["--..--"] = ",";
	mep["..--.."] = "?"; mep[".----."] = "'" ; mep["-.-.--"] = "!"; mep["-..-."] = "/";
    mep["-.--.-"] = ")"; mep[".-..."] = "&"; mep["---..."] = ":"; mep["-.--."] = "(";
	mep["-.-.-."] = ";"; mep["-...-"] = "="; mep[".-.-."] = "+"; mep["-....-"] = "-"; 
	mep["..--.-"] = "_"; mep[".-..-."] = "\""; mep[".--.-."] = "@";
}

int main(){
	cin.tie(0);
	cin >> n;
	getchar();
	isi();
	while (n--) {
		getline(cin,s);
		temp = ""; stemp = "";
		i = 0; spasi = 0; ans.clear();
		//cout << s << endl;
		while (i<s.size()) {
			if (s[i]=='.' || s[i]=='-') {
				temp = temp+s[i];
				i++;
			}
			else {
				stemp = stemp+mep[temp];
				temp = "";
				if (s[i+1]==' ') {
					spasi++;
					ans.push_back(stemp);
					stemp = "";
					i+=2;
				}
				else i++;
			}
		}
		stemp = stemp+mep[temp];
		ans.push_back(stemp);
		cout << "Message #" << ++t << endl;
		for (i = 0; i < ans.size(); i++) {
			if (i!=ans.size()-1) cout << ans[i] << " ";
			else cout << ans[i] << endl;
		}
		if (n!=0) cout << endl;
	}
	return 0;
}