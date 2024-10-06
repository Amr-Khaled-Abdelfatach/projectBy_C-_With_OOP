#include "animals.h"


animals::animals()
{

}

animals::~animals()
{

}
   //kind of food.
void animals::setkind_of_food(string k){
    kind_of_food = k;
    cout <<"kind of the food for this animal is "<<kind_of_food<<endl;
}
string animals::getkind_of_food(){
return kind_of_food ;
}
   //living place.
void animals::setliving_place(string Ls){
    living_place = Ls;
}
string animals::getliving_place(){
return living_place ;
}
   //The Name.
void animals::setName(string n){
    name = n;
}
string animals::getName(){
   return name;
}
   //The Age.
void animals::setAge(int a){
    age = a;
}
int animals::getAge(){
   return age;
}
