/*//EI CODE TA TE JE OUTPUT TA ASCHE SETAKE INTEGER E CAST KRTE GELE KI KRTE HOBE?
#include<iostream>
using namespace std;
class Rational
{
  int newmatter;
  int denominator;
public:
  Rational (int p=1, int q=1):newmatter(p),denominator(q){}
  int gcd(int a, int b)
  {
      if (a == 0)
        return b;
      if (b == 0)
        return a;
      if (a == b)
        return a;
      if (a > b)
        return gcd(a-b, b);
      return gcd(a, b-a);
  }
  Rational operator +(Rational &R)
  {
    Rational temp,temp2;
    temp.newmatter = this->newmatter*R.denominator + this->denominator*R.newmatter;
    temp.denominator = (this->denominator) * (R.denominator);
    temp2.newmatter = temp.newmatter;
    temp.newmatter = temp.newmatter / gcd(temp.newmatter, temp.denominator);
    temp.denominator = temp.denominator / gcd(temp2.newmatter, temp.denominator);
    return temp;
  }
  friend ostream & operator <<(ostream& out, Rational &rat);
};
ostream & operator <<(ostream& out, Rational &rat)
{
  out<<rat.newmatter<<"/"<<rat.denominator<<endl;
  return out;
}
int main()
{
  Rational r1(5,6),r2(5,6),r3;
  r3=r1+r2;
  cout<<r3<<endl;
  return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, k, m, n;
    float Mat[10][10], c, x[10], sum = 0.0f;
    cout << "Enter the Order Square Matrix: " << endl;
    cin >> m;
    n = m + 1;
    //INPUT
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "Enter A[" << i << "][" << j << "]: " << endl;
            cin >> Mat[i][j];
        }
    }
    cout << endl
         << "Input:" << endl;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }
    //PRINTING INPUT MATRIX
    for (k = 1; k <= m - 1; k++)
    {
        for (i = k + 1; i <= m; i++)
        {
            float T = Mat[i][k] / Mat[k][k];
            for (j = k; j <= n; j++)
            {
                Mat[i][j] = Mat[i][j] - (T * Mat[k][j]);
            }
        }
    }
    cout << endl
         << endl;
    //UPPER TRIANGULAR MATRIX
    cout << "Upper Triangular Matrix: ";
    cout << endl;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
           /* if (Mat[i][j] < 0.001 && Mat[i][j] > -0.001)
                cout << "0.000"
                     << "\t";
            else*/
                cout << Mat[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
