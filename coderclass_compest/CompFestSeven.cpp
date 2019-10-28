#include <bits/stdc++.h>
using namespace std;

int n,i;

int main(){
	scanf("%d", &n);
	for (i = 1 ; i <= n ; i++) {
		string tmp = "";
		if (i%3 == 0) tmp = tmp + "Comp";
		if (i%5 == 0) tmp = tmp + "Fest";
		if (i%7 == 0) tmp = tmp + "Seven";
		if (tmp == "") cout << i;
		else cout << tmp ;
		cout << (i == n ? '\n' : ' ');
	}
}
