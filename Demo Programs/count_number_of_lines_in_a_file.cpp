#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void countwords();
int main ()
{
string s;
int sTotal=0;
ifstream in;
in.open("E:/C++/inf.txt");
while(!in.eof()) {
	getline(in, s);
	sTotal ++;
}
cout <<"Number of Lines in the File are: "<<sTotal<<endl;
in.close();
countwords();
return 0;
}
void countwords()
{
	ifstream in;
	in.open("E:/C++/inf.txt");
	char word[30];
	int count=0;
	while(!in.eof())
	{
		in>>word;
		count++;
	}
	cout<<"Number of Words in the File are: "<<count;
	in.close();
}
