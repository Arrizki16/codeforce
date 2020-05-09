#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int coins[101];
    cin >> n;
    int max = 0;
    int flag = 0;
    int sum = 0;
    int j = 0;
    for (int i =0 ; i<n ; i++){
        cin >> coins[i];
        sum += coins[i];
    }
    sum = sum/2;
    sort (coins, coins+n);
    for (int i=n-1 ; i>=0 ; i--){
        max += coins[i];
        flag++;
        if (max > sum){
            cout << flag << endl;
            break;
        }
    }

    return 0;
}