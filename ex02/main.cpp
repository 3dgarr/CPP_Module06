#include "./Base.hpp"
#include "./A.hpp"
#include "./B.hpp"
#include "./C.hpp"
#include "./D.hpp"


Base*	generate(void)
{
    srand (time(NULL));
    int choise = rand() % 3;
	Base	*ret;
	switch (choise)
	{
		case 0:
			ret = new A();
			std::cout << "Generated pointer of type A" << std::endl;
			break;
		case 1:
			ret = new B();
			std::cout << "Generated pointer of type B" << std::endl;
			break;
		case 2:
			ret = new C();
			std::cout << "Generated pointer of type C" << std::endl;
			break;
	}
	return (ret);
}

void	identify(Base* p)
{
	A*	a;
	B*	b;
	C*	c;
	
	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);

	if(a)
	{
		std::cout << "Passed pointer has a type of A" << std::endl;
	}
	else if (b)
	{
		std::cout << "Passed pointer has a type of B" << std::endl;
	}
	else if (c)
	{
		std::cout << "Passed pointer has a type of C" << std::endl;
	}
	else
		std::cout << "Undefined type of pointer" << std::endl;
}

void	identify(Base& p)
{
	try
	{

		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Passed reference has a type of A" << std::endl;
		return ;
	}
	catch(...)
	{}

	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Passed reference has a type of B" << std::endl;
		return ;
	}
	catch(...)
	{}

	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Passed reference has a type of C" << std::endl;
		return ;
	}
	catch(...)
	{}
	std::cout << "Passed reference has a type of UNDEFINED" << std::endl;

}


int main()
{
	Base*	rand = generate();
	D	d;
	identify(rand);
	identify(*rand);
	identify(d);
	delete rand;
}