#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = n; j >i ;j--) {
			cout << " ";
		}
		for (int k = 1; k < 2 * i; k++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1; i <= n - 1; i++) {
		for (int j = 1; j <= i;j++) {
			cout << " ";
		}
		for (int k =2*(n-i); k>1; k--) {
			cout << "*";
		}
		cout << "\n";

	}
	return 0;
	
	
}