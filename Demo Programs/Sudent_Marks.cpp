#include<iostream>
#include<string.h>
using namespace std;

class student
{
        int rollno, no_of_subjects;
        char stud_name[20];
        int *marks;
    public:
        student(int rno,char *name, int nos)        //Parameterized Constructor
        {
                rollno=rno;
                strcpy(stud_name, name);
                no_of_subjects=nos;
                marks=new int[no_of_subjects];   //dynamically memory allocated for storing marks
        }
        void getdata();
        void displaydata();
};
void student::getdata()
{
        for(int i=0; i<no_of_subjects; i++)
        {
                cout<<"Enter Marks for Subject "<<i+1<<"  :  ";
                cin>>marks[i];
        }
}
void student::displaydata()
{
        cout<<"\nStudent Information"<<endl;
        cout<<"Roll no:  "<<rollno;
        cout<<"Name:  "<<stud_name;
        for(int i=0; i<no_of_subjects; i++)
        {
                cout<<"\nMarks of Subject "<<i+1<<"  :  "<<marks[i];
        }
        cout<<endl;
}
int main()
{
        int rollno, no_of_subjects;
        char stud_name[20];
        int count, i;
        cout<<"Enter No. of Students: ";
        cin>>count;
        for(i=0; i<count; i++)
        {
                cout<<"\n\nEnter Roll No:   ";
                cin>>rollno;
                cout<<"Enter Name:   ";
                cin>>stud_name;
                cout<<"Enter No. of Subjects:   ";
                cin>>no_of_subjects;
                student st(rollno, stud_name, no_of_subjects);
                st.getdata();
                st.displaydata();
        }
        return 0;
}
