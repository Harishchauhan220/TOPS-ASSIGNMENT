#include<iostream>
using namespace std;
class student
{
    protected:
    string name;
    string name_2;
    int roll_no;
    int roll_no2;

    public:

    void info()
    {
        name="*PATANGBAAZ*";
        name_2="*TOPIBAAZ*";
        roll_no=1;
        roll_no2=2;
    }
};
class test : public student
{
    protected:
    int english_marks=99,english_marks2=98;
    int maths_marks=80,maths_marks2=90;
    public:

    // void data()
    // {
    //     cout<<"name : "<<name<<endl;
    //     cout<<"Roll no : "<<roll_no<<endl;
    //     cout<<"ENGLISH : "<<english_marks<<endl;
    //     cout<<"MATHS : "<<maths_marks<<endl;

        
    //     cout<<"name : "<<name_2<<endl;
    //     cout<<"Roll no : "<<roll_no2<<endl;
    //     cout<<"ENGLISH : "<<english_marks2<<endl;
    //     cout<<"MATHS : "<<maths_marks2<<endl;
    // }
};
class Result : public test
{
    protected:
    int total_student1=english_marks+maths_marks;
    int total_student2=english_marks2+maths_marks2;

    public:

    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"Roll no : "<<roll_no<<endl;
        cout<<"ENGLISH : "<<english_marks<<endl;
        cout<<"MATHS : "<<maths_marks<<endl;
        cout<<"TOTAL MARKS : "<<total_student1<<endl;

        
        cout<<"name : "<<name_2<<endl;
        cout<<"Roll no : "<<roll_no2<<endl;
        cout<<"ENGLISH : "<<english_marks2<<endl;
        cout<<"MATHS : "<<maths_marks2<<endl;
        cout<<"TOTAL MARKS : "<<total_student2<<endl;
    }
};
int main()
{
    Result r;
    r.info();
    r.display();
}