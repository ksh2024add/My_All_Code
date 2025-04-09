// 평범한 배낭
#include <iostream>
using namespace std;

int weight[101];
int value[101];
int dp[101][100001];

int main(){
    int N,K;
    cin >> N >> K;

    for(int i =1; i <=N; i++){
        cin >> weight[i] >> value[i];
    }

    for(int i =1; i<=N;i++){
        for(int j =0; j<=K;j++){
            if(weight[i]>j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]]+value[i]);
            }
        }
    }

    cout << dp[N][K] << endl;

    return 0;
}