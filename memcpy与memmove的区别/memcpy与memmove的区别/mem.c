
#include <stdio.h>
#include <stdlib.h>
#include <memory.h> //内存操作



void main1()
{
	char str1[20] = "123456789abc";
	char str2[20] = { 0 };
	//memcpy(str2, str1, 10);  //内存拷贝

	memmove(str2, str1, 10);     //内容不重合的情况下，两者作用相同

	printf("%s\n", str2);




	system("pause");
}



//vs ，gcc 作用相同  

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
