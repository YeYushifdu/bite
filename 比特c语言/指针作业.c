#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//杨氏矩阵
//int find_num(int arr[3][3], int r, int c, int k) {
//	int x = 0; 
//	int y = c - 1;
//	while (x < r && y >= 0) {
//		if (arr[x][y] < k) {
//			x++;
//		}
//		else if (arr[x][y] > k) {
//			y--;
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;
//}

//int find_num(int arr[3][3], int* px, int* py, int k) {
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0) {
//		if (arr[x][y] < k) {
//			x++;
//		}
//		else if (arr[x][y] > k) {
//			y--;
//		}
//		else {
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3, y = 3;
//	int ret = find_num(arr, &x, &y, k);	//如果找到返回1，找不到返回0
//	if (ret == 1) {
//		printf("Found.\n");
//		printf("位置为(%d,%d)\n", x, y);
//	}
//	else {
//		printf("Not found.\n");
//	}
//	return 0;
//}

//左旋字符串
//void string_left_rotate(char* str, int k) {
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++) {
//		//每次左旋一个字符
//		char tmp = *str;
//		//后面n-1个字符向前移动
//		int j = 0;
//		for (j = 0; j < n - 1; j++) {
//			*(str + j) = *(str + j + 1);
//		}
//		//tmp放在最后
//		*(str + n - 1) = tmp;
//	}
//}
//
//int main() {
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//方法二：三步翻转法
//1.左边逆序
//2.右边逆序
//3.整体逆序
#include<assert.h>
void reverse(char* left, char* right) {	//逆序
	assert(left);
	assert(right);
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void string_left_rotate(char* str, int k) {
	int n = strlen(str);
	reverse(str, str + k - 1);
	reverse(str + k, str + n - 1);
	reverse(str, str + n - 1);
}
int main() {
	char arr[10] = "ABCDEF";
	int k = 2;
	string_left_rotate(arr, k);
	printf("%s\n", arr);
	return 0;
}