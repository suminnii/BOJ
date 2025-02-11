#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int x;
	int max = -10000000;
	int min = 10000000;
	for (int i = 0; i < N; i++){
		cin >> x;
		
		if (x > max) {
			max = x;
		}
		if (x < min) {
			min = x;
		}

	}
	cout << min << " " << max;
	return 0;
}