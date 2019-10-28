#include <bits/stdc++.h>
using namespace std;

struct paket{
	int panjang;
	string nama;
};

int n,i,j;
paket A[10005];
string temp;

bool comp(paket a,paket b) {
	if (a.panjang==b.panjang) return a.nama<b.nama;
	return a.panjang<b.panjang;
}
int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++){
		cin >> temp;
		A[i].nama = temp;
		A[i].panjang = temp.size(); 
	}
	sort(A,A+n,comp);
	for (i=0;i<n;i++)
		cout<<A[i].nama<<endl;
	return 0;
}
