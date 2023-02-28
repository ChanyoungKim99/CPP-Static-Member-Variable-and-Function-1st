#include <iostream>

class MyClass
{
public:
	static int sValue;			// 선언

	MyClass()
	{
		sValue++;
	}

	~MyClass()
	{
		sValue--;
	}
};

int MyClass::sValue{ 0 };       // 정의


int main()
{
	MyClass c1;				
	std::cout << MyClass::sValue << std::endl;

	{
		MyClass c2;			
		std::cout << MyClass::sValue << std::endl;
	}						

	std::cout << MyClass::sValue << std::endl;
}		

// 위와 같이 Print함수 없이 클래스 함수임을 나타내는 표기법도 가능하다.
// 정적 멤버를 사용할 때는 s를 접두어로 사용하는 것이 구별하기 좋다.