#include <stdio.h>
#include <math.h>
int main() {
	double a1, b1, c1, a2, b2, c2, x, y;
	double d, h1, h2;
	double x0, y0;
    
	printf("enter a1, b1, c1\n");
	scanf("%lf%lf%lf", &a1, &b1, &c1);

	printf("enter a2, b2, c2\n");
	scanf("%lf%lf%lf", &a2, &b2, &c2);

	printf("enter x and y\n");
	scanf("%lf%lf", &x, &y);
	/*
	a1 = 3;
	b1 = -3;
	c1 = 0;
	a2 = 5;
	b2 = -5;
	c2 = -25;
	x = 1;
	y = -1;
	*/
	if (((a1 == 0) || (b1 == 0)) || ((a2 == 0) || (b2 == 0))) {
		if ((a1 == 0) && (a2 == 0)) {
			d = fabsf((-c1 / b1) - (-c2 / b2));
			h1 = fabsf(y - (-c1 / b1));
			h2 = fabsf(y - (-c2 / b2));
		}

		if ((b1 == 0) && (b2 == 0)) {
			d = fabsf((-c1 / a1) - (-c2 / a2));
			h1 = fabsf(x - (-c1 / a1));
			h2 = fabsf(x - (-c2 / a2));
		}
	}
	else {
		//взяла произвольную точку на прямой a1*x + b1*y + c1 = 0
		x0 = 1;
		y0 = (-a1 / b1) * x0 - c1 / b1;
		printf("y0 = %lf\n", y0);

		// расстояние между двумя прямыми равно расстоянию между произвольной точкой первой прямой и второй прямой
		d = fabsf(a2 * x0 + b2 * y0 + c2) / sqrtf(a2 * a2 + b2 * b2);// расстояние между двумя прямыми
		printf("d = %lf\n", d);


		h1 = fabsf(a1 * x + b1 * y + c1) / sqrtf(a1 * a1 + b1 * b1);//расстояние между точкой и прямой a1*x + b1*y + c1 = 0
		printf("h1 = %lf\n", h1);


		h2 = fabsf(a2 * x + b2 * y + c2) / sqrtf(a2 * a2 + b2 * b2);//расстояние между точкой и прямой a2*x + b2*y + c2 = 0
		printf("h2 = %lf\n", h2);


		printf("h1 + h2 = %lf\n", h1 + h2);

		printf("fabs((h1 + h2) -  d) = %lf \n", fabs((h1 + h2) - d));
		printf("%lf\n", 1e-10);

	}

	if ((h1 + h2) == d) {
		printf("yes");
	}
	else printf("no");

	return 0;
	
	
}