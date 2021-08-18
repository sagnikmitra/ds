#include<iostream>
using namespace std;

class staff
{
protected:
	char staffname[30];
	int staffcode;
public:
	virtual void getdata()
	{
		cout<<"ENTER THE NAME OF THE STAFF: ";
		cin>>staffname;
		cout<<"ENTER THE CODE OF THE STAFF: ";
		cin>>staffcode;
	}
	virtual void displaydata()
	{
		cout<<"NAME OF THE STAFF: "<<staffname<<endl;
		cout<<"CODE OF THE STAFF: "<<staffcode<<endl;
	}
};

class officer : virtual public staff
{
	char gradeofficer;
public:
	void getdata()
	{
    cout<<"NOW YOU ARE ENTERING DATA FOR OFFICER"<<endl;
		staff::getdata();
		cout<<"ENTER GRADE OF THE OFFICER: ";
		cin>>gradeofficer;
	}
	void displaydata()
	{
		staff::displaydata();
		cout<<"GRADE OF THE OFFICER: "<<gradeofficer<<endl;
	}
};

class teacher : virtual public staff
{
	char subject[20];
public:
	void getdata(void)
	{
    cout<<"NOW YOU ARE ENTERING DATA FOR TEACHER"<<endl;
		staff::getdata();
		cout<<"ENTER THE SUBJECT: ";
		cin>>subject;
	}
	void displaydata()
	{
		staff::displaydata();
		cout<<"SUBJECT OF THE TEACHER: "<<subject<<endl;
	}

};

class typist : virtual public staff
{
protected:
	int speed;
public:
	void getdata()
	{
    cout<<"NOW YOU ARE ENTERING DATA FOR TYPIST"<<endl;
		staff::getdata();
		cout<<"ENTER THE SPEED: ";
		cin>>speed;
	}
	void displaydata()
	{
		staff::displaydata();
		cout<<"SPEED OF THE TYPIST: "<<speed<<"WPM"<<endl;
	}
};

class casualtypist : virtual public typist
{
	float dailywages;
public:
	void getdata(void)
	{
    cout<<"NOW YOU ARE ENTERING DATA FOR CASUAL TYPIST "<<endl;
		staff::getdata();
		cout<<"ENTER THE DAILY WAGES: ";
		cin>>dailywages;
	}
	void displaydata()
	{
		staff::displaydata();
		cout<<"DAILY WAGES OF THE CASUAL TYPIST: "<<dailywages<<endl;
	}
};
class regulartypist : virtual public typist
{
	float remuneration;
public:
	void getdata()
	{
    cout<<"NOW YOU ARE ENTERING DATA FOR REGULAR TYPIST"<<endl;
		staff::getdata();
		cout<<"ENTER REMUNERATION: ";
		cin>>remuneration;
	}
	void displaydata()
	{
		staff::displaydata();
		cout<<"REMUNERATION OF THE REGULAR TYPIST: "<<remuneration<<endl;
	}
};

int main()
{
  int i;
	staff *p[5];
	p[0] = new officer;
	p[1] = new teacher;
  p[2] = new typist;
	p[3] = new casualtypist;
	p[4] = new regulartypist;
	for(i=0;i<5;i++)
	{
		p[i]->getdata();
	}
  for(i=0;i<5;i++)
  {
		p[i]->displaydata();
  }

	return 0;
}
