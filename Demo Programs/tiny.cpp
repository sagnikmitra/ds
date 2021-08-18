/*#include<iostream>
usingnamespacestd;
class tiny
{
private:
    int tiny;
public:
    cout<<"Enter A Number"<<endl;
    cin>>tiny;

};*/
#include<stdio.h>
int mul(int x)
{
    x=(x<<3)-x;
    return x;
}
int main()
 {
     int a;
     printf("enter the number");
     scanf("%d",&a);
     int m=mul(a);
     printf("Multiplyed number is %d",m);
     return 0;
 }



