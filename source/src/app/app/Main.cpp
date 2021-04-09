
#include <iostream>
#include <defines.h>
#ifdef USE_MYMATH
    #include <MyMath.hpp>
#endif

int main(int argc, char const *argv[])
{
    std::cout << "Main App" << std::endl;

    #ifdef USE_MYMATH
        std::cout << "5 + 2 = " << mySum(5, 2) << std::endl;
    #endif

    std::cout << "MY_VAR : " << MY_VAR << std::endl;

    return 0;
}
