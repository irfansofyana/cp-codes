#include <bits/stdc++.h>

int n;

using namespace std;

int tot;
bool arr[10005];


int main(){
	int ans = 0;
	for (int i = 1; i<10000; i++) {
		int bil = i;
		bool ada = false;
		while (bil > 0){
			if (bil%10 == 1 || bil%10 == 7) ada = 1;
			bil /= 10;
		}
		if (ada) ans++;
	}
	cout << ans << '\n';
}