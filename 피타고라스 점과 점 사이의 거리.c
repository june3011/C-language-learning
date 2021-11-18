#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct Point {
	int x; int y;
}Point;

int main()
{
	int x, y;
	Point p1;	//점1
	Point p2;	//점2
	p1.x = 30;	p1.y = 20;
	p2.x = 60;	p2.y = 50;
	double sol; //피타고라스 정리로 점과 점 사이의 거리 구하기
	
	/*if (p1.x >= p2.x) x = p1.x - p2.x;
	else if (p1.x < p2.x)x = p2.x - p1.x;
	if (p1.y >= p2.y) y = p1.y - p2.y;
	else if (p1.y < p2.y)y = p2.y - p1.y;*/
	x = p2.x - p1.x;
	y = p2.y - p1.y;
	if (x < 0) x *= -1;
	if (y < 0)y *= -1;
	//sol = sqrt(x * x + y * y);
	sol = sqrt(pow(x, 2) + pow(y, 2));

	printf("%lf\n", sol);
	return 0;
}