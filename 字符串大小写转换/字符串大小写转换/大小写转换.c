
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void mystrupr(char* str)
{
	if (*str != NULL)
	{
		while (*str != '\0')
		{
			if (*str >= 97 && *str <= 122)
			{
				*str++ = *str - 32;
			}


		}


	}


}


void main1()
{
	char str[50] = "notepad";
	//_strupr(str);    //小转大
	


	mystrupr(str);
	printf("%s", str);
	




		system("pause");
}


void mystrlwr(char* str)
{
	if (*str != NULL)
	{
		while (*str != '\0')
		{
			if (*str >= 65 && *str <= 90)
			{
				*str++ = *str + 32;
			}


		}


	}


}



void main()
{

	char str[50] = "NOTEPAD";
	//_strlwr(str);  //大转小

	mystrlwr(str);
	printf("%s", str);
}