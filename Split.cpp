#include "Split.hpp"

vec_string split(const std::string &str, const std::string &charset)
{
    vec_string split;
    size_t pos = 0;
    size_t posend = 0;

    while(1)
    {
        if((pos = str.find_first_not_of(charset, pos)) == std::string::npos)
            break;
        posend = str.find_first_of(charset, pos);
        std::string to_add = str.substr(pos, posend - pos);
        split.push_back(to_add);
        if(posend == std::string::npos)
            break;
        pos = posend;
    }

    return(split);
}
