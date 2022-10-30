#include "bear.h"

Bear::Bear()
{

}

std::string Bear::putMeat(Bowl *bowl){
    this->meat = "鹿肉";
    bowl->meat = this->meat;

    return this->meat;
}

std::string Bear::putVegitables(Bowl *bowl){
    this->vegitable  = "キャベツ";
    bowl->vegitable = vegitable;

    return this->vegitable;
}

std::string Bear::putSoupStock(Bowl *bowl){
    this->stock  = "はちみつ";
    bowl->soupStock = stock;

    return this->stock;
}

std::string Bear::getSoup(Bowl *bowl){
    return this->soup;
}

std::string Bear::getMeat(){
    return this->meat;
}

std::string Bear::getVegitables(){
    return this->vegitable;
}

std::string Bear::getSoupStock(){
    return this->stock;
}

