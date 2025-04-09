// 문자와 문자열
#include <iostream>
using namespace std;

int main(){
    char S[1001];
    int num;

    cin >> S;
    cin >> num;

    cout << S[num-1] << endl;

    return 0;
}