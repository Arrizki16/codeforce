#include <bits/stdc++.h>
using namespace std;

int main(){
    int angka, n;
    cin >> angka >> n;
    // cout << 510/10 << endl;
    for (int i=1 ; i<=n ; i++){
        if (angka%10 == 0){
            angka = angka/10;
        }
        else angka--;
    }
    cout << angka << endl;

    return 0;
}