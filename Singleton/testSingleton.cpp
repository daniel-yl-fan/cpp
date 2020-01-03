#include "singleton.h"
#include <iostream>
int main(){
    for( unsigned int i = 0; i < 10; ++i){
        Singleton* singletonInstance = Singleton::getInstance();
        std::cout << "singletonInstance=" << singletonInstance << std::endl;
    }
}
