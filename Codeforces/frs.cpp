#include <bits/stdc++.h>

using namespace std;

int main(){
	for (int i = 0 ; i < (1<<6); i++) {
		int tot = 0;
		bool tanda[10];
		for (int j = 0 ; j < 6; j++) {
			if ((i&(1<<j)) > 0) {
				tanda[j] = true;
			}
			else tanda[j] = false;
		}
		tot = 1;
		int curr = 2;
		for (int j = 0 ; j < 6; j++) {
			if (tanda[j]) {
				tot += curr; 
			}
			else {
				tot -= curr;
			}
			curr++;
		}
		if (tot == 0) {
			for (int j = 0 ; j < 6; j++) {
				if (tanda[j]) cout << '+';
				else cout << '-';
			} cout << '\n';
		}
	}	
}