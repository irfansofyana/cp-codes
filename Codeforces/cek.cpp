#include <bits/stdc++.h>
using namespace std;

string s1,s2;
int n,i,j;
map<string,int> mep;

int cek(int x,int y){
	if (x==1 || y==2) return 2;
	else if (x==2 || y==1) return 2;
	else if (x==2 || y==2) return 2;
	return 1;
}

int jelajah(string s) {
	string temp1,temp2;
	if (s.size()==s1.size()) {
		if (s==s1) return 2;
		return 1;
	}
	else if (mep[s]!=0) return mep[s];
	else {
		if (s[0]=='a' && s[s.size()-1]=='a') {
			temp1 = s;
			temp1.erase(temp1.size()-1,1);
			mep[s] = jelajah(temp1);
		}
		if (s[0]=='b' && s[s.size()-1]=='a') {
			temp1 = s; temp2 = s;
			temp1.erase(temp1.size()-1,1);
			reverse(temp2.begin(),temp2.end());
			temp2.erase(temp2.size()-1,1);
			mep[s] = cek(jelajah(temp1),jelajah(temp2));
		}
		if (s[0]=='b' && s[s.size()-1]=='b') {
			temp1 = s;
			reverse(temp1.begin(),temp1.end());
			temp1.erase(temp1.size()-1,1);
			mep[s] = jelajah(temp1);
		}
		return mep[s];
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s1 >> s2;
	if (jelajah(s2)==2) cout << "yes" << '\n';
	else cout << "no" << '\n';
	return 0;
}