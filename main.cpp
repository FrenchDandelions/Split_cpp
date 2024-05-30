#include "Split.hpp"

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        for(int i = 1; argv[i]; i++)
        {
            std::string str = argv[i];
            vec_string vec = split(str, " \n");
            for(size_t i = 0; i < vec.size() ; i++)
                std::cout << "vec[" << i << "] = " << vec[i] << std::endl;
        }
    }
}
