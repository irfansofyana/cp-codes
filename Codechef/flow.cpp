#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,sum;
string day[7]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
bool kabisat(int x){
	if ((x%4==0 && (x%100!=0)) || (x%400==0)) return true;
	return false;
}

int main(){
	OPTIMASI
	int t;
	cin >> t;
	while (t--) {
	cin >> n; sum = 0;
	if (n<2001) {
		for (i = n ; i<=2000; i++) {
			if (kabisat(i))  sum += 366;
			else sum += 365;
		}
		sum %= 7; sum *= -1; 
		cout << day[(7+sum)%7] << '\n';
	}
	else if (n>2001){
		for (i = 2001; i <= n-1 ; i++) {
			if (kabisat(i)) sum += 366;
			else sum += 365;
		}
		cout << day[sum%7] << '\n';
	}
	else cout << day[0] << '\n';
	}
	return 0;
}