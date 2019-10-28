/* 
	TOKI TRAINING GATE : BAB 5D (TEBAK LAGU)
	AUTHOR : IRFAN SOFYANA PUTRA (cokguzel48)
*/

#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans;
string nada[]={"c.","c#","d.","d#","e.","f.","f#","g.","g#","a.","a#","b.","C.","C#","D.","D#","E.","F.","F#","G."
,"G#","A.","A#","B."};
string dengklek,coba,smt;
int perubahan[500];

int cari(string s){
	for (int z=0;z<24;z++) {
		if (nada[z]==s) return z+1;
	}
}

void temu(string s){
	int zz,idx,nilai;
	string temp;
	zz = idx = 0;
	while (zz<s.size()) {
		temp = "";
		for (int it=0;it<2;it++)
			temp = temp+s[zz+it];
		if (zz==0) nilai = cari(temp);
		else {
			perubahan[idx] = cari(temp)-nilai;
			nilai = cari(temp);
			idx++; 
		}
		zz+=2;
 	}
}

bool cek(string s){
	int zz,nilai,idx;
	string temp;
	zz = idx = 0;
	while (zz<s.size()) {
		temp = "";
		for (int it=0;it<2;it++) 
			temp =temp+s[zz+it];
		if (zz==0) nilai = cari(temp);
		else {
			if (perubahan[idx]!=cari(temp)-nilai) return false;
			nilai = cari(temp);
			idx++;
		} 
		zz+=2;
	}
	return true;
}
int main(){
	cin.tie(0);
	cin >> dengklek >> n;
	temu(dengklek);
	ans = -1000;
	for (i=1;i<=n;i++) {
		cin >> coba;
		j = dengklek.size()-1;
		while (j<coba.size()) {
			smt = coba.substr(j-(dengklek.size()-1),dengklek.size());
			if (cek(smt)) {
				ans = i;
				break;	
			}
			j+=2;		
		}
		if (ans!=-1000) {
			cout << ans << endl;
			break;
		}
	}
	if (i==n+1) cout<<'#'<<endl;
}
