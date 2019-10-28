#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pi;

int n,i,j,temp;
char ch;
pi t1,t2;

int color(int row,int colom){
	if (row%2 == 0 && colom%2 == 0) return 1; //black
	else if (row%2 == 0 && colom%2 == 1) return 0;
	else if (row%2 == 1 && colom%2 == 0) return 0;	//white
	else if (row%2 == 1 && colom%2 == 1) return 1;
}

bool check(int x,int y){
	return (x>=0 && x < 8 && y >= 0 && y < 8);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> ch >> temp;
		if (ch >= 'a' && ch <= 'z') ch = char((int)ch - 32);
		t1 = make_pair((int)ch-'A',temp-1);
		int w1 = color(t1.first,t1.second);
		
		cin >> ch >> temp;
		if (ch >= 'a' && ch <= 'z') ch = char((int)ch - 32);
		t2 = make_pair((int)ch-'A',temp-1);
		int w2 = color(t2.first,t2.second);
		if (!check(t1.first,t1.second) || !check(t2.first,t2.second)) cout << "Impossible\n";
		else if (t1.first == t2.first && t1.second == t2.second) cout << 0 << " " << char(t1.first + 'A') << " " << t1.second + 1 << '\n';
		else if (w1 != w2) cout << "Impossible\n";
		else if (abs(t1.first-t2.first) == abs(t1.second-t2.second)){
			cout << 1 << " " << char(t1.first + 'A') << " " << t1.second+1 << " " << char(t2.first + 'A') 
			<< " " << t2.second + 1 << '\n';
		}
		else {
			int nowx,nowy;
			bool found = false;
			nowx = t1.first; nowy = t1.second;
			nowx--; nowy++;
			while (check(nowx,nowy)){
				if (abs(nowx-t2.first) == abs(nowy-t2.second)) {
					cout << 2 << " " << char(t1.first + 'A') << " " << t1.second+1 << " " << char(nowx + 'A') << " " 
					<< nowy + 1 << " " << char(t2.first + 'A') << " " << t2.second + 1 << '\n';
					found = true;
					break;
				}
				else {
					nowx--;
					nowy++;
				}
			}
			if (!found) {
				nowx = t1.first; nowy = t1.second;
				nowx++; nowy++;
				while (check(nowx,nowy)){
					if (abs(nowx-t2.first) == abs(nowy-t2.second)) {
						cout << 2 << " " << char(t1.first + 'A') << " " << t1.second+1 << " " << char(nowx + 'A') << " " 
						<< nowy + 1 << " " << char(t2.first + 'A') << " " << t2.second + 1 << '\n';
						found = true;
						break;
					}
					else {
						nowx++;
						nowy++;
					}
				}
				if (!found) {
					nowx = t1.first; nowy = t1.second;
					nowx--; nowy--;
					while (check(nowx,nowy)){
						if (abs(nowx-t2.first) == abs(nowy-t2.second)) {
							cout << 2 << " " << char(t1.first + 'A') << " " << t1.second+1 << " " << char(nowx + 'A') << " " 
							<< nowy + 1 << " " << char(t2.first + 'A') << " " << t2.second + 1 << '\n';
							found = true;
							break;
						}
						else {
							nowx--;
							nowy--;
						}
					}
					if (!found){
						nowx = t1.first; nowy = t1.second;
						nowx++; nowy--;
						while (check(nowx,nowy)){
							if (abs(nowx-t2.first) == abs(nowy-t2.second)) {
								cout << 2 << " " << char(t1.first + 'A') << " " << t1.second+1 << " " << char(nowx + 'A') << " " 
								<< nowy + 1 << " " << char(t2.first + 'A') << " " << t2.second + 1 << '\n';
								found = true;
								break;
							}
							else {
								nowx++;
								nowy--;
							}
						}
						if (!found) {
							cout << "Impossible\n";
						}
					}
				}
			}
		}
	}
}