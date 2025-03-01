#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main() {
	int N, S;
	cin >> N >> S;

//최대공약수(유클리드 호제법)
//최소공배수(두 수의 곱= 최대공약수*최소공배수 이용)
	if (N > S) {
		cout << gcd(N, S)<<"\n";
		cout << (N * S) / gcd(N, S);
	}
	else {
		cout << gcd(S, N)<<"\n";
		cout << (N * S) / gcd(S, N);
	}
	
	return 0;
	
}