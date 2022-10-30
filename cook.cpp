#include "cook.h"

Cook::Cook()
{

}

std::string Cook::cookSoup(){
    std::string result = "";

    Bowl *bowl = new Bowl();
    putMeat(bowl);
    putVegitables(bowl);
    putSoupStock(bowl);

    return getSoup(bowl);
}
