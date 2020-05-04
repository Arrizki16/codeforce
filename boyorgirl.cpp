#include <iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    // int arr[100];
    cin >> s1;
    int flag = 0;
    int len = s1.size();
    for (int i = 0; i < len; i++){
        for (int j = i + 1; j < len; j++){
            if (s1[i] == s1[j]){
                flag++;
                break;
            }
        }
    }
    int temp;
    temp = len - flag;
    if (temp % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}