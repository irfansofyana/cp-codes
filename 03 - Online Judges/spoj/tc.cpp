#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

string s;

int main(){
	//input biasa (tanpa spasi)
	//cin >> s;
	//cout << s << '\n';
	
	/*input pakai spasi */

	//int x;
	//cin >> x;
	
	//getline(cin, s);
	//cin.ignore(); mengabaikan input sebelumnya.
	//getline(cin, s);
	
	//cin >> s;
	//SMA Pribadi Bandung
	//di c++ : S => karakter ke 0
	// M => karakter ke 1

	//s.size() buat nyari panjang string nya
	//misal : "aku", panjangnya = 3, "irfan sof", panjangnya = 9
	//misal string nama = "Pribadi Bandung"
	//nama[0] = 'P'
	/*for (int i = 0 ; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			cout << "besar" << '\n';
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {	//a <= s[i] <= z
			cout << "kecil" << '\n';
		}
		else if (s[i] >= '0' && s[i] <= '9') {
			cout << "angka\n";
		}
	}*/

	//FIND :
	/*cin >> s;
	int x = s.find("irfan");
	cout << x << '\n';*/

	//ERASE :
	//cin >> s;
	//s = s.erase(2,6);	//s.erase(idx,length)	hapus sebagian string dari s mulai dari indeks ke - idx sampai sepanjang length
	//cout << s << '\n';
	
	/*cin >> s;
	string balik = "";
	for (int i = s.size()-1 ; i >= 0 ; i--) {
		balik = balik + s[i];
	}
	cout << balik << '\n';*/

	//dari integer menjadi string
	int x = 12312;
	string ganti = to_string(x);
	cout << ganti << '\n';
	

	//dari string menuju integer
	string s = "1232131";
	int bil = stoi(s);
	cout << bil << '\n';

	return 0;
}