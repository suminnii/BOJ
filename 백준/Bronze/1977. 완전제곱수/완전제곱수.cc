#include <iostream>
using namespace std;

int main() 
{
    int M, N;
    cin >> M >> N;

    int sum = 0;
    int min_square = 0;

    for (int i = 1; i * i <= N; i++) 
    {
        int square = i * i;

        if (square >= M) 
        {
            sum += square;

            if (min_square == 0)
                min_square = square; // 첫 제곱수 저장
        }
    }

    if (sum == 0)
        cout << "-1\n";
    else
        cout << sum << "\n" << min_square << "\n";

    return 0;
}
