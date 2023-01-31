#ifndef DATA_H
# define DATA_H

# include <iostream>
# include <string>

/*
	reinterpret_cast<type>(value);
	reinterpret_cast는 포인터 타입끼리의 캐스팅
*/

typedef struct s_Data
{
	std::string data;
}               t_Data;

uintptr_t serialize(t_Data* ptr);
t_Data* deserialize(uintptr_t raw);

#endif