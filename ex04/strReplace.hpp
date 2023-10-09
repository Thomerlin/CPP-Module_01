#ifndef STR_RAPLACE_HPP_
#define STR_RAPLACE_HPP_

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#define ALL_MATCHES -1

std::string stringReplace(const std::string &str, const std::string &searchStr,
						  const std::string &replaceStr,
						  int count = ALL_MATCHES);

#endif