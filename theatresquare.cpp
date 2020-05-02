#include <iostream>
using namespace std;

int main(){
    int n,m,a,temp1,temp2;
    long long int sum=0;
    cin >> n >> m >> a;
    for (int i=1 ; i<=2 ; i++){
        temp1 = 0;
        temp2 = 0;
        if (n <= a){
            temp1 = 0;
        } else temp1 = temp1 + (n/a);
        if (m <= a){
            temp2 = 0;
        } else temp2 = temp2 + (m/a);
        sum = sum + (temp1 + temp2);
    }
    if (sum == 0) sum += 1;
    cout << sum << endl;

    return 0;
}