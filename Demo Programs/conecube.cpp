#include<iostream>
#include<cmath>
using namespace std;
class shape
{
public:
  virtual void input() = 0;
  virtual float area() = 0;
  virtual float volume() = 0;
};
class cube:public shape
{
  float side,volumecube,areacube;
public:
  void input(void)
  {
    cout<<"Enter the size of the Side: ";
    cin>>side;
  }
  float volume()
  {
    volumecube = side*side*side;
    cout<<"Volume of Cube: "<<volumecube<<endl;
    return volumecube;
  }
  float area()
  {
    areacube = 6*side*side;
    cout<<"Area of Cube: "<<areacube<<endl;
    return areacube;
  }
};
class cone:public shape
{
  float radius, obliqueheight, slantheight,volumecone,areacone;
public:
  void input(void)
  {
    cout<<"Enter radius & obliqueheight: ";
    cin>>radius>>obliqueheight;
    slantheight = sqrt(pow(radius,2)+pow(obliqueheight,2));
  }
  float volume()
  {
    volumecone = (3.1514*radius*radius*obliqueheight)/3;
    cout<<"Volume of Cone: "<<volumecone<<endl;
    return volumecone;
  }
  float area()
  {
    areacone = 3.1514*radius*slantheight;
    cout<<"Area of Cone: "<<areacone<<endl;
    return areacone;
  }
};
int main()
{
  int i;
  shape *ptr[4];
  ptr[0] = new cube;
  ptr[1] = new cube;
  ptr[2] = new cone;
  ptr[3] = new cone;
  for(i=0;i<4;i++)
  {
    ptr[i]->input();
    ptr[i]->volume();
    ptr[i]->area();
  }
  return 0;
}
