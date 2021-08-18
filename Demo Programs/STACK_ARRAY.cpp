#include<iostream>
using namespace std;
template<class T>
class array
{
protected:
  T *ptr;
  int arraysize;
public:
  array(T arr[], int s)
  {
    ptr = new T[s];
    arraysize = s;
    for(int i=0; i<arraysize; i++)
      ptr[i] = arr[i];
  }
  void array_insert(int pos, T item)
  {
    ptr[pos] = item;
  }
  void arrayremove(int pos)
  {
    ptr[pos]=0;
  }
  T retrieve(int pos)
  {
    return ptr[pos];
  }
  void bubblesort()
  {
    for(int i=0;i<arraysize-1;i++)
    {
      for(int j=0;j<arraysize-1-i;j++)
      {
        if(ptr[j]>ptr[j+1])
        {
          T temp = ptr[j];
          ptr[j] = ptr[j+1];
          ptr[j+1] = temp;
        }
      }
    }
  }
};
template<class T>
class stack : public array<T>
{
  int top;
public:
  void push(int item)
  {
    if(top>=(this->arraysize-1))
    {
      cout<<"stack Underflow";
    }
    else
    {
      this->ptr[++top] = item;
      cout<<"Inserting "<<item;
    }
  }
  T pop()
  {
    if(top<0)
    {
      cout<<"stack Underflow";
      return 0;
    }
    else
    {
      T item = this->ptr[top--];
      return item;
    }
  }
    T peek()
    {
      if(top<0)
      {
        cout<<"Stack Underflow";
        return 0;
      }
      else
      {
        T x = this->ptr[top];
        return x;
      }
    }
  };
int main()
  {
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.pop();
    return 0;
  }
