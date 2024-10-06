#ifndef ANIMALS_H
#define ANIMALS_H

#include <iostream>
using namespace std;

class animals
{
private:
    string name;
    int age;
    string living_place; // مكان المعيشة
    string kind_of_food;

    public:
        void setkind_of_food(string k);
        string getkind_of_food();

        void setName(string n);
        string getName();

        void setAge(int a);
        int getAge();

        void setliving_place(string l);
        string getliving_place();

        animals();
        ~animals();


};

#endif // ANIMALS_H
