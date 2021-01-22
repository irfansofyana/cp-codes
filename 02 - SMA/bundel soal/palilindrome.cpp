#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j;
int besar[30],kecil[30];
deque<char> depan,belakang;
char add;
bool dapet=false;
int sz;

int main() {
	cin >> s;
	for (i=0;i<s.size();i++) {
		if (s[i]>='a' && s[i]<='z') kecil[s[i]-'a'+1]++;
		else besar[s[i]-'A'+1]++;
	}
	dapet = false;
	for (i=1;i<=26;i++) {
		for (j=0;j<(besar[i]/2);j++) {
			depan.push_back(char(i-1+'A'));
			belakang.push_front(char(i-1+'A'));
		}
		if (besar[i]%2==1 && !dapet) {
			add = char(i-1+'A');
			dapet = true;
		}
	}
	for (i=1;i<=26;i++) {
		for (j=0;j<(kecil[i]/2);j++){
			depan.push_back(char(i-1+'a'));
			belakang.push_front(char(i-1+'a'));
		}
		if (kecil[i]%2==1 && !dapet) {
			add = char(i-1+'a');
			dapet = true;
		}
	}
	while (!depan.empty()) {
		cout<<depan.front();
		depan.pop_front();
		sz++;
	}
	if (dapet) {
		cout<<add;
		sz++;
	}
	while (!belakang.empty()) {
		cout<<belakang.front();
		belakang.pop_front();
		sz++;
	}
	cout<<" "<<s.size()-sz<<endl;
	return 0;
}
