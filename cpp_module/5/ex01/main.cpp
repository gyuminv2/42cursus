#include "Form.h"

int main(void)
{
	try
	{
		// 예외 처리 예제
		{
			// Form f1("p1", 1000, -3);
			// Form f2("p2", 10000, 5);
		}

		// 일반 예제
		{
			// 관료 생성
			Bureaucrat person("gyumpark", 3);
			std::cout << person << std::endl;

			// 결제 폼 작성
			Form f1("p1", 5, 2);
			// Form f1("p1", 3, 2);

			// 결제를 받고 출력
			person.signForm(f1);
			person.signForm(f1);

			// Form에 대한 정보 출력
			std::cout << f1;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}