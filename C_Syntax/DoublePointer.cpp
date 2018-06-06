/*
함수내부에서 어떤 포인터가 가리키고있는 주소 자체를 변경하고자 한다면,
이중포인터 또는 포인터 레퍼런스를 이용하여야 한다.
C언어에서의 함수 호출은 엄밀히 따지면 무조건 "값호출" 이다. 어떤 변수의 값이 복사되던지. 아니면 어떤 변수를 가리키는 포인터가 '복사' 되던지 말이다.
함수내부에서 사용되는 형식인수는 지역변수이므로 함수종료시 사라지게 된다.
따라서 어떤 포인터를 가리키는 주소 자체를 함수내부에서 변경하고자 한다면 "이중포인터" 또는 "포인터레퍼런스"를 사용하여야 한다.
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//포인터이용시 문제발생
void InputName(char* _pName)
{
	_pName = new char[100];
	_pName = "test string 1\n";
	printf(_pName);
}

//이중포인터 이용
void InputNameByDoublePointer(char** _ppName)
{
	*_ppName = new char[100];
	*_ppName = "test string 2\n";
}

//포인터 레퍼런스 이용
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
	printf(pName);	//test string 1 출력됨

	InputNameByPointerRef(pName);
	printf(pName);	//test string 2 출력됨

	return 0;
}