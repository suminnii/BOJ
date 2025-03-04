#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> people(N);
	vector<int> ranks(N, 1);
	for (int i = 0;i < N;i++) {
		cin >> people[i].first >> people[i].second;
	}
	for (int i = 0; i < N;i++) {
		for (int j = 0; j < N; j++) {
			if (i != j && people[i].first < people[j].first && people[i].second < people[j].second) {
				ranks[i]++;
			}
		}
	}
	for (int rank : ranks) {
		cout << rank << " ";
	}
	return 0;
}