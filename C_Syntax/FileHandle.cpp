/*
�Լ����ο��� � �����Ͱ� ����Ű���ִ� �ּ� ��ü�� �����ϰ��� �Ѵٸ�,
���������� �Ǵ� ������ ���۷����� �̿��Ͽ��� �Ѵ�.
C������ �Լ� ȣ���� ������ ������ ������ "��ȣ��" �̴�. � ������ ���� ����Ǵ���. �ƴϸ� � ������ ����Ű�� �����Ͱ� '����' �Ǵ��� ���̴�.
�Լ����ο��� ���Ǵ� �����μ��� ���������̹Ƿ� �Լ������ ������� �ȴ�.
���� � �����͸� ����Ű�� �ּ� ��ü�� �Լ����ο��� �����ϰ��� �Ѵٸ� "����������" �Ǵ� "�����ͷ��۷���"�� ����Ͽ��� �Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//���� ������ �Ǵ� �����ͷ��۷����� �Ѱܾ� �Ѵ�.
void SaveMsgToFile(FILE*& refFile, char* msg)	
{
	if (refFile == NULL)
		refFile = fopen("test.txt", "w+");

	fprintf(refFile, msg);
}

int main()
{
	FILE* pFile = NULL;
	char* msgBuff = new char[100];

	for (int i = 0; i < 1000; i++)
	{
		sprintf(msgBuff, "test string %04d\n", i + 1);
		SaveMsgToFile(pFile, msgBuff);
	}

	return 0;
}