#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, P;
	string name,maxname;
	int num;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> P;
		int max = -1;
		maxname = "";
		for (int j = 0;j < P;j++) {
			cin >> num >> name;
			if (num > max) {
				max = num;
				maxname = name;
			}
		}
		cout << maxname << "\n";
	}
	return 0;
}