#include "ScalarConversion.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Number of argument is must 2." << std::endl;
		return 1;
    }
    try
    {
        // std::cout << static_cast<float>('l') << std::endl;
        ScalarConversion t(av[1]);
        t.toChar();
	    t.toInt();
	    t.toFloat();
	    t.toDouble();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}