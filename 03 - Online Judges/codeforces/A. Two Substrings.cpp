#include <bits/stdc++.h>
using namespace std;

string s,temp;
int n,i,j,ida,idb;
int AB[100005],BA[100005];

int main(){
	cin >> s;
	i = 0;
	while (i<s.size()-1) {
		temp = "";
		for (int z=0;z<2;z++) 
			temp = temp+s[i+z];
		if (temp=="AB") {
			AB[ida] = i;
			ida++;
		}
		i++;
	}
	i = 0;
	while (i<s.size()-1) {
		temp = "";
		for (int z=0;z<2;z++) 
			temp = temp+s[i+z];
		if (temp=="BA") {
			BA[idb] = i;
			idb++;
		}
		i++;
	}
	bool cek=false;
	for (i=0;i<ida;i++){
		for (j=0;j<idb;j++) {
			if (abs(AB[i]-BA[j])>=2) {
				cek = true;
				break;
			}
		}
		if (cek) break;
	}
	cout << (cek==true?"YES":"NO") << endl;
	return 0;
}
