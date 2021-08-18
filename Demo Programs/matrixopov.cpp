#include<iostream>
using namespace std;
class Matrix
{
public:
  int mat1[3][3];
  Matrix operator +(Matrix mat2);
  Matrix operator *(Matrix mat2);
  class Index
  {
  public:
      Matrix *mat;
      int index;
      Index(Matrix *obj, int i)
      {
        mat=obj;
        index=i;
      }
      int operator[](int j)
      {
        return index*j;
      }
   };
   Index operator[](int i)
   {
     return Index(this, i);
   }
};
Matrix Matrix::operator +(Matrix mat2)
{
  Matrix add;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      add.mat1[i][j] = mat1[i][j]+mat2.mat1[i][j];
    }
  }
  return add;
}
Matrix Matrix::operator *(Matrix mat2)
{
  Matrix mult;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      mult.mat1[i][j]=0;
      for(int k=0;k<3;k++)
      {
        mult.mat1[i][j]=mult.mat1[i][j]+mat1[i][k]*mat2.mat1[k][j];
      }
    }
    cout<<endl;
  }
  return mult;
}
ostream &operator<<(ostream &cout, const Matrix &obj)
{
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cout<<obj.mat1[i][j]<<" ";
    }
    cout<<endl;
  }
  return cout;
}
istream &operator>>(istream  &cin, Matrix &obj)
{
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cin>>obj.mat1[i][j];
    }
  }
  return cin;
}
int main()
{
  Matrix m1,m2;
  cout<<"Enter First Matrix: ";
  cin>>m1;
  cout<<"Enter Secong Matrix: ";
  cin>>m2;
  cout<<m1+m2;
  cout<<m1*m2;
  return 0;
}
