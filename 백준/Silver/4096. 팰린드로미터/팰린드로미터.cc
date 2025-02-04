#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s1;

    while (true) {
        cin >> s1;

        if (s1 == "0") { // 종료 조건
            break;
        }

        string original = s1; // 원래 입력값 저장
        string s2 = s1;
        reverse(s2.begin(), s2.end()); // 뒤집은 값 저장

        if (s1 == s2) { // 이미 회문이면 0 출력
            cout << "0\n";
            continue;
        }

        // 최소 주행 거리 계산
        long long originalNum = stoll(original); // 원래 숫자로 변환
        long long newNum = originalNum;

        while (true) {
            newNum++; // 1씩 증가
            string newStr = to_string(newNum); // 문자열로 변환

            // 자리수를 원래 입력값과 동일하게 맞춰줌 (ex: "00456" → "00499" 유지)
            while (newStr.length() < original.length()) {
                newStr = "0" + newStr;
            }

            string reversedStr = newStr;
            reverse(reversedStr.begin(), reversedStr.end());

            if (newStr == reversedStr) { // 회문이 되면
                cout << newNum - originalNum << "\n"; // 증가한 거리 출력
                break;
            }
        }
    }

    return 0;
}
