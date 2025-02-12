#include <iostream>
#include <numeric>
using namespace std;

int main() {
	int N, T, P;
	int K[6];
	int x[6];
	cin >> N;
	for (int i = 0; i < 6;i++) {
		cin >> K[i];
	}
	cin >> T >> P;
	for (int i = 0; i < 6;i++) {
		if (K[i] % T == 0) {
			x[i] = K[i] / T;
		}
		else if (K[i] % T != 0) {
			x[i] = K[i] / T + 1;
		}
	}
	cout << accumulate(begin(x),end(x), 0)<<"\n";
	cout << N / P <<" "<< N % P;

	return 0;

}