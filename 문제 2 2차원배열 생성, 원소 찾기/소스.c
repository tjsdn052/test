#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW_SIZE 3
#define COL_SIZE 4



void setMatrix(int* mat[][4], int startnum)//함수 입력함
{
	for (int row = 0; row < ROW_SIZE; row++) {
		for (int col = 0; col < COL_SIZE; col++) {
			mat[row][col] = startnum;
			startnum++;//반복 할떄마다 1씩 증가시킴
		}
	}

}

int *getElement(int mat[][4], int targetRow, int targetCol)
{
	mat[targetRow][targetCol];

	return &mat[targetRow][targetCol];//주소값 반환

}


int main(void)
{
	int startNum = 0, targetRow = 0, targetCol = 0;
	scanf("%d %d %d", &startNum, &targetRow, &targetCol);

	int mat[ROW_SIZE][COL_SIZE] = { 0 };
	setMatrix(mat, startNum); 

	for (int row = 0; row < ROW_SIZE; row++) {
		for (int col = 0; col < COL_SIZE; col++) {
			printf("%d ", mat[row][col]);
		}
		printf("\n");
	}

	if (targetRow > ROW_SIZE - 1 || targetCol > COL_SIZE - 1) {
		system("PAUSE");
		return 0;
	}

	printf("mat[%d][%d] = %d\n", targetRow, targetCol, *getElement(mat, targetRow, targetCol)); // getElement function is used here.

	system("PAUSE");

	return 0;


}