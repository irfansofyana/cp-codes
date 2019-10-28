#include <bits/stdc++.h>
using namespace std;

const int MAXX = (int)1e6;

int n,i,j,k,bil,tc;
int team[MAXX + 5];
int sudah[MAXX + 5];
bool pernah[MAXX + 5];
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		if (n == 0) return 0;
		queue<int> already[10005];
		queue<int> gabungan;
		memset(sudah,0,sizeof sudah);
		memset(pernah,false,sizeof pernah);
		for (i = 1 ; i <= n ; i++) {
			cin >> k;
			while (k--) {
				cin >> j;
				team[j] = i;
			}
		}
		cout << "Scenario #" << ++tc << '\n';
		while (cin >> s) {
			if (s == "STOP") break;
			else if (s == "ENQUEUE") { 
				cin >> bil;
				already[team[bil]].push(bil);
				if (!pernah[team[bil]]) {
					gabungan.push(team[bil]);
					pernah[team[bil]] = true;
				}
				sudah[team[bil]]++;
			}
			else if (s == "DEQUEUE") {
				if (!gabungan.empty()){
					int x = gabungan.front();
					if (sudah[x] > 0){
						cout << already[x].front() << '\n';
						already[x].pop();
						sudah[x]--;
					}
					if (sudah[x] == 0) {
						pernah[x] = false;
						gabungan.pop();
					}
				}
			}
		}
		cout << '\n';
	}
	return 0;
}