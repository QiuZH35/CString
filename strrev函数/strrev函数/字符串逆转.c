
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void mystrrev(char* str)
{

	int length = strlen(str);
	for (int i = 0; i < (length / 2); i++)//循环一半交换字符
	{
		//对调字符
		char ch = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = ch;
	}


}

void main()
{
	char str[20] = "qiuzhenhui2022";
	printf("原%s\n", str);
	//_strrev(str);
	mystrrev(str);
	printf("新%s\n", str);
}

