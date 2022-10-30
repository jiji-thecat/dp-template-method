#ifndef CAT_H
#define CAT_H

#include <string>
#include "cook.h"

class Cat : public Cook
{
public:
    Cat();
    std::string putMeat(Bowl *bowl);
    std::string putVegitables(Bowl *bowl);
    std::string putSoupStock(Bowl *bowl);
    std::string getSoup(Bowl *bowl);

    std::string getMeat();
    std::string getVegitables();
    std::string getSoupStock();

private:
    std::string soup = ":/assets/assets/cat-soup.png";
    std::string meat;
    std::string vegitable;
    std::string stock;
};

#endif // CAT_H
