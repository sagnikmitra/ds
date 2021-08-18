#include<iostream>
#include<string.h>
using namespace std;
class publisher
{
protected:
  string title;
  float price;
public:
  void getdata()
  {
    cout<<"Title: ";
    getline(cin,title);
    cout<<"Price: ";
    cin>>price;
  }
  void setdata()
  {
    cout<<"Title: "<<title<<endl<<"Price: "<<price<<endl;
    cin.ignore();
  }
};
class book : public publisher
{
  int pages;
public:
  void getdata()
  {
    publisher::getdata();
    cout<<"Enter Number of Pages: ";
    cin>>pages;
  }
  void setdata()
  {
    publisher::setdata();
    cout<<"Page Count for your Book: "<<pages<<endl;
  }
};
class tape : public publisher
{
  int hour, minute, second;
public:
  void getdata()
  {
    publisher::getdata();
    cout<<"Enter Play Time for your Casette: Enter Hour , Minute , Second: ";
    cin>>hour>>minute>>second;
  }
  void setdata()
  {
    publisher::setdata();
    cout<<"Play Time: "<<hour<<" Hour "<<minute<<" Minute "<<second<<" Second.";
  }
};
int main()
{
  book book1;
  tape tape1;
  cout<<"YOU ARE ENTERING INFORMATION OF BOOK:"<<endl;
  book1.getdata();
  book1.setdata();
  cout<<"YOU ARE ENTERING INFORMATION OF CASETTE:"<<endl;
  tape1.getdata();
  tape1.setdata();
  return 0;
}
