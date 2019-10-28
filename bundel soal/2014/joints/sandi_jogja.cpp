#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[10][10];
string s,temp;

int ubah(int x){
	while (x>10){
		x = (x/10)*(x%10);
	}
	return x;
}

void isi(){
	for (int z=0;z<10;z++){
		for (int zz=0;zz<10;zz++)
			A[z][zz] = ubah(z*zz); 
	}
}

int main(){
	cin.tie(0);
	isi();
	cin >> s;
	while (s.size()!=1) {
		temp = "";
		for (i=0;i<s.size()-1;i++) {
			int kali = A[s[i]-'0'][s[i+1]-'0'];
			temp = temp+char(kali+'0');
		}
		s = temp;
	}
	cout << s << endl;
}
