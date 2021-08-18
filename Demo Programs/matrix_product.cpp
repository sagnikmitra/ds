#include <iostream>
using namespace std;
int main()
{
  int matrix1[10][10], matrix2[10][10], multiplicationmatrix[10][10], r1, r2, c1, c2, i, j, k;
  cout << "ENTER NUMBER OF ROWS AND COLOUMN FOR THE FIRST MATRIX: " << endl;
  cin >> r1 >> c1;
  cout << "ENTER ROWS AND COLOUMN FOR THE SECOND MATRIX: " << endl;
  cin >> r2 >> c2;
  cout << "Enter the elements of the First Matrix: " << endl;
  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c1; j++)
    {
      cout << "Enter element B[" << i << "][" << j << "]: ";
      cin >> matrix1[i][j];
    }
  }
  cout << "Enter the elements of the Second Matrix:" << endl;
  for (i = 0; i < r2; i++)
  {
    for (j = 0; j < c2; j++)
    {
      cout << "Enter element A[" << i << "][" << j << "]: ";
      cin >> matrix2[i][j];
    }
  }
  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c2; j++)
    {
      multiplicationmatrix[i][j] = 0;
      for (k = 0; k < c1; k++)
      {
        multiplicationmatrix[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }
  cout << "Multiplicated Matrix will be: " << endl;
  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c2; j++)
    {
      cout << " " << multiplicationmatrix[i][j];
      if (j == (c2 - 1))
        cout << endl;
    }
  }
  return 0;
}
