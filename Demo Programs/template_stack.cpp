// Progran by Sagnik Mitra, B.Tech, CSBS, SNU, Regn. No. 180020278185
#include<iostream>
#define arraysize 10
using namespace std;

template <class T>
class Array
{
protected:
	  T *ptr;
	  int top;
public:
	Array()
	{    ptr = new T[arraysize];
		   top=0;
	}

	void insert(int pos,T item)
	{
		 if(pos<arraysize)
		 {
		 	ptr[pos]=item;
		 	this->top++;
		 	cout<<"Inserting "<<item<<endl;
		 }

		 else
		 {
		 	cout<<"Stack Overflow\n";
		 }
	}

	void remove(int pos)
	{
		if(pos < this->top)
		{
			cout<<ptr[pos]<<" is deleted\n";
			for(int i=pos;i<=arraysize;i++)
			{
				ptr[i]=ptr[i+1];
			}
			this->top--;
		}
		else
			cout<<"Stack Underflow";
	}

	void retrieve(int pos)
	{
		if(pos<this->top)
		{
			 cout<<ptr[pos]<<endl;
		}

		else
			cout<<"Stack Under flow";
	}

	void display()
	{
		for(int i=0;i<this->top;i++)
		{
			cout<<ptr[i]<<endl;
		}
	}

  void sort()
  {
    for(int i=1;i<top;i++)
    {
      for(int j=0;j<top-i;j++)
      {
        if(ptr[j]>ptr[j+1])
        {
          T temp = ptr[j];
          ptr[j] = ptr[j+1];
          ptr[j+1] = temp;
        }
      }
    }
    display();
  }
};
class stack
{
	protected:
		Array<int> arr;
		int top;
	public:
		   stack()
		   {
		   	this->top=-1;
		   }
		void push(int item)
		{
			 arr.insert(++top,item);
		}

		void pop()
		{
			arr.remove(top--);
		}

		void peek()
		{
			cout<<"\ntop element:";
			arr.retrieve(top);
		}

		void stacksort()
		{
      cout<<"The Sorted Stack is: "<<endl;
			arr.sort();
		}
};
int main()
{
	stack s;
	s.push(7);
	s.push(8);
 	s.push(5);
	s.push(6);
  s.push(10);
	s.peek();
	s.pop();
	s.pop();
	s.stacksort();
	cout<<endl;
}
