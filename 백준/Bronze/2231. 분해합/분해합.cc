#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int num = 1; num < N; num++) {  // 1부터 N-1까지 탐색
        int sum = num;
        int temp = num;

        while (temp > 0) {  // 각 자리수 합 계산
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == N) {  // 생성자 찾으면 출력 후 종료
            cout << num << endl;
            return 0;
        }
    }

    cout << 0 << endl;  // 생성자가 없을 경우 0 출력
    return 0;
}
