#include <iostream>

class MyClass
{
public:
	static int mValue;			// 선언

};

int main()
{
	MyClass c1;
	
	c1.mValue = 1;
}

// static 변수이든, 일반 변수이든 클래스 내 모든 내용은 인스턴스의 것이다.
// c1이라는 인스턴스는 14번줄에서 소멸자에 의해 사라진다
// 그런데 static 멤버 변수는 프로그램이 사라질때 까지 사라지지 않아야한다.

// 그래서 static 멤버 변수를 class 변수라고 한다.
// 이 class 변수는 추상적인 개념인 class의 것이다.
// 클래스 자체가 선언만 하듯이, static 변수도 선언만 되어있다.
// ex) 선언 : int x;  정의 : x = 1;
// 클래스의 멤버는 인스턴스화가 되는 시점에서 정의가 만들어진다.
// 따라서 static 멤버 변수의 정의도 어딘가 존재해야 한다.


int MyClass::mValue;		// 정의
// 이와 같이 범위 해결 연산자를 사용해서 Class의 것임을 확인해야한다.
// static 변수의 룰과 동일하게 main함수 내에 정의가 존재해서는 안된다.

// static 멤버 변수는 정의가 없으면 안된다!