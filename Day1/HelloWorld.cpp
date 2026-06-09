#include <iostream>
#include <limits>

int main()
{
    std::cout << "Hello, World!";
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // ignore any characters in the input buffer until we find a newline
    std::cin.get();
    // waits for the user to press a key,(gets one more char from the user)
    return 0;
}
