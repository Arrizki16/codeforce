#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int sum = 0, sum1=0, sum2=0;
    int arr[n][3];
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<3 ; j++){
            cin >> arr[i][j];
        }
        sum += arr[i][0];
        sum1 += arr[i][1];
        sum2 += arr[i][2];
    }
    if (sum==0 && sum1==0 && sum2==0) cout << "YES" << endl;
    else cout << "NO" << endl;
}