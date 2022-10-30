#ifndef COOK_H
#define COOK_H

#include <string>
#include "bowl.h"

class Cook
{
public:
    Cook();
    virtual std::string putMeat(Bowl *bowl) = 0;
    virtual std::string putVegitables(Bowl *bowl) = 0;
    virtual std::string putSoupStock(Bowl *bowl) = 0;
    virtual std::string getSoup(Bowl *bowl) = 0;
    std::string cookSoup();
};

#endif // COOK_H
