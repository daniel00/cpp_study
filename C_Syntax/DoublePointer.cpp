/*
�Լ����ο��� � �����Ͱ� ����Ű���ִ� �ּ� ��ü�� �����ϰ��� �Ѵٸ�,
���������� �Ǵ� ������ ���۷����� �̿��Ͽ��� �Ѵ�.
C������ �Լ� ȣ���� ������ ������ ������ "��ȣ��" �̴�. � ������ ���� ����Ǵ���. �ƴϸ� � ������ ����Ű�� �����Ͱ� '����' �Ǵ��� ���̴�.
�Լ����ο��� ���Ǵ� �����μ��� ���������̹Ƿ� �Լ������ ������� �ȴ�.
���� � �����͸� ����Ű�� �ּ� ��ü�� �Լ����ο��� �����ϰ��� �Ѵٸ� "����������" �Ǵ� "�����ͷ��۷���"�� ����Ͽ��� �Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//�������̿�� �����߻�
void InputName(char* _pName)
{
	_pName = new char[100];
	_pName = "test string 1\n";
	printf(_pName);
}

//���������� �̿�
void InputNameByDoublePointer(char** _ppName)
{
	*_ppName = new char[100];
	*_ppName = "test string 2\n";
}

//������ ���۷��� �̿�
void InputNameByPointerRef(char*& _refName)
{
	_refName = new char[100];
	_refName = "test string 3\n";
}

int main()
{
	char* pName = "default string\n";

	InputName(pName);
	printf(pName);

	InputNameByDoublePointer(&pName);
	printf(pName);	//test string 1 ��µ�

	InputNameByPointerRef(pName);
	printf(pName);	//test string 2 ��µ�

	return 0;
}