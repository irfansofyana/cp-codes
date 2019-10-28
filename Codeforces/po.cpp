#include <bits/stdc++.h>
using namespace std;

int a, b;

int main(){
	for (int i = 1; i <= 5000; i++){
		for (int j = 1; j <= 5000; j++){
			int b1 = -1*(3*i - 4*j);
			int b2 = (3*i-4*j)*(3*i-4*j) - 12*i*j;
			if (b2 < 0) continue;
			int b3 = (int)sqrt(b2);
			if (b3*b3 == b2){
				if (((b1 + b3) > 0 || (b1-b3) > 0) && (b1%2 == b3%2)){
					cout << "b = " << i << '\n';
					cout << "c = " << j << '\n';
					cout << "a = " << (b1+b3)/2;
					cout << '\n';
					break;
				}
			}
		}
	}
}