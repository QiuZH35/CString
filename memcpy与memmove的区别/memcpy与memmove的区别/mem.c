
#include <stdio.h>
#include <stdlib.h>
#include <memory.h> //�ڴ����



void main1()
{
	char str1[20] = "123456789abc";
	char str2[20] = { 0 };
	//memcpy(str2, str1, 10);  //�ڴ濽��

	memmove(str2, str1, 10);     //���ݲ��غϵ�����£�����������ͬ

	printf("%s\n", str2);




	system("pause");
}



//vs ��gcc ������ͬ  

void main()
{
	char str1[20] = "123456789a";
	char str2[20] = "123456789a";
	memcpy(str1, str1, 8);
	printf("%s\n", str1);
	memmove(str2, str2, 8);
	printf("%s\n", str2);

	{
		char str1[20] = "123456789a";
		char str2[20] = "123456789a";
		memcpy(str1+2, str1, 8);
		printf("%s\n", str1);
		memmove(str2+2, str2, 8);
		printf("%s\n", str2);
	}
	system("pause");
}
