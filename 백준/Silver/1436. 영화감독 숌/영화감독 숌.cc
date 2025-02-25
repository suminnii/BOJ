#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;	// 영화제목 (666부터 시작)
	string S;	// 영화제목 문자열로 변환(666 체크위함)
	int num = 0;
	int N;	// N번째 영화

	// 몇번째 영화인지 입력
	cin >> N;

	for (T = 666; ; T++) {	// 가장 작은 종말의 숫자인 666부터 탐색
		 S = to_string(T);	// string 형으로 바꿔줌

		if (S.find("666") !=  std::string::npos) {	// 666을 찾은 경우
			num++;	//  num값을 증감
			if (num == N) {	// num값과 N값이 같아지면, 출력
				cout << T;
				break;
			}
		}
	}
	return 0;
}
