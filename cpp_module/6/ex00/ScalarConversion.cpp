#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion()
{}

ScalarConversion::ScalarConversion(const ScalarConversion &instance): av(instance.av), d(instance.d)
{}

ScalarConversion& ScalarConversion::operator=(const ScalarConversion &instance)
{
	if (this == &instance)
		return *this;
	else
	{
		this->av = instance.av;
		this->d = instance.d;
		return *this;
	}
}

ScalarConversion::~ScalarConversion()
{}

ScalarConversion::ScalarConversion(char *av): av(av)
{
	if (helpConvert(av) == 1)
	{
		d = *av;
		if (strlen(av) != 1)
			throw InvalidArgvException();
	}
	else
	{
		d = std::strtod(av, &av_end);
		if (isalpha(*av_end) && strlen(av) != 1 && strlen(av_end) != 1)
			throw InvalidArgvException();
	}
}

void ScalarConversion::toChar()
{
    std::cout << "char: ";
    if (isnan(d) || d > 127 || d < -128)
		std::cout << "impossible";
	else if (isprint(d) == false)
		std::cout << "Non displayable";
	else
		std::cout << static_cast<char>(d);
	std::cout << std::endl;
}

void ScalarConversion::toInt()
{
    std::cout << "int: ";
	if (isnan(d) || d > INT_MAX || d < INT_MIN)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(d);
	std::cout << std::endl;
}
void ScalarConversion::toFloat()
{
    std::cout << "float: ";
	if (isnan(d))
		std::cout << "nanf";
	else if (d / (int)d == 1 || d == 0)
		std::cout << static_cast<float>(d) << ".0f";
	else
		std::cout << static_cast<float>(d) << 'f';
	std::cout << std::endl;
}

void ScalarConversion::toDouble()
{
    std::cout << "double: ";
	if (isnan(d))
		std::cout << "nan";
	else if (d / (int)d == 1 || d == 0)
		std::cout << static_cast<double>(d) << ".0";
	else
		std::cout << static_cast<double>(d);
	std::cout << std::endl;
}

int ScalarConversion::helpConvert(char *av)
{
	char &tmp = *av;
	int flag = 0;
	int dot = 0;

	if (!isnumber(*av) && !isalpha(*av))
		throw InvalidArgvException();

	while (*av)
	{
		if (!isnumber(*av))
		{
			if (*av == '.')
			{
				av++;
				dot++;
				if (!*av)
					throw InvalidArgvException();
				continue;
			}
			else
			{
				if (isalpha(*av))
				{
					flag += isalpha(*av);
					if (*av == 'f')
						flag--;
					av++;
					continue;
				}
				throw InvalidArgvException();
			}
		}
		flag += isalpha(*av);
		av++;
		if (dot > 1)
			throw InvalidArgvException();
		if (flag > 1)
			break;
	}
	av = &tmp;
	return flag;
}

const char* ScalarConversion::InvalidArgvException::what() const throw()
{
	return ("Invalid Argv");
}