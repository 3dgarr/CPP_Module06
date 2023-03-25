#include "./ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
    :	argument("")
{}

ScalarConverter::ScalarConverter(const std::string& arg)
    :	argument(arg)
{}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs)
    :	argument(rhs.argument)
{}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& rhs)
{
	if (this != &rhs)
		argument = rhs.argument;
	return (*this);
}

