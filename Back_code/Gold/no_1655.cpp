// 가운데를 말해요
#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<int> maxHeap;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;

        if (maxHeap.empty() || num <= maxHeap.top()) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }

        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }

        cout << maxHeap.top() << '\n';
    }

    return 0;
}





// 밑의 코드는 시간 초과
/*
#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int arr[100001];
    int size = 0;
    
    for(int i = 0;i<N; ++i){
        int num;
        cin >> num;
        
        arr[size] = num;
        size++;
        
        for(int j = size-1; j>0; --j){
            if(arr[j-1] > arr[j]){
                int tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
            else{
                break;
            }
        }

        int mid;
        if(size%2 == 1){
            mid =arr[size/2];
        }
        else{
            mid = arr[(size-1)/ 2];
        }
        cout << mid << endl;
    }
    
    return 0;
}
*/