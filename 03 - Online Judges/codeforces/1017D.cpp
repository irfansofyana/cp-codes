#include <bits/stdc++.h>
using namespace std;
const int MAXN = 12;
const int MAXNN = 5000;

int N, M, Q, K;
string s;
int nilai[MAXNN];
int arr[MAXN+5];
int calc[MAXNN][1205];
int freq[MAXNN];

int ubah(string s){
  int bil = 1;
  int res = 0;
  for (int i = (int)s.size()-1; i >= 0; i--){
    res += (s[i] - '0')*bil;
    bil *= 2;
  }
  return res;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cin >> N >> M >> Q;
  for (int i = 0 ; i < N; i++) cin >> arr[i];
  for (int i = 0 ; i < M; i++) {
    cin >> s;
    freq[ubah(s)]++;
  }
  for (int i = 0; i <= (1 << N) - 1; i++){
    int sum = 0;
    for (int j = 0 ; j < N; j++){
      if ((i&(1<<j)) == 0) {
        sum += arr[N-1-j];
      }
    }
    nilai[i] = sum;
  }
  for (int i = 0; i <= (1 << N) - 1 ; i++){
    for (int j = 0; j <= (1 << N) - 1; j++) {
      int hasil = i^j;
      calc[i][nilai[hasil]] += freq[j];
    }
    for (int j = 1; j <= 1200; j++){
      calc[i][j] += calc[i][j-1];
    }
  }
  while (Q--) {
    cin >> s >> K;
    cout << calc[ubah(s)][K] << '\n';
  }
  return 0;
}
