
#define _CRT_SECURE_NO_WARNINGS 

#include<windows.h>
#include <stdlib.h>
void openweschat()
{

	ShellExecuteA(0, "open", "D:\\QQ\\WeChat\\WeChat.exe", 0, 0, 1);

}
void closeWechat()
{
	system("taskkill /f /in WeChat.exe");
}