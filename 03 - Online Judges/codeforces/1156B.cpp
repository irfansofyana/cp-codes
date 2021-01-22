#include <bits/stdc++.h>
using namespace std;

int T, frek[30];
string s;

int can(vector<int> a){
	if (a.size() == 1) return 2;
	if (a.size() == 4){
		return 1;
	}
	int last = 0;
	for (int i = 0; i < (int)a.size(); i+=2){
		last = a[i];
	}
	if (abs(last-a[1])==1) return 3;
	return 2;
}

void print(vector<int> a){
	for (int i = 0; i < (int)a.size(); i+=2){
		for (int j = 0; j < frek[a[i]]; j++)
			cout << char(a[i] + 'a');
	}
	for (int i = 1; i < (int)a.size(); i+=2){
		for (int j = 0; j < frek[a[i]]; j++)
			cout << char(a[i] + 'a');
	}
	cout << '\n';
}

int main(){
	cin >> T;
	while (T--){
		cin >> s;
		vector<int> angka;
		memset(frek, 0, sizeof frek);
		for (int i = 0; i < (int)s.size(); i++){
			frek[s[i]-'a']++;
		}
		for (int i = 0; i < 26; i++){
			if (frek[i] > 0)
				angka.push_back(i);
		}
		if (angka.size() == 3){
			if (angka[1] == angka[0]+1 && 
				angka[2] == angka[1]+1){
				cout << "No answer\n";
				continue;
			}else if (abs(angka[0]-angka[1])==1){
				vector<int> tmp = angka;
				angka[0] = tmp[0];
				angka[1] = tmp[2];
				angka[2] = tmp[1];
				for (int i = 0; i < 3; i++){
					for (int j = 0; j < frek[angka[i]]; j++){
						cout << char(angka[i] + 'a');
					}
				}cout << '\n';
				continue;
			}else if (abs(angka[1]-angka[2])==1){
				vector<int> tmp = angka;
				angka[0] = tmp[2];
				angka[1] = tmp[0];
				angka[2] = tmp[1];
				for (int i = 0; i < 3; i++){
					for (int j = 0; j < frek[angka[i]]; j++){
						cout << char(angka[i] + 'a');
					}
				}cout << '\n';
				continue;
			}
		}
		int x = can(angka);
		if (x==2) print(angka);
		else if (x == 3) cout << "No answer\n";
		else if (x == 1) {
			vector<int> tmp = angka;
			angka[0] = tmp[2]; angka[1] = tmp[0]; 
			angka[2] = tmp[3]; angka[3] = tmp[1];
			for (int i = 0; i < 4; i++){
				for (int j = 0; j < frek[angka[i]]; j++){
					cout << char(angka[i] + 'a');
				}
			}cout << '\n';
		}
	}
	return 0;
}