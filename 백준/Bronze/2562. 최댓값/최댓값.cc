#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr(9);
    int maxSum = 0, maxIndex = 0;

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];  // 입력 저장
        if (arr[i] > maxSum) {
            maxSum = arr[i];
            maxIndex = i + 1;  //i값은 계속 변하는 값이라 변수 따로 지정해야 함
        }   //인덱스값이 0부터 시작해서 i+1값 저장
    }

    cout << maxSum << "\n" << maxIndex;  
    return 0;
}


	