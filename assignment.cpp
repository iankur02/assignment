#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int rollno;
    int semester;
    int age;
    int reg_no;
    string parentage;
    int attendance;
    int marks[5];

public:
    void get_details()
    {
        cout << "Enter Student Details 1.Name 2.Parentage 3.Semester 4.Rollno 5.Age 6.Registration Number 7.Attendance ";
        getline(cin, name);
        getline(cin, parentage);
        cin >> semester;
        cin >> rollno;
        cin >> age;
        cin >> reg_no;
        cin >> attendance;
    }
    void show_details()
    {
        cout << name << " " << parentage << " " << semester << " " << rollno << " " << age << " " << reg_no << " " << attendance;
    }
    void show_names()
    {
        cout << " student name is " << name << endl;
    }
    void show_rollno()
    {
        cout << "Roll no is " << rollno << endl;
    }
    void show_attendance(int a)
    {
        cout << "Attendance is " << a << endl;
    }
    void shortage(int a)
    {
        float total = 50.0;
        float shortage;
        shortage = (a / total);
        shortage *= 100;
        cout << "Name is " << name << endl
             << "Roll no is " << rollno << endl
             << "shortage is " << shortage << endl;
        if (shortage > 75)
        {
            cout << "This student is not under shortage" << endl;
        }
        else
        {
            cout << "This student is under Shortage" << endl;
        }
    }
    void show_marks()
    {
        cout << "Enter Marks 1.english 2.hindi 3.maths 4.social science 5.science";
        float totalmarks = 500.0;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }
        float result;
        result = (sum / totalmarks);
        result = result * 100;

        cout << "Percentage is " << result;
    }
};

int main()
{
    student s1;

    s1.get_details();
    s1.show_details();
    s1.show_names();
    s1.show_rollno();
    s1.show_attendance(45);
    s1.shortage(45);
    s1.show_marks();

    return 0;
}