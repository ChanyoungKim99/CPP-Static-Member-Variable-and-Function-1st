#include <iostream>

// "static ��� �Լ�" �� �����Ѵ�.

class MyClass
{
public:
	static int sValue;
	int mValue;

	static void DoSomething();
};
// static ��� �Լ��� ǥ���

void MyClass::DoSomething()
{
	// �Ͻ��� �ν��Ͻ� ������ X
	// ��, this�� ������� ���Ѵ�.

	mValue = 1;

	// ���� ǥ�Ⱑ (this->mValue) = 1 �̶� ���� ������ ��� �Ұ���

	sValue = 1;
	
	// ���� static ��� �����̱⿡ ����� ����.
}

int main()
{
	MyClass::DoSomething();

	// ���⼭�� ǥ��� static ��� ������ �����ϴ�.
}

