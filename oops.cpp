#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;

public:
    int age;
    char gender;

    // non parametrized constructor or default constructor

    Student()
    {
        cout << "default constructor called" << endl;
    }

    // parameterized constructor

    Student(string n, int a, char g)
    {
        cout << "parameterized constructor called" << endl;
        this->name = n;
        this->age = a;
        this->gender = g;
    }

    // copy constructor

    Student(Student &s2)
    {
        cout << "copy constructor called" << endl;
        name = s2.name;
        age = s2.age;
        gender = s2.gender;
    }

    void set_name(string str)
    {
        name = str;
    }

    void print_info()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    Student s[n];

    for (int i = 0; i < n; i++)
    {
        string str;
        cout << "Name = ";
        cin >> str;
        s[i].set_name(str);
        cout << "Age = ";
        cin >> s[i].age;
        cout << "Gender = ";
        cin >> s[i].gender;
    }

    for (int i = 0; i < n; i++)
    {
        s[i].print_info();
    }

    // constructor concept

    Student s3; // default constructor

    Student s2("paras", 20, 'm');
    s2.print_info();

    Student s4 = s2; // copy constructor
    return 0;
}