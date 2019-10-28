#include <bits/stdc++.h>
using namespace std;

int T, N;
int arr[1005], brr[1005];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> T;
  while (T--) {
    cin >> N;
    for (int i = 0 ; i < N; i++) {
      cin >> arr[i];
      brr[i] = arr[i];
    }
    sort(brr, brr + N);
    vector<int> ans;
    int curr = N-1;
    for (int i = N-1; i > 0; i--) {
      if (arr[i] == brr[curr]) {
        curr--;
        continue;
      }
      else if (arr[0] == brr[curr]){
        ans.push_back(N-i);
        reverse(arr, arr+i+1);
        curr--;
      }
      else {
        int dapet;
        for (int j = 1; j < i; j++){
          if (arr[j] == brr[curr]){
            ans.push_back(N-j);
            reverse(arr, arr + j + 1);
            break;
          }
        }
        ans.push_back(N-i);
        reverse(arr, arr+i + 1);
        curr--;
      }
    }
    for (int i = 0 ; i < ans.size(); i++){
      cout << ans[i];
      cout << " ";
    }
    cout << 0 << '\n';
    ans.clear();
  }
  return 0;
}
