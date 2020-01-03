#include <mutex>

class Singleton{
    public:
        static Singleton* getInstance( void);
        static std::mutex singletonMutex;
    private:
        Singleton( void){};
        ~Singleton( void){};
        //TOOO, copy constructor & assign constructor
        static Singleton* singletonInstance;
};
