#include <iostream>

// "static 멤버 함수" 도 존재한다.

class MyClass
{
public:
	static int sValue;
	int mValue;

	static void DoSomething();
};
// static 멤버 함수의 표기법

void MyClass::DoSomething()
{
	// 암시적 인스턴스 포인터 X
	// 즉, this를 사용하지 못한다.

	mValue = 1;

	// 위의 표기가 (this->mValue) = 1 이랑 같기 때문에 사용 불가능

	sValue = 1;
	
	// 위는 static 멤버 변수이기에 상관이 없다.
}

int main()
{
	MyClass::DoSomething();

	// 여기서도 표기는 static 멤버 변수와 동일하다.
}

