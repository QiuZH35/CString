
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void mystrset(char* str, char ch)
{
	if (*str != NULL || ch != NULL)
	{
		while (*str != '\0')
		{
			*str++ = ch;


		}
	}


}

void main()
{
	char str[20] = "qiuzhenhui2022";
	printf("strԭ��%s\n", str);
	//_strset(str, '8');    //_strset C��׼

	mystrset(str, '9');
	printf("�µ�%s", str);



	system("pause");
}