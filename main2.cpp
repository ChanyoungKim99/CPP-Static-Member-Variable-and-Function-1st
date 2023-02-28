#include <iostream>

class MyClass
{
public:
	static int mValue;			// 선언
	
	MyClass()
	{
		mValue++;
	}

	~MyClass()
	{
		mValue--;
	}

	void Print()
	{
		std::cout << "Value : " << mValue << std::endl;
	}
};

int MyClass::mValue{ 0 };       // 정의

int main()
{
	MyClass c1;				// 1. c1 인스턴스 생성, 멤버 X
							// 2. MyClass:value가 다른곳에 생성
							// 3. ;가 끝나면서 생성자 발동, 1 증가
	c1.Print();				// 4. 1 출력
	
	{
		MyClass c2;			// 5. c2 인스턴스 생성, 멤버 X
							// 6. 이미 생성되어있는 MyClass:value
							// 7. ;가 끝나면서 생성자 발동, 1 증가
		c2.Print();			// 8. 2 출력
	}						// 9. 소멸자에 의해 c2 사라짐, 1 감소

	c1.Print();				// 10. 1 출력
}							// 11. 소멸자에 의해 c1 사라짐, 1 감소

							// 여기서도 MyClass::value는 살아있음, 값은 0