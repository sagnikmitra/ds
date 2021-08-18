#include <fstream>
#include<iostream>
using namespace std;
int main()
{
   int arr[30];
   ifstream is("E:/C++/integers.txt",ios::in);
   int x,i,j,cnt=0,temp;
   while (cnt < arr[30] &&  is >> x)
   {
     arr[cnt++] = x;
   }
   for(i=0;i<cnt;i++)
	 {
		for(j=i+1;j<cnt;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	 }
   cout<<"The integers are:"<<"\n";
   for (int i = 0; i < cnt; i++)
   {
      cout << arr[i] <<' ';
   }
   is.close();
   ofstream myfile("E:/C++/keep.txt",ios::out|ios::app);
   if (myfile.is_open())
   {
      for(int i = 0; i < cnt; i++)
      {
        myfile << arr[i] << " " ;
      }
      myfile.close();
   }
}
