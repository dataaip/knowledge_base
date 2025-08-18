#include <iostream>

auto main(int argc, char** argv) -> int
{

#ifdef Debug
    std::cout << "This is a Debug version." << std::endl;
#else
    std::cout << "This is a Release version." << std::endl;
#endif

    return 0;
}