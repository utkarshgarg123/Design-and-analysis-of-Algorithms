#include <bits/stdc++.h>
using namespace std;

int TotalNumberOfSequences(int M, int N)
{
    int DP[M + 1][N + 1];
    for (int i = 0; i < M + 1; i++)
    {
        for (int j = 0; j < N + 1; j++)
        {
            if (i == 0 || j == 0)
                DP[i][j] = 0;
            else if (i < j)
                DP[i][j] = 0;
            else if (j == 1)
                DP[i][j] = i;
            else
                DP[i][j] = DP[i - 1][j] + DP[i / 2][j - 1];
        }
    }
    return DP[M][N];
}

int main()
{
    int M, N;
    cout << "Enter teh value of M : ";
    cin >> M;
    cout << "Enter teh value of N : ";
    cin >> N;
    cout << "Total number of possible sequences are " << TotalNumberOfSequences(M, N);
    return 0;
}