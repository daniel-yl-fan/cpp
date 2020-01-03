#include "singleton.h"
Singleton* Singleton::singletonInstance = 0;
Singleton* Singleton::getInstance( void){
    if( Singleton::singletonInstance == 0){
        Singleton::singletonMutex.lock();
        if( Singleton::singletonInstance == 0){
            Singleton::singletonInstance = new Singleton;
        }
        Singleton::singletonMutex.unlock();
    }
    return Singleton::singletonInstance;
}

