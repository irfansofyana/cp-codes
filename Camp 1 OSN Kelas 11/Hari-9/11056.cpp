#include <bits/stdc++.h>
using namespace std;
struct paket{
	int ms,sec,men;
	string nama,palsu;
};

int n,i,j,banyak;
int x,y,z;
string s,temp;
char c;
paket A[1005];

bool comp(paket a,paket b) {
	string temp1,temp2;
	if (a.men==b.men) {
		if (a.sec==b.sec) {
			if (a.ms==b.ms) {
				return a.palsu<b.palsu;
			}
			return a.ms<b.ms;
		}
		return a.sec<b.sec;
	}
	return a.men<b.men;
}

int main(){
	cin.tie(0);
	while (cin >> n) {
		for (i = 0 ; i < n ; i++) {
			cin >> s >> c >> x >> temp >> y >> temp >> z >> temp;
			A[i].nama = s; A[i].men = x; A[i].sec = y; A[i].ms = z;
			temp = "";
			for (j = 0 ; j < s.size() ; j++) {
				if (s[j]>='A' && s[j]<='Z') temp = temp+char((int)s[j]+32);
				else temp = temp+s[j];
			}
			A[i].palsu = temp;
		}
		/*for (i = 0 ; i < n ; i++) {
			cout << A[i].nama << " " << A[i].men << " " << A[i].sec << " " << A[i].ms << endl;
		}*/
		sort(A,A+n,comp);
		if (n%2==0) banyak = (n/2);
		else banyak = (n/2)+1;
		j = 0;
		for (i = 1 ; i <= banyak ; i++) {
			cout << "Row " << i << endl;
			for (z = 0 ; z < 2 ; z++) {
				if (j!=n) cout << A[j].nama << endl;
				j++;
			}
		}
		cout << endl;
	}
	return 0;
}