#include <fstream>
#include <stdlib.h>
#include <iostream>

int main()
{
    
    if(std::ifstream("humbug"))
    {
        std::cout << "File already exits" << std::endl;
    }

    std::ofstream outputFile("humbug");

    if(!outputFile) 
    {
        std::cout << "File could not be created" << std::endl;
    }

    outputFile.close();
    outputFile.open("humbug", std::ios::app);
    
    for(int i = 0; i < 500; i++)
    {
        char toAppend = 65 + (rand() % (90 - 65 +1));

        /*if(i % 120 == 0)
        {
            outputFile << "\n"; 
        }*/

        outputFile << toAppend;
    }
    
    outputFile.close();

    return 0;
}
