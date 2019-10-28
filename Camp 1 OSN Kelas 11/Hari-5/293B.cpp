#include <bits/stdc++.h>
using namespace std;

string s,t;
int benar;
int i,j;
int A[70],B[70];

int main(){
	cin.tie(0);
	cin >> s >> t;
	for (i = 0 ; i < s.size() ; i++) {
		if (s[i]>='a' && s[i]<='z') A[s[i]-'a']++;
		else if (s[i]>='A' && s[i] <= 'Z') A[s[i]-'A'+26]++;
	}
	for (i = 0 ; i < t.size() ; i++) {
		if (t[i]>='a' && t[i]<='z') B[t[i]-'a']++;
		else if (t[i]>='A' && t[i]<='Z') B[t[i]-'A'+26]++;
	}
	for (i = 0 ; i <= 51 ; i++) {
		if (B[i]>=A[i]) benar+=A[i];
		else if (A[i]>B[i]) benar+=B[i];
	}
	cout << benar << " " << s.size()-benar << endl;
	return 0;
}