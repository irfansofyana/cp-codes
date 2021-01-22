#include <bits/stdc++.h>
using namespace std;

int mini,maks,bil,n;
char hasil;
string s;

int main() {
	cin >> n;
	mini = -2000000000; maks = 2000000000;
	while (n--) {
		cin >> s >> bil >> hasil;
		if (hasil=='Y') {
			if (s==">" && bil>=mini) mini = bil+1;
			else if (s=="<" && bil<=maks) maks = bil-1;
			else if (s==">=" && bil>mini) mini = bil;
			else if (s=="<=" && bil<maks) maks = bil;
		} 
		else if (hasil=='N') {
			if (s==">" && bil<=maks) maks = bil;
			else if (s=="<" && bil>=mini) mini = bil;
			else if (s==">=" && bil<maks) maks = bil-1;
			else if (s=="<=" && bil>mini) mini = bil+1;
		}
	}
	if (maks<mini) puts("Impossible") ;
	else if (maks==mini) cout << mini << endl;
	else cout << mini+1 << endl;
}
