#include <bits/stdc++.h>
using namespace std;

class Human
{
    public:
    int height;
    int age;
    int weight;

    public:
    int getAge()
    {
        return this->age;
    }

    int setWeight(int w)
    {
        this->weight = w;
    }
};

class Male: public Human  // inheritance
{
    public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};

int main()
{
    Male object1;

    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;

    object1.setWeight(70);

    cout << object1.weight << endl;

    object1.sleep();
}