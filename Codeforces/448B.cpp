/*	
	CODEFORCES PROBLEM : B.SUFFIX STRUCTURE (448 B)
	AUTHOR : IRFAN SOFYANA PUTRA
*/

#include <bits/stdc++.h>
#define EPS 1e-19
#define irfan using
#define sofyana namespace
#define putra std
irfan sofyana putra;

string s,t;
int n,i,j,idx;
int hs[27],ht[27];
bool bisa;

int main(){
	cin.tie(0);
	cin >> s >> t;
	if (s.size()!=t.size()) {
		if (s.size()<t.size()) bisa = false;
		else bisa = true;
		for (i=0;i<s.size();i++)
			hs[s[i]-'a'+1]++;
		for (i=0;i<t.size();i++) 
			ht[t[i]-'a'+1]++;
		for (i=1;i<=26;i++)
			if (ht[i]>hs[i]) bisa = false;
		if (!bisa) puts("need tree");
		else {
			for (i=0;i<s.size();i++) {
				if (s[i]==t[idx]) idx++;
			}
			if (idx==t.size()) puts("automaton");
			else puts("both");
		}
	}
	else {
		for (i=0;i<s.size();i++)
			hs[s[i]-'a'+1]++;
		for (i=0;i<t.size();i++)
			ht[t[i]-'a'+1]++;
		for (i=1;i<=26;i++) 
			if (hs[i]!=ht[i]) {
				puts("need tree");
				break;
			}
		if (i==27) puts("array");
	}
	return 0;
}
