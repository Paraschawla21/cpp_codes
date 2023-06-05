#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    Hero()
    {
        cout << "default constructor" << endl;
        name = new char[100];
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // deep copy // copy constructor
    Hero(Hero &temp) {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << endl << "copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print() {
        cout << endl;
        cout << "[Name: " << this->name << ", ";
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << "]";
        cout << endl;
    }

    int getHealth() {
        return health;
    }

    void setHealth(int h) {
        health = h;
    }

    char getLevel() {
        return level;
    }

    void setLevel(char l) {
        level = l;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }
};

int main()
{
    Hero hero1;

    hero1.setHealth(70);
    hero1.setLevel('A');
    char name[7] = "Paras";
    hero1.setName(name);
    hero1.print();

    // shallow copy or default copy constructor

    Hero hero2(hero1);
    hero2.print();

    // another way

    Hero hero3 = hero1;

    hero1.name[3] = 'i';
    hero1.print();

    hero2.print();  // shallop copy concept

    // hero1 = hero2 // copy assignment operator
}