

#include <stdio.h >
#include <stdlib.h>
char str1[20] = "notepad";
char str2[20] = "mspaint";

//��������ı�һ���ⲿ����������Ҫ�����ĵ�ַ
//���ʱ���ݣ���Ҫָ�����ݵ�ָ�봢�����ݵĵ�ַ
//�����ָ�룬��Ҫ����ָ�룬ָ��ָ��Ĵ����ַ
//

//����ָ��һ��ı�ָ���ָ�򣬲��ı�ָ���ֵ


void change(char** p)
{
	*p = str2;
}

void changep(char** p)  //�ı�һ����������Ҫ�����ĵ�ַ�������ָ�룬����Ҫ����ָ��
{

	*p = str2;

}
void main()
{
	
	char* p = str1;   //ָ���ַ���

	change(&p);
	//changep(&p);
	system(p);






	system("pause");
}