#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//	char a = -1;
//	//11111111 11111111 11111111 11111111
//	//取个字节8个比特位：11111111
//	//%d整型补符号位：11111111 11111111 11111111 11111111
//	signed char b = -1;
//	//同上
//	unsigned char c = -1;
//	//无符号11111111
//	//整型提升高位补0
//	//00000000 00000000 00000000 11111111——原码&补码
//	printf("a=%d,b=%d,c=%d", a, b, c);	//-1,-1,255
//	return 0;
//}

//int main() {
//	char a = -128;
//	//10000000 00000000 00000000 10000000——原码
//	//11111111 11111111 11111111 01111111——反码
//	//11111111 11111111 11111111 10000000——补码
//	//char存10000000
//	//整型提升高位补1：11111111 11111111 11111111 10000000
//	//%u认为11111111 11111111 11111111 10000000就是原码
//	printf("%u\n", a);		//4294967168
//	return 0;
//}

//int main() {
//	char a = 128;
//	//00000000 00000000 00000000 10000000——原码
//	//char存10000000
//	//整型提升高位补1：11111111 11111111 11111111 10000000
//	//%u认为11111111 11111111 11111111 10000000就是原码
//	printf("%u\n", a);		//4294967168
//	return 0;
//}

//int main() {
//	int i = -20;
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11101100
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	//11111111 11111111 11111111 11101100
//	//00000000 00000000 00000000 00001010
//	//11111111 11111111 11111111 11110110——补码
//	//11111111 11111111 11111111 11110101——反码
//	//10000000 00000000 00000000 00001010——原码 -10
//	return 0;
//}

//int main() {
//	unsigned int i;
//	for (i = 9; i >= 0; i--) {
//		printf("&u\n", i);
//	}
//	return 0;
//}

//int main() {
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3...-127 -128 127 126...3 2 1 0 -1 -2...
//	printf("%d", strlen(a));//找到\0-->0，共255个数
//	return 0;
//}

//int main() {
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++) {
//		printf("hello\n");
//	}
//	return 0;
//}

//判断是大端法还是小端法
//int main() {
//	int a = 1;				//小端：01 00 00 00；大端：00 00 00 01
//	//取第一个字节看是什么
//	char* p = (char*)&a;	//int*
//	if (*p == 1) {
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}
//	return 0;
//}

//杨辉三角
int main() {
	int arr[10][10] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++) {
			if (j == 0) {
				arr[i][j] = 1;
			}
			if (i >= 1 && j >= 1) {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}