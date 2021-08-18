#include<iostream>
using namespace std;
class mat
{
      private:
                    int s[10][10];
                    int u,v;
      public:
                    void show();
                    mat operator *(mat);
                    void read();
};
    mat mat::operator*(mat z)
     {
               mat t;
               t.u=u;
               t.v=z.v;
               for(int i=0;i<t.u;i++)
                    for(int j=0;j<t.v;j++)
                        {
                           t.s[i][i]=0;
                           for(int k=0;k<v;k++)
                                  t.s[i][j]+=s[i][k]*z.s[k][j];
                        }
                                  return t;
       }
       void mat::read()
       {
              cout<<"Enter Size of Matrix:\n";
              cin>>u>>v;
              cout<<"Enter the Elements of Matrix :\n";
              for(int i=0;i<u;i++)
                   for(int j=0;j<v;j++)
                       cin>>s[i][j];
        }
        void mat::show()
        {
             for(int i=0;i<u;i++)
                  {
                  for(int j=0;j<v;j++)
                       {
                          cout<<s[i][j]<<"\t";

                       }
                             cout<<"\n";
                  }
          }
           int main()
     {
                mat m1 ,m2,m3;

                cout<<"Enter First Matrix Detalis\n";
                m1.read();
                cout<<"Enter Second Matrix Details\n";
                m2.read();
                m3=m1 *m2;
                cout<<"Result After Multiplication of two Matrix\n";
                m3.show();
     }
