#include <iostream>
#include <fstream>

#include <string>


int main(int argc, char *argv[])
{
    std::ifstream input(argv[1]);
    std::ofstream output(argv[2]);
    std::string line;
    while (std::getline(input, line))
    {
        line += "!";
        output << line << "\n";
    }

    input.close();
    output.close();

    return 0;
}