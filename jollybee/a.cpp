#include <bits/stdc++.h>
using namespace std;

int main(){
	int tot = 0;
	for (int i = 1 ; i<= 50 ; i++) {
		if (i%7==i/7) tot+=i;
	}
	cout << tot << '\n';
}