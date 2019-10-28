#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int n,m,i,j;
vi jx,jy;

void generate(){
	for (i = 1 ; i<= 2000 ; i++) {
		for (j = 1 ; j <= 2000; j++){
			jx.push_back(i+j);
			jy.push_back(i+j);
		}
	}
	
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	return 0;
}