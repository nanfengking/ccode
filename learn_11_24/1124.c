#include <stdio.h> 
//int main()
//{
//	int  a = 10;
//	int b = 20;
//	int x = a + b;//x=30
//	int y = 2 * a - 3 * b;//y=-40
//	printf("%d\n", x);
//	printf("%d\n", y);
//	printf("%f\n", x/y);
//	return 0;
//}

//i/*nt main()
//{
//	double score = 18.0;
//	score = (score / 20.0) * 100.;
//	printf("%f\n",score);
//	return 0;
//}*/

//int main()
//{
//	int x = 6 % 4;
//	printf("%d\n", x);
//	return 0;
 

//int main()
//{
//	printf("%d\n", 11220 % -5);
//	printf("%d\n", -11 % 5);
//}
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 4;
//	a = a + 3;//4
//	b += 1;//4
//	c -= 2;//2
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 2.3;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;//10
//	int c = ++a;//12
//	int d = ++a;//13
//	int e = a--;//13
//	int f = a;//12
//	printf("b=%d c=%d d=%d e=%d a=%d ", b, c, d, e, a);
//
//	return 0;
//}


//int main()
//{
//	printf("%.10s\n", "我很喜欢你对象");
//	printf("%6.2f\n",  110.5);
//	return 0;
//}



int main()
{
	char  name[100];
	printf("请输入同学的名字:");
    scanf_s("%99s", name,sizeof(name));
	printf("%s是个大傻逼\n", name);


	return 0;
}
 
////// 
////// 
//////这个是kimi写的
//int main()
//{
//    char name[100]; // 声明一个足够大的字符数组来存储输入的名字
//    printf("请输入同学的名字:");
//    scanf_s("%99s", name, sizeof(name)); // 正确使用scanf_s读取字符串，避免缓冲区溢出
//    printf("%s是个大傻逼\n", name); // 正确打印字符串
//
//    return 0;
//}
//
//
//
//
//
//
////第100行代码