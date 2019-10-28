/*ID : irfansofyana
PROG : beads
LANG : C++
*/

#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j,k,maks,temp,ans;
char depan,belakang;

int main() {
	//ofstream fout("beads.out");
	//ifstream fin("beads.in");
	
	//fin >> n;
	cin >> n >> s;
	maks = -1000000000;
	for (i=0;i<s.size();i++) {
		temp = 0;
		belakang = s[i];
		j = i;
		while (s[j]==belakang || s[j]=='W') {
			temp++;
			j--;
			if (j==-1) j = s.size()-1;
		}
		if (i==s.size()-1) {
			depan = s[0];
			j = 0;
		}
		else {
			depan = s[i+1];
			j = i+1;
		}
		while (s[j]==depan||s[j]=='W') {
			temp++;
			j++;
			if (j==s.size()) j = 0;
		}
		if (temp>maks) 
			maks = temp;
	}
	cout << maks << endl;
}
