#ifndef FISH_H
#define FISH_H

#include <animals.h>

class fish : public animals
{
private:
    float swimming;


    public:
        void setswimmig(float sw);
        float getswimming();
        fish();
        ~fish();


};

#endif // FISH_H
