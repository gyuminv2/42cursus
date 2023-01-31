#include "Bureaucrat.h"

int main(void)
{
	try
	{
//		기본 동작
		Bureaucrat root;
		std::cout << root << std::endl;
		Bureaucrat p("gyumpark", 150);
		std::cout << p << std::endl;

//		범위 초과 등급으로 선언
		// Bureaucrat p("gyumpark", 1000);

//		범위 미만 등급으로 선언
		// Bureaucrat p("gyumpark", -1000);

//		초과등급으로 높힐때
		// Bureaucrat p("gyumpark", 1);
		// p.IncreaseGrade();

//		초과등급으로 낮출떄
		// Bureaucrat p("gyumpark", 150);
		// p.DecreaseGrade();

//		등급 업 함수 사용
		// Bureaucrat p("gyumpark", 5);
		// p.IncreaseGrade();
		// std::cout << p << std::endl;

//		등급 다운 함수 사용
		// Bureaucrat p("gyumpark", 5);
		// p.DecreaseGrade();
		// std::cout << p << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}