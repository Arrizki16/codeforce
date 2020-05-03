#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int flag, sum=0,temp;
    for (int i=0 ; i<n ; i++){
        temp=0;
        for (int j=0 ; j<3 ; j++){
            cin >> flag;
            if (flag==1) temp++;
        }
        if (temp >= 2) sum++;
    }
    cout << sum << endl;
    return 0;
}