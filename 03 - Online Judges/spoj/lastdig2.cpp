#include <iostream>
#include <string>
using namespace std;

int t;
string a,b;
int base,power;
int arr[10];

int main(){
	cin >> t;
	while (t--) {
		cin >> a >> b;
		base = a[(int)a.size()-1]-'0';
		if (b.size() >= 2) power = 10*(b[(int)b.size()-2]-'0') + b[(int)b.size()-1]-'0';
		else power = b[(int)b.size()-1]-'0';
		int nilai = base;
		for (int i = 1 ; i <= 4 ; i++) {
			arr[i] = nilai;
			nilai *= base;
			nilai %= 10;
		}
		if (b == "0") cout << 1 << '\n';
		else cout << arr[(power%4==0 ? 4 : power%4)] << '\n';
	}
		return 0;
}