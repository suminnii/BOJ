#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> N(10);
    int sum = 0;
    int best = 0;  // 100에 가장 가까운 값 저장

    for (int i = 0; i < 10; i++) {
        cin >> N[i];
    }

    for (int i = 0; i < 10; i++) {
        sum += N[i];  // 하나씩 더해나가기
        
        // 현재까지의 합(sum)과 이전 최적값(best) 비교
        if (abs(100 - sum) < abs(100 - best)) {  
            best = sum;  
        } else if (abs(100 - sum) == abs(100 - best)) {
            best = max(best, sum);  // 같은 거리면 더 큰 값 선택
        }
    }

    cout << best;
    return 0;
}
