#include <iostream>
#include <fstream>
int main() 
{
    std::ifstream file("myfile.txt");
    if (!file.is_open()) 
    {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(file, line)) 
    {
        std::cout << line << std::endl;
    }
    file.close();
     return 0;
}