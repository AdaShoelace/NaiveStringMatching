#include <iostream>
#include <string>
#include <fstream>


void naiveSearch(const std::string &pat, const std::string &txt)
{

    unsigned int count = 0;

    for(int i = 0; i <= txt.length(); i++)
    {
        int j;

        for(j = 0; j < pat.length(); j++)
        {
            ++count; 
            if(txt[i + j] != pat[j])
                break;
        }

        if(j == pat.length())
        {
            std::cout << "Pattern found at index: " << i << std::endl; 
        }
    }

    std::cout << "Number of comparisons: " << count << std::endl;
}

void preKMP(const std::string &pat, int f[])
{
    
}

void kmpSearch(const std::string &pat, const std::string &txt)
{

}

int main(int argc, char** argv)
{

    std::ifstream file(argv[1]);
    std::string line;
    std::string pat = argv[2];
    if(file)
    {
        while(std::getline(file, line))
        {
            naiveSearch(pat, line);
        }

    }
    else
    {
        std::cout << "Hjasdjasdjad" << std::endl; 
    }

    return 0;
}
