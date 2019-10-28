#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct paket{
  string nama;
  int banyak;
};

int N;
paket arr[105];

bool cek(string a, string b){
  if (a.size() > b.size()) return false;
  string tmp = "";
  for (int i = 0; i < a.size(); i++) tmp = tmp + b[i];
  if (tmp == a) return true;
  for (int i = (int)a.size(); i < (int)b.size(); i++) {
    tmp.erase(0, 1);
    tmp = tmp + b[i];
    if (tmp == a) {
      break;
    }
  }
  if (tmp == a) return true;
  return false;
}

bool cmp(paket a, paket b){
  if (a.banyak == b.banyak) return a.nama.size() < b.nama.size();
  return a.banyak > b.banyak;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> N;
  for (int i = 0 ; i < N; i++) {
    cin >> arr[i].nama;
  } 
  for (int i = 0; i < N; i++) {
    int ada = 0;
    for (int j = 0; j < N; j++) {
      if (i == j) continue;
      string a = arr[i].nama;
      string b = arr[j].nama;
      if (cek(a, b)) ada++; 
    }
    arr[i].banyak = ada;
  }
  sort(arr, arr + N, cmp);
  bool bisa = true;
  for (int i = 0 ; i < N; i++) {
    if (arr[i].banyak < N-i-1) {
      bisa = false;
      break;
    }
  }
  if (!bisa) cout << "NO\n";
  else {
    cout << "YES\n";
    for (int i = 0 ; i < N; i++) {
      cout << arr[i].nama << '\n';
    }
  }
  return 0;
} 