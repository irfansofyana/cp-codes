#include <bits/stdc++.h>
using namespace std;

struct paket{
	int p,ma,bo,be;
	string ngaran;
};

int n,i,j,a,b;
paket A[55];
map<string,int> poin,masuk,bobol;
string nama[55],s,na,nb;

bool comp(paket a,paket b){
	if (a.p==b.p) {
		if (a.be==b.be) {
			return a.ma>b.ma;
		}
		return a.be>b.be;
	}
	return a.p>b.p;
}
int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++) 
		cin >> nama[i];
	for (i=0;i<(n*(n-1))/2;i++) {
		char ch;
		cin >> s >> a >> ch >> b;
		na = s.substr(0,s.find('-'));
		nb = s.substr(s.find('-')+1,s.size()-s.find('-')-1);
		//cout << na << " " << nb << endl;
		if (a>b) poin[na]+=3;
		else if (a==b) {
			poin[na]+=1;
			poin[nb]+=1;
		}
		else if (a<b) poin[nb]+=3;
		masuk[na]+=a;
		bobol[na]+=b;
		masuk[nb]+=b;
		bobol[nb]+=a;
 	}
 	/*for (i=0;i<n;i++) {
 		cout <<	nama[i]<< " " << poin[nama[i]] << " " << masuk[nama[i]] << " " << bobol[nama[i]] << endl; 
 	}*/
 	for (i=0;i<n;i++) {
 		A[i].ngaran = nama[i];
		A[i].p = poin[nama[i]];
		A[i].ma = masuk[nama[i]];
		A[i].bo = bobol[nama[i]];
		A[i].be = masuk[nama[i]]-bobol[nama[i]]; 
 	}
 	sort(A,A+n,comp);
 	for (i=0;i<(n/2);i++) {
 		nama[i] = A[i].ngaran;
 	}
 	sort(nama,nama+(n/2));
 	for (i=0;i<(n/2);i++)
 		cout << nama[i] << endl;
}
