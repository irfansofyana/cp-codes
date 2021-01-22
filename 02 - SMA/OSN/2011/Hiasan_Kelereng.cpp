#include <bits/stdc++.h>
using namespace std;

int n,i,j,k,maks,smt,a,b,c,it;
string s,ans;
int warna[30];
int temp;

int main(){
	cin >> n >> s;
	for (i=0;i<s.size();i++)
		warna[s[i]-'A']++;  // warna nol mengembalikan 'A'
	for (i=0;i<26;i++) 
		if (warna[i]>0) temp++;
	if (temp<3) cout << -1 << endl;
	else {
		maks = -999999;
		for (i=0;i<26;i++)
			for (j=0;j<26;j++)
				for (k=0;k<26;k++) {
					if (i!=j && i!=k && j!=k && warna[i]>0 && warna[j]>0 && warna[k]>0) {
						ans="";
						smt = 3;
						it = 4;
						a = warna[i]-1; 
						b = warna[j]-1;
						c = warna[k]-1;
						while (it>0) {
							if (it%3==1) {
								a--;
								if (a<0) break;
							}
							else if (it%3==2) {
								b--;
								if (b<0) break;
							}
							else if (it%3==0) {
								c--;
								if (c<0) break;
							}
							smt++;
							it++;
						}
						if (smt>maks) maks = smt;
					}
				}
		cout << maks << endl;
	}	
}
