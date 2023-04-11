#include "./Serializer.hpp"

struct A
{
	int		a;
	char	b;
	double 	c;
};

int main()
{
	struct A data;
	data.a = 0;	
	data.b = 65;	
	data.c = 1.3;

	std::cout << "Pointer of struct A\t" << &data << std::endl;
	std::cout << "Data.a = " << data.a << std::endl;
	std::cout << "Data.b = " << data.b << std::endl;
	std::cout << "Data.c = " << data.c << std::endl;
	std::cout << "------------------------------"<< std::endl;

	uintptr_t pointer = Serializer::serialize(&data);
	std::cout << "uintptr_t representation of A\t" << pointer<< std::endl;
	std::cout << "------------------------------"<< std::endl;
	
	struct A* checker;
	checker = Serializer::deserialize<struct A>(pointer);
	
	std::cout << "Pointer of deserialized A\t" << checker << std::endl;
	std::cout << "Checker->a = " << checker->a << std::endl;
	std::cout << "Checker->b = " << checker->b << std::endl;
	std::cout << "Checker->c = " << checker->c << std::endl;
	std::cout << "------------------------------"<< std::endl;
 }
