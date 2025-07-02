#include <iostream>
using namespace std;

int main() {
	int N, M;
	int L = 0;
	cin >> N;
	for (int i = 0;i < 9;i++) {
		cin >> M;
		L += M;
	}
	cout << N - L;
	return 0;
}