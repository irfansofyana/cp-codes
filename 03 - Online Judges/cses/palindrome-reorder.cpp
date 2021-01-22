#include <bits/stdc++.h>
using namespace std;

string s;
int n;
deque<char> deq;
char mid;
int arr[30];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> s;
    n = (int)s.size();

    for (int i = 0; i < n; ++i){
        ++arr[s[i]-'A'];
    }

    int odd = 0;
    for (int i = 0; i < 26; ++i){
        if (arr[i] > 0){
            for (int j = 0; j < arr[i]/2; ++j){
                deq.push_front(char('A' + i ));
            }
            for (int j = 0; j < arr[i]/2; ++j){
                deq.push_back(char('A' + i ));
            }
            if (arr[i] % 2 == 1){
                ++odd;
                if (odd == 1){
                    mid = char('A' + i);
                }else {
                    cout << "NO SOLUTION\n";
                    return 0;
                }
            }
        }
    }
    int cnt = 0;
    while (!deq.empty()){
        if (n % 2 == 1 && cnt == n/2){
            cout << mid;
        }else {
            cout << deq.front();
            deq.pop_front();
        }
        ++cnt;
    }
    if (n == 1) {
        cout << mid << '\n';
    }
    return 0;
}