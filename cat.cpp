#include "cat.h"

Cat::Cat()
{

}

std::string Cat::putMeat(Bowl *bowl){
    this->meat = "さかな";
    bowl->meat = this->meat;

    return this->meat;
}

std::string Cat::putVegitables(Bowl *bowl){
    this->vegitable  = "わかめ";
    bowl->vegitable = vegitable;

    return this->vegitable;
}

std::string Cat::putSoupStock(Bowl *bowl){
    this->stock  = "あごだし";
    bowl->soupStock = stock;

    return this->stock;
}

std::string Cat::getSoup(Bowl *bowl){
    return this->soup;
}

std::string Cat::getMeat(){
    return this->meat;
}

std::string Cat::getVegitables(){
    return this->vegitable;
}

std::string Cat::getSoupStock(){
    return this->stock;
}

