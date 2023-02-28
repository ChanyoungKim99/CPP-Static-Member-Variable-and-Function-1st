#include <iostream>

class MyClass
{
public:
	static int sValue;			// ����

	MyClass()
	{
		sValue++;
	}

	~MyClass()
	{
		sValue--;
	}
};

int MyClass::sValue{ 0 };       // ����


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

// ���� ���� Print�Լ� ���� Ŭ���� �Լ����� ��Ÿ���� ǥ����� �����ϴ�.
// ���� ����� ����� ���� s�� ���ξ�� ����ϴ� ���� �����ϱ� ����.