#include "rabbit.h"

Rabbit::Rabbit()
{

}

std::string Rabbit::putMeat(Bowl *bowl){
    this->meat = "大豆ミート";
    bowl->meat = this->meat;

    return this->meat;
}

std::string Rabbit::putVegitables(Bowl *bowl){
    this->vegitable  = "にんじん";
    bowl->vegitable = vegitable;

    return this->vegitable;
}

std::string Rabbit::putSoupStock(Bowl *bowl){
    this->stock  = "コンソメ";
    bowl->soupStock = stock;

    return this->stock;
}

std::string Rabbit::getSoup(Bowl *bowl){
    return this->soup;
}

std::string Rabbit::getMeat(){
    return this->meat;
}

std::string Rabbit::getVegitables(){
    return this->vegitable;
}

std::string Rabbit::getSoupStock(){
    return this->stock;
}
