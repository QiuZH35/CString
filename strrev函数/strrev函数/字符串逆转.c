
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void mystrrev(char* str)
{

	int length = strlen(str);
	for (int i = 0; i < (length / 2); i++)//ѭ��һ�뽻���ַ�
	{
		//�Ե��ַ�
		char ch = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = ch;
	}


}

void main()
{
	char str[20] = "qiuzhenhui2022";
	printf("ԭ%s\n", str);
	//_strrev(str);
	mystrrev(str);
	printf("��%s\n", str);
}

