#ifndef SPLIT_HPP
# define SPLIT_HPP

#include <vector>
#include <iostream>

typedef std::vector<std::string> vec_string;

vec_string split(const std::string &str, const std::string &charset);

#endif
