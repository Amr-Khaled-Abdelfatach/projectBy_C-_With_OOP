#include "bird.h"

bird::bird()
{
    //ctor
}

bird::~bird()
{
    //dtor
}

void bird::setflying_space(float f){
   flying_space = f;
   cout << "The flying spece area is "<<f <<"Km"<<endl;
}
float bird :: getflying_space(){
    return flying_space;
}

