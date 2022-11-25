

#include <stdio.h >
#include <stdlib.h>
char str1[20] = "notepad";
char str2[20] = "mspaint";

//函数里面改变一个外部变量，就需要变量的地址
//如果时数据，需要指向数据的指针储存数据的地址
//如果是指针，需要二级指针，指向指针的储存地址
//

//二级指针一般改变指针的指向，不改变指针的值


void change(char** p)
{
	*p = str2;
}

void changep(char** p)  //改变一个变量，需要变量的地址，如果是指针，就需要二级指针
{

	*p = str2;

}
void main()
{
	
	char* p = str1;   //指向字符串

	change(&p);
	//changep(&p);
	system(p);






	system("pause");
}