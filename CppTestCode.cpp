#include <iostream>
#include <string.h>
using namespace std;

// "Hello, World!" ���ڿ��� �ѷ� ������ ���������͸� Ȱ���� �޸� �ϳ� ���� ����Ͽ� �ѷ� ���� ���ڿ� ���� ���.
string DoublePointer(string** Dptra) //���������͸� Ȱ���Ͽ� main()�Լ� ���� ���� a�� ���ڿ��� �ٲٴ� �Լ�
{
	return **Dptra = "World!"; //���������ͷ� �ٲ� ���� Hello,  -> World!
}

int main()
{
	string a = "Hello, ";
	string* ptra = &a; //a�� �ּҸ� ����Ű�� �����ͺ��� ptra ����
	cout << a; //�켱 ���� ����(����)a�� ���
	cout << DoublePointer(&ptra) << endl; //���� ����� a ���

	//���ص��� �ʴ� �κ�.
	a = "Hello, ";
	cout << a << DoublePointer(&ptra) << endl; // 15��, 16�� �ڵ�� ���� ����� �����Ͽ�����, ���� a�� Hello, �� �ƴ� World!�� ��µ�.
	//�˾ƺ��� : ( 15��, 16�� �ڵ�� 20�� �ڵ��� �������� �ٸ� ���� ã��

	return 0;
}