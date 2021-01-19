#include <iostream>
#include "Contact.hpp"

int     main()
{
    int loop;
    std::string command;

    loop = 1;
    while (loop)
    {
        std::cin >> command;
        if (command == "EXIT")
        {
            std::cout << "On exit mdr" << std::endl;
            return (0);
        }
    }
    return (0);
}