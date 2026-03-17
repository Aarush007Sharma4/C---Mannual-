#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    int age, roll_number;
    string grade;
    // Function Getter and setter
    public:
    void setname(string s)
    {
        if(s.length()<0)
        {
            cout<<"Name is invalid."<<endl;
        }
        name=s;
    }
    void setage(int a)
    {
        if(a<0){
            cout<<"Age is invalid."<<endl;
        }
        age=a;
    }
    void setroll_number(int r)
    {
        if(r<0)
        {
            cout<<"Roll number is invalid."<<endl;
        }
        roll_number=r;
    }
    void setgrade(string g)
    {
        if(g.length()<0)
        {
            cout<<"Grade is invalid."<<endl;
        }
        grade=g;
    }
    void getname()
    {    
        cout<<"Name: "<<name<<endl;
    }
    void getage()
    {
        cout<<"Age: "<<age<<endl;
    }
    void getroll_number()
    {
        cout<<"Roll Number: "<<roll_number<<endl;
    }
    void getgrade(int pin)
    {
        if(pin!=1234)
        {
            cout<<"Invalid pin. Access denied."<<endl;
            return;
        }
        else
        {
            cout<<"Grade: "<<grade<<endl;
        }
    }

};
int main()
{
    Student S1;
    S1.setname("John");
    S1.setage(20);
    S1.setroll_number(101);
    S1.setgrade("A");
    

    Student S2;
    S2.setname("Alice");
    S2.setage(19);
    S2.setroll_number(102);
    S2.setgrade("B");

    cout<<"Student 1 Details: "<<endl;
    S1.getname();
    S1.getage();
    S1.getroll_number();
    S1.getgrade(1234); // Correct pin to access grade
    cout<<"Student 2 Details: "<<endl;
    S2.getname();
    S2.getage();
    S2.getroll_number();
    S2.getgrade(4321); // Incorrect pin to access grade
}