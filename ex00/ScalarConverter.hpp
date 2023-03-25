#pragma once

#include <iostream>
#include <limits>
#include <sstream>
#include <iomanip>

class ScalarConverter
{

    public:
        ScalarConverter(const std::string&);
        ScalarConverter(const ScalarConverter&);
        ScalarConverter&    operator=(const ScalarConverter&);
        ~ScalarConverter();
    


    private:
        std::string argument;
    private:
        ScalarConverter();
};


