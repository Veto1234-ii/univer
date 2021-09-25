#include <stdio.h>
#include <math.h>
int main() {
	double x1,y1, x2, y2, x3, y3, y33;
	double k, b;
	printf("enter x1 and y1");
	scanf("%lf%lf", &x1, &y1);

	printf("enter x2 and y2");
	scanf("%lf%lf", &x2, &y2);

	printf("enter x3 and y3");
	scanf("%lf%lf", &x3, &y3);

	k = (y2 - y1) / (x2 - x1);
	b = y2 - k * x2;

	y33 = k * x3 + b;

	if (fabs(y33 - y3) < 1e-10) {
		printf("yes");
	}
	else printf("No");

	return 0;
	
}