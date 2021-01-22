#include <bits/stdc++.h>
using namespace std;
struct paket{
	string samar,asli;
};
int n,i,j,idx=1;
string nama,temp,smt;
paket A[1010];
int main(){
	cin >> n;
	getchar();
	while (n--){
		getline(cin,nama);
		temp="";
		for (i=0;i<nama.size();i++){
			if (nama[i]>='a' && nama[i]<='z') temp = temp+char(int(nama[i])-32);
			else temp = temp+nama[i];
		}
		A[idx].samar = temp;
		A[idx].asli = nama;
		j = idx-1;
		while (j>=1 && A[j].samar>A[j+1].samar) {
			smt = A[j].samar;
			A[j].samar = A[j+1].samar;
			A[j+1].samar = smt;
			j--;
		}
		idx++;
		cout << j+1 << endl;
	}
	return 0;
}