#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//a+1表示第二个元素地址，解引用为第二个元素
//	//*ptr表示数组之后空间，*(ptr-1)向前移一个整型，表示数组最后一个元素
//	return 0;
//}

//struct Test {
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;				//假设p的值为0x100000，结构体Test类型的变量大小是20字节
//int main() {
//	printf("%p\n", p + 0x1);					//指针+1，跳过20字节，即0x14
//	printf("%p\n", (unsigned long)p + 0x1);		//整型+1
//	printf("%p\n", (unsigned int*)p + 0x1);		//+1整型，即+4
//	return 0;
//}

//int main() {
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);			//数组后面空间
//	int* ptr2 = (int*)((int)a + 1);		//地址差1，实际偏移一个字节，再整形指针解引用
//	printf("%x ", ptr1[-1]);			//*(ptr1-1)
//	printf("%x", *ptr2);				//如果是小端存储则为(01) 00 00 00 02
//	return 0;
//}

//int main() {
//	int a[3][2] = { (0,1),(2,3),(4,5) };	//逗号表达式，(1,3,5,0,0,0)
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);						//1
//	return 0;
//}

//int main() {
//	int a[5][5];													//5行5列
//	int(*p)[4];														//p指向一个地址
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//p指向a，p+1指向a+4，p+2指向a+8...
//	//p[4][2]指向a+19
//	//指针-指针=两个指针之间元素个数，-4
//	//10000000 00000000 00000000 00000100
//	//11111111 11111111 11111111 11111011
//	//11111111 11111111 11111111 11111100即FFFFFFFC
//	return 0;
//}

//int main() {
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&a + 1);		//数组后面空间
//	int* ptr2 = (int*)(*(a + 1));	//第一行后面空间
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));	//10，5
//	return 0;
//}

//int main() {
//	char* a[] = { "work","at","ali" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);	//at
//	return 0;
//}

int main() {
	char* c[] = { "enter","new","point","first" };
	char** cp[] = { c + 3,c + 2,c + 1,c };	//交叉指向c
	char*** cpp = cp;						//cpp放cp地址
	printf("%s\n", **++cpp);				//cp中c+2→point
	printf("%s\n", *-- * ++cpp + 3);		//cp中c+1，进行--得到c→enter，进行+3打印e之后的内容er
	printf("%s\n", *cpp[-2] + 3);			//**(cpp-2)得到c+3→first，进行+3打印s之后的内容st
	printf("%s\n", cpp[-1][-1] + 1);		//*(cpp-1)得到c+2，*(*(cpp-1)-1)得到new的地址，进行+1后打印n之后的内容ew
	return 0;
}
