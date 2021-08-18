#include<iostream>
using namespace std;
template<class T>
class stack
{
  T *arr;
  int top,size;
public:
  stack(int);
  void push(T t);
  T pop();
  int display();
  bool is_empty();
  bool is_full();
};

template <class T>
stack<T>::stack(int capacity)
{
  arr = new T(size);
  size = capacity;
  top=-1;
}

template <class T>
void stack<T>::push(T t)
{
  if(!is_full())
  {
      cout << "Inserting " <<t<<endl;
      arr[++top]=t;
  }
  else
    cout<<"Stack Overflow"<<endl;
}

template<class T>
T stack<T>::pop()
{
  if(!is_empty())
  {
      cout << "Removing " <<arr[top]<<endl;
      return arr[top--];
  }
  else
      cout<<"Stack Underflow"<<endl;
}

template <class T>
int stack<T>::display()
{
	int i;
	if(top==-1)
        cout<<"The Stack is Empty"<<endl;
	else
	{
		cout<<"The Stack is -> ";
		for(i=top;i>=0;--i)
        {
            cout<<arr[i]<<" ";
        }
    }
        cout<<endl;
}

template<class T>
bool stack<T>::is_full()
{
  return top==size-1;
}

template<class T>
bool stack<T>::is_empty()
{
  return top==-1;
}

int main()
{
  stack<int> s(6);
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(6);
  s.display();
  s.pop();
  s.pop();
  s.display();
  return 0;
}
