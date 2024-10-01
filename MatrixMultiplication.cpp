// WAP for matix multiplication.

#include<iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int m1[n1][n2];
    int m2[n2][n3];
    int ans[n1][n3];

// matrix 1 elements.
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
            cin >> m1[i][j];
    }

// matrix 2 elements.
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
            cin >> m2[i][j];
    }

// sum matrix to store the answer of 2 multiplied matrix.
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
            ans[i][j] = 0;
    }


// nested for loop of order 3 to calculate matrix.
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

// answer matrix to display output.
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}