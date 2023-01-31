#include "Array.h"

int    subject()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

int mymain()
{
    try
	{
		Array<int> i_arr(MAX);
		for (int i = 0; i < MAX; i++)
		{
			i_arr.arr[i] = i;
			// std::cout << i_arr[i] << std::endl;
		}
		std::cout << "i_arr size : " << i_arr.size() << std::endl;

		Array<float> f_arr(MAX);
		for (int i = 0; i < MAX; i++)
		{
			f_arr.arr[i] = i + 0.5;
			// std::cout << f_arr[i] << std::endl;
		}
		std::cout << "f_arr size : " << f_arr.size() << std::endl;
		
		Array<int> iarr2(1);
        std::cout << iarr2[0] << std::endl;
		std::cout << iarr2[1] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

int main(void)
{
    // if (subject())
    //     return (0);
    if (mymain())
        return (0);
    return (0);
}