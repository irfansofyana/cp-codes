#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

typedef pair<int,int> pi;

int n,m,i,j;
int dd,mm,yy;
int tc;
string s;

string cari(int dd,int mm){
	if (mm==1) {
		if (dd >= 21) return "aquarius";
		else return "capricorn";
	} 
	else if (mm==2) {
		if (dd >= 20) return "pisces";
		else return "aquarius";
	}
	else if (mm==3) {
		if (dd >= 21) return "aries";
		else return "pisces";
	}
	else if (mm==4) {
		if (dd >= 21) return "taurus";
		else return "aries";
	}
	else if (mm==5) {
		if (dd >= 22) return "gemini";
		else return "taurus";
	}
	else if (mm==6) {
		if (dd >= 22) return "cancer";
		else return "gemini";
	}
	else if (mm==7) {
		if (dd >= 23) return "leo";
		else return "cancer";
	}
	else if (mm==8) {
		if (dd >= 22) return "virgo";
		else return "leo";
	}
	else if (mm==9) {
		if (dd >= 24) return "libra";
		else return "virgo";
	}
	else if (mm==10) {
		if (dd >= 24) return "scorpio";
		else return "libra";
	}
	else if (mm==11) {
		if (dd >= 23) return "sagittarius";
		else return "scorpio";
	}
	else {
		if (dd >= 23) return "capricorn";
		else return "sagittarius";
	}
}

bool cek(int x){
	if (x%100==0) return (x%400==0);
	return (x%4==0);
}

int hari(int x,int y){
	if (x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12) return 31;
	else if (x==2 && cek(y)) return 29;
	else if (x==2) return 28;
	else return 30;
}

void tulis(int x){
	if (x < 10) cout << '0' << x ;
	else cout << x ;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> s;
		mm = 10*((int)s[0]-'0') + (int)s[1]-'0';
		dd = 10*((int)s[2]-'0') + (int)s[3]-'0';
		yy = 1000*((int)s[4]-'0') + 100*((int)s[5]-'0') + 10*((int)s[6]-'0') + ((int)s[7]-'0');
		for (i = 0 ; i < 40*7; i++) {
			dd++;
			if (dd > hari(mm,yy)) {
				dd = 1;
				mm++;
				if (mm > 12) {
					mm = 1;
					yy++;
				}
			}
		}
		cout << ++tc << " ";
		tulis(mm); cout << "/"; tulis(dd); cout << "/" ; cout << yy << " " << cari(dd,mm) << '\n';
	}
	return 0;
}