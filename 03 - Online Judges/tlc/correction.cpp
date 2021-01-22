#include <bits/stdc++.h>
using namespace std;

int k,n,i,j,mini;
string s[3005],piv;
string temp;
int idx;
bool ada = false;
int beda(string s,string l){
	int result = 0;
	for (int z=0;z<s.size();z++){
		result += abs((int)s[z]-(int)l[z]);
	}
	return result;
}
int main(){
	cin >> n;
	for (i=0;i<n;i++){
		cin >> s[i];
	}
	cin >> piv;
	for (i=1;i<=piv.size();i++){
		temp = piv.substr(0,i);
		mini = 1000000000;
		ada = false;
		for (j=0;j<n;j++){
			string smt;
			smt = s[j].substr(0,i);
			if (beda(smt,temp)==0) {
				cout << smt << endl;
				ada = true;
				break;
			}
			else if (beda(smt,temp)<mini) {
				mini = beda(smt,temp);
				idx = j;
			}
		}
		if (!ada) cout<<s[idx].substr(0,i)<<endl;
 	}
	return 0;
} 