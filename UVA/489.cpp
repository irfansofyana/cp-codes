#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int salah,n,i,j,awal,ans;
string s,temp;
bool tanda;
int A[50],frek[50],B[50];

int main(){
	OPTIMASI
	while (cin >> n && n!=-1) {
		cin >> s >> temp;
		memset(A,0,sizeof A);
		memset(B,0,sizeof B);
		for (i = 0 ; i < s.size(); i++){
			A[(int)s[i]-'a']++;
		}
		salah = 0; awal = (int)s.size();
		ans = -1;
		for (i = 0 ; i < temp.size(); i++){
			if (A[(int)temp[i]-'a'] > 0){
				awal -= A[(int)temp[i]-'a'];
				A[(int)temp[i]-'a'] = 0;
			}
			else {
				if (B[(int)temp[i]-'a'] == 0) {
					salah++;
					B[(int)temp[i]-'a']++;
				}
			}
			if (awal == 0 && salah < 7) {
				ans = 1;
				break;
			}
			if (salah == 7) {
				ans = 0;
				break;
			}
		}
		cout << "Round " << n << '\n';
		if (ans == -1) cout << "You chickened out.\n";
		else if (ans == 0) cout << "You lose.\n";
		else cout << "You win.\n";
	}
	return 0;
}