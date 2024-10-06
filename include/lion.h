#ifndef LION_H
#define LION_H

#include <animals.h>

class lion : public animals
{
private:
    float the_speed;

    public:
      void setthe_speed(float s);
      float getthe_speed();
        lion();
        ~lion();



};

#endif // LION_H
