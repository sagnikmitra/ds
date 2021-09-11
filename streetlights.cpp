#include <bits/stdc++.h>

using namespace std;

int main()

{

    int L;

    cout << "Enter total number of street lights : ";

    cin >> L;

    int A[L][2];

    for (int i = 0; i < L; i++)

    {

    
        for (int j = 0; j < 2; j++)

        {

            cin >> A[i][j];
        }
    }
    
    int length = 0;

    for (int i = 0; i < L; i++)

    {

        int S = A[i][1] - A[i][0];

        length = length + S;

        if (A[i][1] > A[i + 1][0] && i < L - 1)

        {

            int C = A[i][1] - A[i + 1][0];

            length = length - C;
        }
    }

    cout << "Length of street = " << length;

    return 0;
}