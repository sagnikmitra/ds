#include <iostream>
using namespace std;
#define SIZE 10
template <class T>
class queue
{
	T *arr;
	int capacity;
	int front;
	int rear;
	int count;
public:
	queue(int size = SIZE);
	void dequeue();
	void enqueue(T t);
	T peek();
	int size();
	int display();
	bool is_empty();
	bool is_full();
};
template <class T>
queue<T>::queue(int size)
{
	arr = new T[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}
template <class T>
void queue<T>::dequeue()
{
	if (!is_empty())
	{
	    cout << "Removing " << arr[front] << '\n';
        front++;
        count--;
    }
    else
		cout << "Stack Underflow"<<endl;
}
template <class T>
void queue<T>::enqueue(T t)
{
	if (!is_full())
	{
	    cout << "Inserting " <<t<<endl;
        rear = (rear + 1) % capacity;
        arr[rear] = t;
        count++;
    }
    else
        cout << "Stack Overflow";
}
template <class T>
T queue<T>::peek()
{
	if (is_empty())
		cout << "Stack Underflow";
	return arr[front];
}
template <class T>
int queue<T>::size()
{
	return count;
}
template <class T>
int queue<T>::display()
{
    int i;
        if (front == rear)
        {
            cout<<"Queue is Empty"<<endl;
        }
        cout<<"The Queue is -> ";
        for (i = front; i <=rear; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}
template <class T>
bool queue<T>::is_empty()
{
	return (size() == 0);
}
template <class T>
bool queue<T>::is_full()
{
	return (size() == capacity);
}
int main()
{
	queue<int> q(4);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.display();
	cout << "Front element is: " << q.peek() << endl;
	q.dequeue();
	q.display();
	q.enqueue(4);
	q.display();
	cout << "Queue size is " << q.size() << endl;
  q.dequeue();
	q.dequeue();
	q.display();
	if (q.is_empty())
		cout << "Queue Is Empty\n";
	else
		cout << "Queue Is Not Empty\n";
	return 0;
}
