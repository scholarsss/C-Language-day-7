#include<stdio.h>
int main()
{
	float a=0;
	printf("�����뵱������(��λ����Ԫ)\n");
	scanf("%f",&a);
	float b1=a*0.1;
	float b2=b1+(a-10)*0.075;
	float b3=b2+(a-20)*0.05;
	float b4=b3+(a-40)*0.03;
	float b5=b4+(a-60)*0.015;
	float b6=b5+(a-100)*0.01;
	if(a<=10)
		printf("�����ŵĽ���Ϊ:%f��Ԫ\n",b1);
	else if(a>10&&a<20)
		printf("�����ŵĽ���Ϊ:%f��Ԫ\n",b2);
	else if(a>=20&&a<40)
	    printf("�����ŵĽ���Ϊ:%f��Ԫ\n",b3);
	else if(a>=40&&a<60)
	    printf("�����ŵĽ���Ϊ:%f��Ԫ\n",b4);
	else if(a>=60&&a<100)
	    printf("�����ŵĽ���Ϊ:%f��Ԫ\n",b5);
	else if(a>=100)
	    printf("�����ŵĽ���Ϊ:%f��Ԫ\n",b6);
	return 0;
}
