#include <bits/stdc++.h>
using namespace std;
struct paket{
	int p1,p2,p3;
	string nama;
};

int t,n,m,i,j,a,b,c;
paket A[100];
string s,temp;

bool comp(paket a,paket b){
	if (a.p3==b.p3){
		if (a.p2==b.p2) return (a.p1>b.p1);
		else return (a.p2>b.p2);
	}
	return a.p3>b.p3;
}
int main(){
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cin >> s;
		for (i=0;i<n;i++){
			cin >> temp >> a >> b >> c;
			A[i].nama = temp; A[i].p1 = a; A[i].p2 = b; A[i].p3 = c;
		}
		bool found=false;
		sort(A,A+n,comp);
		for (i=0;i<m;i++){
			if (A[i].nama==s) {
				found = true;
				cout<<"YA"<<endl;
				break;
			}
		}
		if (!found) cout<<"TIDAK"<<endl;
	}
}