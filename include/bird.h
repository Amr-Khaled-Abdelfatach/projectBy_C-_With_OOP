#ifndef BIRD_H
#define BIRD_H

#include <animals.h>

class bird : public animals
{
private:
    float flying_space;
    public:
        void setflying_space(float f);
        float getflying_space();
        bird();
        ~bird();


};

#endif // BIRD_H
