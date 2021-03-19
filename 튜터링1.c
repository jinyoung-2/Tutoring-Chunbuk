#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int rows, columns;  //За,ї­
	scanf_s("%d %d", &rows, &columns);
	int** arr = (int **)malloc(sizeof(int*) * rows);
	for (int i = 0; i < rows; i++)
		arr[i] = (int*)malloc(sizeof(int) * columns);
	for (int i = 0; i < rows; i++)
		free(arr[i]);
	free(arr);
	return 0;
}
//https://codeng.tistory.com/8
//https://m.blog.naver.com/PostView.nhn?blogId=jsky10503&logNo=221261265884&proxyReferer=https:%2F%2Fwww.google.co.kr%2F
