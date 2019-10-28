#include <bits/stdc++.h>
using namespace std;

int main(){
	for (int i = 0; i < 13; i++){
		for (int j = 0; j < 13; j++){
			if (i == j) cout << 0 << " ";
			int t = rand()%100;
			if (t == 0) t = 1;
			if (i!=j) cout << t << " ";
		}cout << '\n';
	}
}