#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M,sum;
	int maxSum = 0;
	cin >> N >> M;
	vector<int> arr(N);
	for (int i = 0; i < N;i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j+1; k < N; k++) {
				sum = arr[i] + arr[j] + arr[k];
				if (sum<=M&&maxSum<sum){
					maxSum=sum;
				}
			}
		}
	}
	cout << maxSum;
	return 0;
}