#include <bits/stdc++.h>
using namespace std;

long long n,i,j,ans;
long long A[600];
long long sepuluh[15];
string temp;

string ubah(long long k){
	string res = "";
	while (k>0) {
		res = ((k%2==0)?'0':'1')+res;
		k/=2;
	}
	return res;
}

void isi(){
	sepuluh[0] = 1;
	for (i = 1; i<= 14 ; i++) 
		sepuluh[i] = 10*sepuluh[i-1];
}

int main(){
	cin.tie(0);
	isi();
	cin >> n;
	for (i = 1 ; i<= 512 ; i++) {
		A[i] = 0;
		temp = ubah(i);
		for (j = 0 ; j < temp.size() ; j++) 
			A[i] += (sepuluh[temp.size()-1-j])*(temp[j]-'0');
	}
	for (i = 1; i <= 512 ; i++) {
		if (A[i]<=n) ans++;
		else break;
	}
	cout << ans << endl;
	return 0;
}