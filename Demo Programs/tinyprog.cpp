/*CREATE A 6 BIT NON NEGATIVE INTEGER TINY AND OVERLOAD ARITHMATIC OPERATORS*/
#include<iostream>
using namespace std;
class Tiny
{
    unsigned int num;
public:
    Tiny()
    {
        num=0;
    }
    Tiny(int n)
    {
        if(n<32 && n>0)
            num=n;
        else
            num=(n & 255);
    }
    Tiny operator +(Tiny const& obj)
    {
        return (num+obj.num);
    }
    void operator =(Tiny const& obj)
    {
        num=obj.num;
    }
    int getdata()
    {
        return num;
    }
};
ostream &operator<<( ostream &output,  Tiny &obj)
    {
        int n=obj.getdata();
        output<<n;
        return output;
    }
istream &operator>>(istream &input,  Tiny &obj)
{
    int n=obj.getdata();
    input>>n;
    return input;
}
int main()
{
    Tiny a(5);
    Tiny b(7);
    cout<<a;
    cin>>b;
    return 0;
}
