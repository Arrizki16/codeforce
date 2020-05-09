#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int flag = 1;
    if (n<=5) cout << "1" << endl;
    else {
        while (n>5){
            n -= 5;
            flag++;
        }
        cout << flag << endl;
    }

    return 0;
}