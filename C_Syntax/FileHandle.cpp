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