#include <bits/stdc++.h>
using namespace std;

int q,n,m,i,j;
char A[110][110];
string s;

bool cek_kanan(int x,int y,string k){
	int p,q,r=0;
	p = x; q = y;
	while (r!=k.length()){
		if (A[p][q]!=k[r] || (q>=m)) return false;
		else {q++; r++;}
	}
	return true;
}
bool cek_kiri(int x,int y,string k){
	int p,q,r=0;
	p = x; q = y;
	while (r!=k.length()){
		if (A[p][q]!=k[r] || (q<0)) return false;
		else {q--; r++;}
	}
	return true;
}
bool cek_atas(int x,int y,string k){
	int p,q,r=0;
	p = x; q = y;
	while (r!=k.length()){
		if (A[p][q]!=k[r] || (p<0)) return false;
		else {p--; r++;}
	}
	return true;
}
bool cek_bawah(int x,int y,string k){
int p,q,r=0;
	p = x; q = y;
	while (r!=k.length()){
		if (A[p][q]!=k[r] || (p>=n)) return false;
		else {p++; r++;}
	}
	return true;
}
bool cek_diagonal_KiAB(int x,int y,string k){
	int p,q,r=0;
	p = x; q = y;
	while (r!=k.length()){
		if (A[p][q]!=k[r] || (q<0 || q>=m) || (p>=n || p<0) ) return false;
		else {p++; q++; r++;}
	}
	return true;
}

bool cek_diagonal_KiBA(int x,int y,string k){
	int p,q,r=0;
	p = x; q = y;
	while (r!=k.length()){
		if (A[p][q]!=k[r] || (q<0 || q>=m) || (p>=n || p<0) ) return false;
		else {p--; q--; r++;}
	}
	return true;
}

bool cek_diagonal_KAB(int x,int y,string k){
	int p,q,r=0;
	p = x; q = y;
	while (r!=k.length()){
		if (A[p][q]!=k[r] || (q<0 || q>=m) || (p>=n || p<0) ) return false;
		else {p++; q--; r++;}
	}
	return true;
}


bool cek_diagonal_KBA(int x,int y,string k){
	int p,q,r=0;
	p = x; q = y;
	while (r!=k.length()){
		if (A[p][q]!=k[r] || (q<0 || q>=m) || (p>=n || p<0) ) return false;
		else {p--; q++; r++;}
	}
	return true;
}
int main(){
	cin >> n >> m;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	cin >> q;
	while (q--) {
		cin >> s;
		bool dapet=false;
		for (i=0;i<n;i++){
			for (j=0;j<m;j++){
				if (A[i][j]==s[0]) {
					if (cek_atas(i,j,s) || cek_bawah(i,j,s) || cek_kanan(i,j,s) || cek_kiri(i,j,s)){cout<<s<<" Y"<<endl; dapet=true;}
					else if (cek_diagonal_KAB(i,j,s) || cek_diagonal_KBA(i,j,s)) {cout<<s<<" Y"<<endl; dapet=true;}
					else if (cek_diagonal_KiAB(i,j,s) || cek_diagonal_KiBA(i,j,s)) {cout<<s<<" Y"<<endl;dapet=true;}
				}
				if (dapet) break;
			}
			if (dapet) break;
		}
		if (!dapet) cout<<s<<" T"<<endl;
	}
	return 0;
}