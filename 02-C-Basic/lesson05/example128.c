#include<stdio.h>

#define PI 3.1415926

int main()
{
		float height;
		float radius;
		float l;//周长
		float s;//圆面积
		float sq;//表面积
		float vq;//球体积
		float vz;//圆柱体积
		printf("请输入圆半径r,圆柱高h:");
		scanf("%f,%f",&radius,&height);

		l = 2 * PI * radius;
		s = PI * radius * radius;
		sq = 4 * PI * radius * radius;
		vq = 3.0/4.0 * PI * radius * radius * radius;
		vz = PI * radius * radius * height;

		printf("圆的周长:l=%6.2f\n",l);
		printf("圆的面积:s=%6.2f\n",s);
		printf("圆的表面积:sq=%6.2f\n",sq);
		printf("圆球的体积:v=%6.2f\n",vq);
		printf("圆柱的体积:vz=%6.2f\n",vz);

		return 0;
}
