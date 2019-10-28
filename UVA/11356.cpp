#include <bits/stdc++.h>
#define OPTIMASI 
using namespace std;

int t,tc;
int month,date,year;
int n,i,j;
char dumm;
string tmp,ans2[]= {"January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December"};
int freq[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int bulan(string s){
	if (s == "January") return 1;
	if (s == "February") return 2;
	if (s == "March") return 3;
	if (s == "April") return 4;
	if (s == "May") return 5;
	if (s == "June") return 6;
	if (s == "July") return 7;
	if (s == "August") return 8;
	if (s == "September") return 9;
	if (s == "October") return 10;
	if (s == "November") return 11;
	if (s == "December") return 12;
}

bool leap(int x){
	return ((x%4 == 0 && x%100!=0) || (x%400==0));
}

int main(){
	#ifdef OPTIMASI
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#endif
	cin >> t;
	while (t--) {
		cin >> tmp;
		year = 1000*(tmp[0]-'0') + 100*(tmp[1]-'0') + 10*(tmp[2]-'0') + (tmp[3]-'0');
		int smt = tmp.find('-');
		smt = tmp.find('-',smt+1);
		month = bulan(tmp.substr(5,smt-5));
		date = 10*(tmp[(int)tmp.size()-2]-'0') + (tmp[(int)tmp.size()-1]-'0');
		//cout << date << " " << month << " " << year << '\n';
		cin >> n;
		while (n--) {
			date++;
			if (date > freq[month-1]) {
				if (date == 29) {
					if (!leap(year)) {
						date = 1;
						month++;
					} 
				}
				else {
					date = 1;
					month++;
					if (month > 12) {
						month = 1;
						year++;
					}
				}
			}
		}
		cout << "Case " << ++tc << ": " << year << '-' << ans2[month-1] << '-' ;
		if (date < 10) cout << '0' << date << '\n';
		else cout << date << '\n';
	}
	return 0;
}