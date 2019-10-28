#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,i,j;
string s;
map<char,int> frek,A;

void isi(){
	char temp = 'A';
	//int idx = 2;
	for (i = 0 ; i < 26 ; i++) {
		if (i==18 || i==25) {
			frek[temp] = 4;
			A[temp] = (i/3)+1;
		}
		else if (i<=17){
			frek[temp] = ((i+1)%3==0?3:(i+1)%3);
			A[temp] = (i/3)+2;
		}
		else {
			frek[temp] = (i%3==0?3:i%3);
			if (i<=20) A[temp] = (i/3)+2;
			else if (i==21 || i==24) A[temp] = (i/3)+1;
			else if (i==22 || i==23) A[temp] = (i/3)+2;
		}
		temp = char((int)temp+1);
	}
}

int main(){
	OPTIMASI
	isi();
	cin >> 	t;
	int tc = 0;
	while (t--) {
		cin >> s;
		cout << "Case #" << ++tc << ": ";
		for (i = 0 ; i < s.size(); i++) {
			for (j = 0 ; j < frek[s[i]]; j++) {
				cout << A[s[i]];
			}
			cout << ((i==s.size()-1)?'\n':' ');
		}
	}
	return 0;
}