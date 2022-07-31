#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//字符串逆序
//把第一位与最后一位交换
int my_strlen(char* str) {
	int count = 0;
	while (*str != '0') {
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str) {
	int left = 0;
	int right = my_strlen(str) - 1;
	while (left < right) {
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}
int main() {
	char arr[] = "abcdef";
	reverse_string(arr);    //数组名arr是数组arr首元素的地址
	printf("%s\n", arr);    //fedcba
	return 0;
}