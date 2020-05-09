#include <bits/stdc++.h>
using namespace std;

string flag = "hello";


void getSolve(string s){
    int temp=0;
    int j=0;
    for (int i=0 ; i<s.size() ; i++){
        if (s[i] == flag[j]){
            j++;
            temp++;
        }
        if (temp==5){
            break;
        }
    }
    if (temp == 5) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    getSolve(s);
}