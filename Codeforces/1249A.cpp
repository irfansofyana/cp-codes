#include <bits/stdc++.h>
using namespace std;

int q, n;
int arr[105];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> q;
    while (q--){
        cin >> n;
        for (int i = 0 ; i < n; ++i){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        bool ada = false;
        for (int i = 0; i < n-1; ++i){
            if (arr[i+1] - arr[i] == 1){
                ada = true;
                break;
            }
        }
        cout << (ada ? 2 : 1) << '\n';
    }
    return 0;
}