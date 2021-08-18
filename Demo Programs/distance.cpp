/*Create a class distance{feet,inches}: Operations - Default Constructor,
One-Argument Constructor(Distance - int, Distance - float)), two Argument Constructor,
Copy Constructor, input, display, add, covert to metre (Use Operator Overloading).
Overload Casting operators to convert class distance to feet (float) or inches (integer)
and to another class metre (mt.,cm.). Operators are >, >=, <, <=, <<, >>, != */
#include<iostream>
using namespace std;
class distance
{
  int feet;
  int inches;
public:
    distance();
    distance(int inches);
    distance(int inches, int feet);
    distance(const distance &obj);
    distance(float feet);
    distance(meter &obj);
    friend istream &operator<<(istream &in, distance &obj);
    friend ostream &operator<<(ostream &out, const distance &obj);
    friend distance operator +(const distance &obj1, const distance &obj1);
    //operator int();
    //operator float();
    bool operator > (const distance &obj);
    bool operator < (const distance &obj);
    bool operator >= (const distance &obj);
    bool operator <= (const distance &obj);
    bool operator == (const distance &obj);
    bool operator != (const distance &obj);
};
class meter
{
  int meter;
  int centimeter;
public:
  meter();
  meter(int centimeter);
  meter(int meter, int centimeter);
  meter(const meter &obj);
  meter(float meter);
  meter(distance &obj);
  friend istream &operator<<(istream &in, meter &obj);
  friend ostream &operator<<(ostream &out, const meter &obj);
  friend meter operator+(const meter &obj);
  //operator int();
  //operator float();
  bool operator > (const meter &obj);
  bool operator < (const meter &obj);
  bool operator >= (const meter &obj);
  bool operator <= (const meter &obj);
  bool operator == (const meter &obj);
  bool operator != (const meter &obj);
};
distance::distance()
{
  inches = 60;
  feet = 5;
}
distance::distance(int inches)
{
  int ft=0;
  while((inches/12)!=0)
  {
    ft+=(inches/12);
    inches=inches%12;
  }
  this->inches=inches;
  this->feet=ft;
}
distance::distance(int inches, int feet)
{
  this->inches=inches;
  this->feet=feet;
}
distance::distance(const distance &obj)
{
  this->inches=obj.inches;
  this->feet=obj.feet;
}
distance::distance(float feet)
{
  this->feet=(int)feet;
  this->inches=12*this->feet;
}
distance::distance(meter &obj)
{
  int cm;
  cm=(int)obj;
  cm/=2.54;
  distance dist(cm);
  this->inches=dist.inches;
  this->feet=dist.feet;
}
istream &operator<<(istream &in, distance &obj)
{
  in>>obj.inches;
  in>>obj.feet;
  return in;
}
ostream &operator<<(ostream &out, const distance &obj)
{
  out<<obj.inches;
  out<<obj.feet;
  return out;
}
distance operator+(const distance &obj1, const distance &obj2)
{
  distance dist;
  dist.inches=obj1.inches+obj2.inches;
  dist.feet=obj1.feet+obj2.feet;
  return dist;
}
bool distance::operator > (const distance &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a>b;
}
bool distance::operator < (const distance &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a<b;
}
bool distance::operator >= (const distance &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a>=b;
}
bool distance::operator <= (const distance &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a<=b;
}
bool distance::operator == (const distance &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a==b;
}
bool distance::operator != (const distance &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a!=b;
}
meter::meter()
{
  centimeter = 600;
  meter = 6;
}
meter::meter(int centimeter)
{
  int mt=0;
  while((centimeter/100)!=0)
  {
    mt+=(centimeter/100);
    centimeter=centimeter%100;
  }
  this->centimeter=centimeter;
  this->meter=meter;
}
meter::meter(int meter, int centimeter)
{
  this->centimeter=centimeter
  this->meter=meter;
}
meter::meter(const meter &obj)
{
  this->centimeter=obj.centimeter
  this->meter=obj.meter;
}
meter::meter(float meter);
{
  this->meter=(int)meter;
  this->centimeter=100*this->meter;
}
meter::meter(distance &obj)
{
  int dist;
  dist = (int)cm;
  dist = dist/0.393;
  meter cm(dist);
  this->centimeter = cm.centimeter;
  this->meter = cm.meter;
}
istream &operator<<(istream &in, meter &obj)
{
  in>>obj.centimeter;
  in>>obj.meter;
  return in;
}
ostream &operator<<(ostream &out, const meter &obj)
{
  out<<obj.centimeter;
  out<<obj.meter;
  return out;
}
meter operator+(const meter &obj1, const meter &obj2)
{
  meter cm;
  cm.centimeter=obj1.centimeter+obj2.centimeter;
  cm.meter=obj1.meter+obj2.meter;
  return cm;
}
//meter::operator int()
//{
  //this->centimeter=(this->centimeter/100)+this->centimeter;
  //return this->centimeter;
  //I HAVE DOUBT WHETHER IT IS CORRECT
//}
//meter::operator float()
//{
  //this->meter=(this->meter*100)+this->meter;
  //return this->meter;
  //I HAVE DOUBT WHETHER IT IS CORRECT
//}
bool meter::operator > (const meter &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a>b;
}
bool meter::operator < (const meter &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a<b;
}
bool meter::operator >= (const meter &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a>=b;
}
bool meter::operator <= (const meter &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a<=b;
}
bool meter::operator == (const meter &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a==b;
}
bool meter::operator != (const meter &obj)
{
  int a,b;
  a = (int)*this;
  b = (int)obj;
  return a!=b;
}
int main()
{
  distance dist1(), dist2(), dist3(), dist4(), dist5;
  meter mt1(), mt2(), mt3(), mt4(), mt5;
  cout<<dist1<<endl<<dist2<<endl<<dist3<<endl<<dist4<<endl<<dist5<<endl;
  dist2=(distance)mt3;
  if(dist2>mt3)
    cout<<dist2<<" is greater than "<<mt3<<"."<<endl;
  else if(dist2==mt3)
    cout<<dist2<<" is equal to "<<mt3<<"."<<endl;
  else
    cout<<dist2<<" is lesser than "<<mt3<<"."<<endl;
  cout<<mt1<<end<<mt2<<endl<<mt3<<endl<<mt4<<endl<<mt5<<endl;
  mt2=(meter)dist3;
  if(dist3>mt2)
    cout<<dist3<<" is greater than "<<mt2<<"."<<endl;
  else if(dist3==mt2)
    cout<<dist3<<" is equal to "<<mt2<<"."<<endl;
  else
    cout<<dist3<<" is lesser than "<<mt2<<"."<<endl;
  return 0;
}
