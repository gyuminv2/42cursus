#ifndef BASE_H
# define BASE_H

# include <iostream>
# include <string>
# include <random>

/*  dynamic_cast 형변환: 유도 -> 기초
    polymorphic class: 유도 -> 기초, 기초 -> 유도
    성공: new_type의 value값
    실패 (new_type = pointer): null pointer
    실패 (new_type = reference): bad_cast

    런타임에 형변환을 진행하는 동적 캐스팅
    상속 관계에 놓여 있는 두 클래스 중 부모 클래스의 데이터를 자식 클래스 포인터로 형변환할 때 사용 -> 다운캐스팅
    자식 클래스 포인터를 부모 클래스로 형변환할 때 사용 -> 업캐스팅 (보통은 static_cast를 사용)
    상속관계가 아니면 형변환 실패
    안전한 타입캐스팅을 지원하지만 런타임 시간에 타입 캐스팅이 가능한지 검사하기 때문에 느리고, virtual 함수가 있어야함
*/


class Base  // polymorphic class (추상클래스)
{
    public:
	    virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base *generate(void);
void identify(Base* p);
void identify(Base &p);

class Failexception : public std::exception
{
    public:
        const char *what(void) const throw();
};

#endif