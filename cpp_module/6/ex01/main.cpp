#include "Data.h"

int main(void)
{
	t_Data origin;
	origin.data = "gyumpark";

	//Data 객체의 주소에 serialize()를 사용
	uintptr_t addr = serialize(&origin);

	//deserialize()로 반환
	t_Data *copy = deserialize(addr);

	// 원본 주소값 = deserialize()의 반환 값
	std::cout << &origin << std::endl;
	std::cout << copy << std::endl;

	return (0);
}