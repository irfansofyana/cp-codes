#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll idx,res;


int main(){
	string s = "DGIKNO";
	do {
		n++;
		if (s=="KODING") {
			cout << n << '\n'; 
			return 0;
		}
	}while (next_permutation(s.begin(),s.end()));
	return 0;
}