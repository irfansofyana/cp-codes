#include <bits/stdc++.h>
using namespace std;
struct paket{
	char huruf;
	int banyak;
};

int n,i,j,m,sum,ans,awal;
string s,jawab;
paket A[27];
int temp[27];
bool hapus[27];

bool comp(paket a,paket b){
	return a.banyak<b.banyak;
}

int main(){
	cin.tie(0);
	cin >> s >> m;
	for (i=0;i<s.size();i++) {
		temp[s[i]-'a']++;
		if (temp[s[i]-'a']==1) awal++; 
	}
	for (i=0;i<26;i++) {
		A[i].banyak = temp[i];
		A[i].huruf = char('a'+i);
	}
	sort(A,A+26,comp);
	memset(hapus,false,sizeof hapus);
	i = 0;
	while (A[i].banyak==0 && i<26) i++;
	for (j=i;j<26 && sum<m;j++) {
		sum += A[j].banyak;
		hapus[A[j].huruf-'a'] = true;  
		ans ++;
		if (sum>m) {
			sum -= A[j].banyak;
			hapus[A[j].huruf-'a'] = false;
			ans--;
			break;
		}
	}
	cout << awal-ans << endl;
	jawab = "";
	for (i=0;i<s.size();i++) {
		if (!hapus[s[i]-'a']) jawab = jawab+s[i]; 
	}
	cout << jawab << endl;
	return 0;
}
