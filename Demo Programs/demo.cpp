// Made by Anuraag Biswas, B.Tech CSBS (powered by TCS), Roll no. 1811100002038

#include<iostream>
using namespace std;

class Meter;

class Distance
{
int feet;
int inches;
public: Distance()
{
feet=0;
inches=0;
}

Distance(int d)
{
feet=d;
inches=0;


}
Distance(int f, int i)
{
feet=f;

while(i>=12)
{
feet++;
i=i-12;
}

inches=i;
}

Distance(Distance &obj)
{
feet=obj.feet;
inches=obj.inches;
}

void input()
{
cout<<"Enter feet: ";
cin>>feet;
cout<<"Enter inches: ";
cin>>inches;

}

void display()
{
cout<<"The Distance is "<<feet<<"'"<<inches<<"''";
}

Distance add(Distance a, Distance b)
{

feet=a.feet+b.feet;

int feet=a.inches+b.inches;
while(feet>=12)
{
feet++;
feet=feet-12;
}

inches=feet;
}

void operator=(Meter obj);

operator float() const
{
return feet+(inches/12);
}

operator int() const
{
return feet;
}

operator Meter() const;

friend ostream & operator << (ostream &out, const Distance &f)
{
out << f.feet<<f.inches;
return out;
}

friend istream & operator >> (istream &in,  Distance &f)
{
in >> f.feet>>f.inches;
return in;
}

friend bool operator > (const Distance &a, const Distance &b)
{
if(a.feet>b.feet)
return (a.feet>b.feet);
else if(a.feet==b.feet)
return (a.inches>b.inches);

}

friend bool operator < (const Distance &a, const Distance &b)
{
if(a.feet<b.feet)
return (a.feet<b.feet);
else if(a.feet==b.feet)
return (a.inches<b.inches);

}


friend bool operator >= (const Distance &a, const Distance &b)
{
  if(a.feet>b.feet)
    return (a.feet>=b.feet);
  else if(a.feet==b.feet)
    return (a.inches>=b.inches);
  if(a.feet>b.feet)
    return (a.feet<=b.feet);
  else if(a.feet==b.feet)
    return (a.inches<=b.inches);
}

friend bool operator != (const Distance &a, const Distance &b)
{
if(a.feet!=b.feet)
return (a.feet!=b.feet);
else if(a.feet==b.feet)
return (a.inches!=b.inches);
}

friend bool operator == (const Distance &a, const Distance &b)
{

if(a.feet==b.feet)
return (a.inches==b.inches);
}

friend class Meter;

};

class Meter
{
int mt;
int cm;
public: Meter()
{
mt=0;
cm=0;
}

Meter(int d)
{
mt=d;
cm=0;


}
Meter(int f, int i)
{
mt=f;

while(i>=100)
{
mt++;
i=i-100;
}

cm=i;
}

Meter(Meter &obj)
{
mt=obj.mt;
cm=obj.cm;
cout<<"Enter mt: "; cin>>mt; cout<<"Enter cm: "; cin>>cm;

}

void display()
{
cout<<"The Meter is "<<mt<<"'"<<cm<<"''";
}

Meter add(Meter a, Meter b)
{

mt=a.mt+b.mt;

int mt=a.cm+b.cm;

while(mt>=100)
{
mt++;
mt=mt-100;
}

cm=mt;

}

void operator=(Distance obj)
{
mt=obj.feet/3.281;
cm=obj.inches*2.54;
}

operator float() const
{
return mt+(cm/100);
}

operator int() const
{
return mt;
}

operator Distance() const
{
Distance d; d.feet=mt*3.281; d.inches=cm/2.54;

return d;
}

friend ostream & operator << (ostream &out, const Meter &f)
{
out << f.mt<<f.cm;
return out;
}

friend istream & operator >> (istream &in,  Meter &f)
{
in >> f.mt>>f.cm;
return in;
}
friend bool operator > (const Meter &a, const Meter &b)
{
if(a.mt>b.mt)
return (a.mt>b.mt);
else if(a.mt==b.mt)
return (a.cm>b.cm);

}

friend bool operator < (const Meter &a, const Meter &b)
{
if(a.mt<b.mt)
return (a.mt<b.mt);
else if(a.mt==b.mt)
return (a.cm<b.cm);

}


friend bool operator >= (const Meter &a, const Meter &b)
{
if(a.mt>b.mt)
return (a.mt>=b.mt);
else if(a.mt==b.mt)
return (a.cm>=b.cm);
}

friend bool operator <= (const Meter &a, const Meter &b)
{
if(a.mt>b.mt)
return (a.mt<=b.mt);
else if(a.mt==b.mt)
return (a.cm<=b.cm);
}

friend bool operator != (const Meter &a, const Meter &b)
{
if(a.mt!=b.mt)
return (a.mt!=b.mt);
else if(a.mt==b.mt)
return (a.cm!=b.cm);
}

friend bool operator == (const Meter &a, const Meter &b)
{

if(a.mt==b.mt)
return (a.cm==b.cm);
}

friend class Distance;

};

void Distance::operator=(Meter obj)
{
feet=obj.mt*3.281;
inches=obj.cm/2.54;
}

Distance::operator Meter() const
{
Meter m; m.mt=feet/3.281; m.cm=inches*2.54;
return m;
}

int main()
{
Distance d1,d2(5,9),d3(d2); Meter m1,m2(34,49),m3(m2);

cout<<m1<<endl;
m1=d2;
cout<<m1;
return 0;
}
