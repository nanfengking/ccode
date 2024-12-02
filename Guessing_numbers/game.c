#define _CRT_SECURE_NO_WARNINGS
//下面这个是一个猜数字游戏
//分为两部
//第一步是生成随机数
//第二部是判断猜的对不对

//头文件
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

//下面是第一步
void body()
{
	

	//随机数
	int r = rand() % 100 + 1;

	//这之后都算第二部了，不管了
	int guess = 0;

	while (1)
	{
		printf("大儿子，猜一个数字1到100\n");
		scanf("%d", &guess);
			if (guess > r)
			{
				printf("大傻逼，你他妈猜大了\n");
			}
			else if (guess < r)
			{
				printf("大傻逼，你他妈猜小了\n");
			}
			else
			{
				printf("猜对了，你真他妈是个天才\n");
				break;
			}
	}


	
}

//body完事了，开始菜单

void menu()
{
	printf("----------------------------\n");
	printf("--------按1开始------------\n");
	printf("--------按0退出------------\n");
	printf("----------------------------\n");


}

//下面开始主函数

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//srand--初始随机数生成  unsigned int--强制转换time类型
	//下面是从<time.h>文件中找到的函数声明：
	//time_t time(time_t* t)
	//	从声明中可以看出，time()函数返回值的数据类型是time_t。传递给time()函数的参数是指向time_t数据类型的指针。
	// （我不太明白指针是什么意思，但这个是time_t类型，转换为int
	//NULL指针空

	//第一次用do while语句
	do
	{
		menu();
		printf("选择:");
		scanf("%d", &input);
		switch (input)//这是一个switch语句
		{
		case 1:
			body ();
			break;
		case 0:
			printf("游戏结束，吉林大学JLU\n");
			break;
		default:
			printf("你鸡巴都不想玩，你tm是不是个人\n");
			break;
		}
	} while (input);



	return 0;


}

//现在是12_2号，等几天再完善完善，加一点功能