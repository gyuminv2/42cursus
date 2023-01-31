#include "Base.h"

int main(void)
{
	try
	{
		Base *base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}