#include <bits/stdc++.h>
using namespace std;

int main(){
	int tot=0,i;
	for (i=1;i<=30;i++) {
		if (i%2==0) {
			if ((i+1)%3==0) {
				if (((i%5==0) && ((i+1)%2==0)) || ((i%5!=0) && ((i+1)%2!=0))) {
					tot++;
					cout << i << endl;
				}
			}
		}
		else {
			if (((i%5==0) && ((i+1)%2==0)) || ((i%5!=0) && ((i+1)%2!=0))) {
					tot++;
					cout << i << endl;
			}
		}
	}
}