#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n = 9;
	float* pfloat = (float*)&n;
	printf("n的值：%d\n", n);
	//00000000 00000000 00000000 00001001——9的二进制
	printf("*pfloat的值：%f\n", *pfloat);//以浮点数的视角存储9.0
	//0——S
	//00000000——E
	//0000000 00000000 00001001——M
	//E为全0，M补0成0.0000000 00000000 00001001
	//读出为0.0000000 00000000 00001001*2^(-126)
	*pfloat = 9.0;
	printf("n的值：%d\n", n);
	//1001.0——二进制
	//1.001*2^3——科学计数法
	//0 10000010 00100000000000000000000
	//1091567616——十进制
	printf("*pfloat的值：%f\n", *pfloat);//浮点数存浮点数取
	return 0;
}