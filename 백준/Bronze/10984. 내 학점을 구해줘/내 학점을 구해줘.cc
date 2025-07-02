#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T, C;
	double G;
	cin >> T;
	for (int i = 0; i < T;i++) {
		int N,K = 0;
		double U = 0.0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> C >> G;
			K += C;
			U += C * G;
		}
		cout << K << " " << fixed << setprecision(1) << U / K<<"\n";
	}
	return 0;
}