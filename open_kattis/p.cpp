#include <bits/stdc++.h>
using namespace std;

int n,k;
int menang[105],kalah[105];
int p1,p2;
string s1,s2;
int i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int y=1;
	cin >> n >> k;
	while (1) {
		if (y==1) {y = 0;}
		else cout << '\n';
		memset(menang,0,sizeof menang); memset(kalah,0,sizeof kalah);
		for (i = 0; i < (k*(n)*(n-1))/2; i++){
			cin >> p1 >> s1 >> p2 >> s2;
			if (s1=="rock" && s2=="rock"){}
			else if (s1=="rock" && s2=="paper") {
				kalah[p1]++; menang[p2]++;
			}
			else if (s1=="rock" && s2=="scissors") {
				menang[p1]++; kalah[p2]++;
			}
			else if (s1=="paper" && s2=="rock") {
				menang[p1]++; kalah[p2]++;
			} 
			else if (s1=="paper" && s2=="paper") {}
			else if (s1=="paper" && s2=="scissors") {
				kalah[p1]++; menang[p2]++;
			}
			else if (s1=="scissors" && s2=="rock") {
				kalah[p1]++; menang[p2]++;
			}
			else if (s1=="scissors" && s2=="paper") {
				menang[p1]++; kalah[p2]++;
			}
			else {}
		}
		cout << fixed << showpoint;
		cout << setprecision(3);
		for (i = 1 ; i <= n ; i++) {
			if (menang[i]+kalah[i]>0) {
				cout << (double)(menang[i])/(menang[i]+kalah[i]);
			}
			else cout << '-';
			cout << '\n';
		}
		cin >> n ;
		if (n==0) return 0;
		cin >> k;
	}
	return 0;
}