# include "Base.h"

Base::~Base()
{}

Base *generate(void)
{
    srand(time(NULL));
	int random = rand() % 3 + 1; // 0 + 1 ~ (3-1) + 1

	if (random == 1)
		return (new A());
	else if (random == 2)
		return (new B());
	else if (random == 3)
		return (new C());
    else
        return (NULL);
}

/*
    포인터
    형변환에 성공했을 경우 주소를 반환
    주소는 원본으로부터 바뀌지 않음
    형변환에 실패했을 경우 널 포인터를 반환
*/

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "*A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "*B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "*C" << std::endl;
    else
        throw Failexception();
}

/*
    참조
    형변환에 성공했을 경우 해당 참조를 반환한다
    주소가 원본으로부터 바뀐다
    형변환에 실패했을 경우 예외를 발생시킨다
*/

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "&A" << std::endl;
        (void)a;
    }
    catch(std::bad_cast b)
    {
        std::cerr << b.what() << '\n';
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        std::cout << "&B" << std::endl;
        (void)b;
    }
    catch(std::bad_cast b)
    {
        std::cerr << b.what() << '\n';
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        std::cout << "&C" << std::endl;
        (void)c;
    }
    catch(std::bad_cast b)
    {
        std::cerr << b.what() << '\n';
    }
}

const char *Failexception::what(void) const throw()
{
    return ("dynamic_cast Fail");
}