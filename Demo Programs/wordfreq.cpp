#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  ifstream in;
  in.open("E:/C++/textfile.txt");
  string words;
  vector<string> string_holder;
  while(in>>words)
  {
    string_holder.push_back(words);
  }
  cout<<"READ FROM ORIGINAL FILE AS: "<<endl;
  for(int i=0;i<string_holder.size();i++)
  {
    cout<<string_holder[i]<<" ";
  }
  cout<<endl<<endl;
  sort(string_holder.begin(),string_holder.end());
  cout<<"AFTER SORTING IT BECAME: "<<endl;
  for(int i=0;i<string_holder.size();i++)
  {
    cout<<string_holder[i]<<" ";
  }
  cout<<endl<<endl;
  int wordcount=1;
  words=string_holder[0];
  cout<<"FREQUENCY LIST:- "<<endl<<"-----------------"<<endl;
  for(int i=1;i<string_holder.size();i++)
  {
    if (words!=string_holder[i])
    {
      cout<<"'"<<words<<"'"<<" appeared "<<wordcount<<" times "<<endl;
      wordcount=0;
      words= string_holder[i];
    }
    wordcount++;
  }
  cout<<"'"<<words<<"'"<<" appeared "<<wordcount<<" times "<<endl;
  return 0;
}
