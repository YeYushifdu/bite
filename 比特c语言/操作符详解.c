#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//算数操作符
	////整数除法得到商(整数)
	//printf("3/5=%d\n", 3 / 5);
	//printf("6/5=%d\n", 6 / 5);
	////浮点数除法，只要除号两端有一个数是浮点数
	//printf("6.0/5=%f\n", 6.0 / 5);
	////取余
	//printf("7%%4=%d\n", 7 % 4);

	//移位操作符
	//左移：将数的二进制位向左移位，移1位相当于乘以2
	printf("2<<1=%d\n", 2 << 1);
	//二进制表示为00000000000000000000000000000010(32位)
	//第1位移出，最后1位补0，结果是00000000000000000000000000000100(十进制4)
	//右移：
	printf("10>>1=%d\n", 10 >> 1);
	//二进制表示为00000000000000000000000000001010(32位)
	// 1、算数右移
	// 规则：右边丢弃，左边补原符号位，结果是00000000000000000000000000000101(十进制5)
	// 2、逻辑右移
	// 规则：右边丢弃，左边补0，结果是00000000000000000000000000000101(十进制5)
	//测试当前编译器是什么规则
	printf("")
	return 0;
}
