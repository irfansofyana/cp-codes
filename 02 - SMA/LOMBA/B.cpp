#include <bits/stdc++.h>
using namespace std;

string s[6];
int n,m,i,j;
string urutan[]={"A","K","Q","J","T","9","8","7","6","5","4","3","2"};
string kartu[]={"S","H","D","C"};
char kara[]={'A','K','Q','J','T','9','8','7','6','5','4','3','2'};
map<string,int> mep;
map<char,int> mepp;
map<char,int> urut;
string jaw[]={"royal flush","straight flush","four of a kind","full house","flush","straight","three of a kind","two pairs",
"pair","high card"};

void generate(){
	string temp ;
	int x = 1;
	for (i = 0 ; i < 4 ; i++) {
		for (j = 12 ; j >= 0; j--){
			temp = "";
			temp = temp+urutan[j];
			temp = temp+kartu[i];
			mep[temp] = x;
			x++;
		}
	}
	urut['2'] = 1; urut['7'] = 6; urut['Q'] = 11;
	urut['3'] = 2; urut['8'] = 7; urut['K'] = 12;
	urut['4'] = 3; urut['9'] = 8; urut['A'] = 13;
	urut['5'] = 4; urut['T'] = 9;
	urut['6'] = 5; urut['J'] = 10;
}

int hasil(){
	vector<int> temp;
	temp.clear(); mepp.clear();
	for (i = 0 ; i < 5; i++) {
		temp.push_back(mep[s[i]]);
	}
	sort(temp.begin(),temp.end());
	int x;
	x = 9;
	for (i = 0 ; i < 5 ; i++) {
		if (temp[i]!=x) break; 
		else x++;
	}
	if (i==5) return 10;
	x = 22;
	for (i = 0 ; i < 5 ; i++) {
		if (temp[i]!=x) break; 
		else x++;
	}
	if (i==5) return 10;
	x = 35;
	for (i = 0 ; i < 5 ; i++) {
		if (temp[i]!=x) break; 
		else x++;
	}
	if (i==5) return 10;
	x = 48;
	for (i = 0 ; i < 5 ; i++) {
		if (temp[i]!=x) break; 
		else x++;
	}
	if (i==5) return 10;
	for (i = 1 ; i < 5 ; i++) {
		if (temp[i]-temp[i-1]!=1) break;
	}
	if (i==5) return 9;
	for (i = 0 ;i < 5 ; i++) {
		mepp[s[i][0]]++;
	}
	for (i = 0 ; i < 13; i++) {
		if (mepp[kara[i]]==4) {
			return 8;
		}
	}
	bool tiga = false; 
	bool dua = false;
	for (i =0 ; i < 13 ; i++) {
		if (mepp[kara[i]]==3) {
			tiga = true;
		}
		else if (mepp[kara[i]]==2) {
			dua = true;
		}
	}
	if (dua && tiga ) return 7;
	for (i = 1 ; i < 5 ; i++) {
		if (s[i][1]!=s[i-1][1]) break;
	}
	if (i==5) return 6;
	vector<int> cekk;
	cekk.clear();
	for (i = 0 ; i < 5 ; i++) {
		cekk.push_back(urut[s[i][0]]);
	}
	sort(cekk.begin(),cekk.end());
	for (i = 1 ; i < 5 ; i++) {
		if (cekk[i]-cekk[i-1]!=1) break;
	}
	if (i==5) return 5;
	map<char,int> tempp; tempp.clear();
	for (i = 0 ; i < 5 ; i++) {
		tempp[s[i][0]]++;
	}
	for (i = 0 ; i < 13 ; i++) {
		if (tempp[kara[i]]==3) {
			return 4;
		}
	}
	bool duaa,duaaa;
	duaa = false; duaaa = false;
	for (i = 0 ; i < 13 ; i++) {
		if (tempp[kara[i]]==2) {
			if (!duaa && !duaaa) {
				duaa = true;
			}
			else duaaa = true;
		}
	}
	if (duaa && duaaa) return 3;
	bool asu ;
	asu = false;
	for (i = 0 ; i < 13; i++) {
		if (tempp[kara[i]]==2) asu = true;
	}
	if (asu) return 2;
	return 1;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	for (i = 0 ; i < 5 ; i++) cin >> s[i];
	int asu1 = hasil();	
	for (i = 0 ; i < 5; i++) cin >> s[i];
	int asu2 = hasil();
	cout << "Kartu Piyu: " <<  jaw[(int)10-asu1] << '\n';
	cout << "Kartu Moni: " << jaw[(int)10-asu2] << '\n';
	cout << "Status: ";
	if (asu1>asu2) cout << "Piyu Menang\n";
	else if (asu1<asu2) cout << "Moni Menang\n";
	else cout << "Seri\n";
	return 0;
}