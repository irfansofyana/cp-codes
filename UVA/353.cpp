#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans,ukuran;
int huruf[60];
string s,temp;
map<string,int> mep;
string A[800000];

bool cek(string st){
	int depan,ujung;
	depan = 0; ujung = st.size()-1;
	while (depan<=ujung) {
		if (st[depan]!=st[ujung]) return false;
		depan++; ujung--;
	}
	return true;
}

int main(){
	//if (cek("ada")) puts("23");
	while (cin>>s) {
		memset(huruf,0,sizeof huruf);
		ukuran = ans = 0;
		//for (i = 0 ; i < 1000 ; i++) A[i] = "";
		//cout << s << endl;
		for (i = 0 ; i < s.size() ; i++) {
			if (s[i]>='a' && s[i]<='z') {
				if (huruf[s[i]-'a']==0) {
					huruf[s[i]-'a']++;
					ans++;
					//cout << s[i] << endl;
				}
			}
			else if (s[i]>='A' && s[i]<='Z') {
				if (huruf[s[i]-'A'+26]==0) {
					huruf[s[i]-'A'+26]++;
					ans++;
					//cout << s[i] << endl;
				}
			}
		}
		for (i = 1; i < s.size(); i++) {
			j = i;
			while (j<s.size()) {
				temp = s.substr(j-i,j-(j-i)+1);
 				//cout << temp << endl;
				if (mep[temp]==0 && cek(temp)) {
					mep[temp]++;
					A[ukuran] = temp;
					ukuran++;
					ans++;
				}
				j++;
			} 
		}
		for (i = 0 ; i < ukuran ; i++) {
			//cout << A[i] << endl;
			mep[A[i]] = 0;
		}
		cout << "The string " << "'" << s << "'"  << " contains " << ans << " palindromes." <<endl ;
	}
	return 0;
}