#include <iostream>

class MyClass
{
public:
	static int mValue;			// ����
	
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

int MyClass::mValue{ 0 };       // ����

int main()
{
	MyClass c1;				// 1. c1 �ν��Ͻ� ����, ��� X
							// 2. MyClass:value�� �ٸ����� ����
							// 3. ;�� �����鼭 ������ �ߵ�, 1 ����
	c1.Print();				// 4. 1 ���
	
	{
		MyClass c2;			// 5. c2 �ν��Ͻ� ����, ��� X
							// 6. �̹� �����Ǿ��ִ� MyClass:value
							// 7. ;�� �����鼭 ������ �ߵ�, 1 ����
		c2.Print();			// 8. 2 ���
	}						// 9. �Ҹ��ڿ� ���� c2 �����, 1 ����

	c1.Print();				// 10. 1 ���
}							// 11. �Ҹ��ڿ� ���� c1 �����, 1 ����

							// ���⼭�� MyClass::value�� �������, ���� 0