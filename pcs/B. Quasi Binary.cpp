#include <bits/stdc++.h>
using namespace std;

string input;
int ans,i,j,temp;
string s[10000];

bool cek(string s){
	for (int z=0;z<s.size();z++) {
		if (s[z]!='0' || s[z]!='1') return false;
	}
	return true;
}
string result(string s){
	bool find=false;
	string ans="";
	for (int z=0;z<s.size();z++){
		if (s[z]!='0' && !find) {
			ans = ans+s[z];
			find = true;
		} 
		else if (s[z]=='0' && !find ) continue;
		else if (find) ans = ans+s[z];
	}
	return ans;
}
int main(){
	cin >> input;
	if (cek(input)) {
		cout<<1<<endl<<input<<endl;
	}
	else{
		int maks=0;
		for (i=0;i<input.size();i++) {
			if (input[i]-'0'>maks) maks = input[i]-'0';
		}
		for (i=0;i<maks;i++) s[i] = "";
		for (i=input.size()-1;i>=0;i--) {
			temp = input[i]-'0';
			int udah=0;
			for (j=0;j<maks;j++){
				if (udah!=temp) {
					s[j] = '1'+s[j];
					udah++;
				}
				else if (udah==temp) {
					s[j] = '0'+s[j];
				}
			}
		}
		cout<<maks<<endl;
		for (i=0;i<maks;i++){
			if (i==0) cout<<result(s[i]);
			else cout<<" "<<result(s[i]);
		}
		cout<<"\n";
	}
}