#include <bits/stdc++.h>
using namespace std;

int n,m,banyak;
int A[300];

bool cek(string s){
	int i; bool cek=true;
	for (i=0;i<s.length();i++){
		if (A[int(s[i])]==0) A[int(s[i])]++;
		else if (A[int(s[i])]>=1){
			cek=false;
			break;
		}
	}
	return cek;
}
string ubah(int p){
	stringstream ss;
	ss<<p;
	return ss.str();
}
void ngecek(int p,int q){
	int i;
	for (i=p;i<=q;i++){
		memset(A,0,sizeof(A));
		if (cek(ubah(i))) banyak++;
	}
}
int main(){
	cin>>n>>m;
	while (cin){
		banyak=0;
		ngecek(n,m);
		cout<<banyak<<endl;
		cin>>n>>m;
	}
	return 0;
}
