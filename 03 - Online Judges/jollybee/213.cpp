#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

double tempx,tempy,sisi[3];
pair<double,double> titik[3],masukan[3];
int i,j;

bool comp(pair<double,double> x,pair<double,double> y){
	if (x.first==y.first) return x.second<y.second;
	return x.first < y.first;
}

double sqr(double x){
	return x*x;
}

int main(){
	OPTIMASI
	for (i = 0 ; i < 3; i++) {
		double x,y;
		cin >> x >> y;
		tempx += x; tempy += y;
		masukan[i] = make_pair(x,y);
	}
	for (i = 0 ; i < 3 ; i++) {
		if (i==0) j = 2;
		else if (i==1) j = 1;
		else j = 0;
		titik[j] = make_pair(tempx-2*masukan[i].first,tempy-2*masukan[i].second);
	}
	sort(titik,titik+3,comp);
	for (i = 0 ; i < 3 ; i++) {
		if (i==0) {
			sisi[2] = sqr(titik[0].first-titik[1].first)+sqr(titik[0].second-titik[1].second);			
		}
		else if (i==1) {
			sisi[1] = sqr(titik[0].first-titik[2].first)+sqr(titik[0].second-titik[2].second);
		}
		else sisi[0] = sqr(titik[1].first-titik[2].first)+sqr(titik[1].second-titik[2].second);
	}
	sort(sisi,sisi+3);
	cout << fixed << showpoint;
	cout << setprecision(11);
	for (i = 0 ; i < 3 ; i++) {
		cout << titik[i].first << " " << titik[i].second << '\n';
		//cout << sisi[i] << '\n';
	}
	if ((sisi[0])+(sisi[1])==(sisi[2])) cout << "Right" ;
	else if ((sisi[0])+(sisi[1])<(sisi[2])) cout << "Obtuse";
	else cout << "Acute" ;
	cout << '\n';
	return 0;
}