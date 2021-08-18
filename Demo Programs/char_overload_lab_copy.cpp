#include<iostream>
#include<string.h>
using namespace std;
char *add (char x, char y)
{
  static char a[3];
  a[0]=x;
  a[1]=y;

  return a;
}
char *add (char x, char *y)
{
  static char b[20];
  b[0] = x;
  strcat(b,y);
  return b;
}
char *add(char *x, char *y)
{
  static char c[50];
  int len=strlen(x); //where buff is your char array fgets is using
  if(x[len-1]=='\n')
  x[len-1]='\0';
  strcpy(c,x);
  strcat(c,y);
  return c;
}
int main()
{
  char a,b,c,d[20],e[20],f[20];
  cout<<"Enter X, Y:";
  cin>>a>>b;
  cout<<"Enter one character and one string:"<<endl;
  cin>>c;
  fflush(stdin);
  fgets(e, 19, stdin);
  cout<<"Enter two strings to concatenate:"<<endl;
  fgets(f, 19, stdin);
  fflush(stdin);
  fgets(d, 19, stdin);
  cout<<add(a,b)<<endl<<add(c,e)<<add(f,d);
  return 0;
}
