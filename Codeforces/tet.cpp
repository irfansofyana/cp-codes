#include <bits/stdc++.h>
using namespace std;


int arr[2019];
int l, r;

int main(){
  for (int i = 0 ; i <= 2018; i++)
    if ((i%3 == 0) || (i%2 == 0)) arr[i] = 0;
    else arr[i] = 1;
  for (int i = 1 ; i <= 2018; i++) arr[i] = arr[i] + arr[i-1];
  cin >> l >> r;
  cout << arr[r] - arr[l-1] << '\n';
  return 0;
}
