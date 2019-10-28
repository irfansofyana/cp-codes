#include <bits/stdc++.h>
using namespace std;

long long n,m,i,j,k,spasi1,spasi2;
long long coin[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
long long nways[30005];
double x;

void isi(){
	nways[0] = 1;
	for (i = 0 ; i < 11 ; i++) {
		j = coin[i];
		for (k = j ; k <= 30000; k++) {
			nways[k] += nways[k-j];
		}
	}
}

string ubah(long long k){
	stringstream ss;
	ss << k;
	return ss.str();
}
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cout << fixed << showpoint << setprecision(2);
	while (cin >> x) {
		if (x==0.00) {return 0;}
		if ((long long)x==0){
			spasi1 = 4;
		}
		else {
			s = ubah((long long)x);
			spasi1 = (int)s.size()+3;
		}
		n = (long long)(100*x+0.5);
	//	cout << n << '\n';
	//	n = (long long)(100*x);
	//	cout << n << '\n';
		s = ubah(nways[n]);
		spasi2 = (int)s.size();
		for (i = 0 ; i < 6-spasi1; i++) cout << " "; cout << x ;
		for (i = 0 ; i < 17-spasi2; i++) cout << " "; cout << nways[n] <<'\n'; 
 	}
	return 0;
}