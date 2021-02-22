#include<stdio.h>
int main()
{

int d1,m1,y1,d2,m2,y2,r1,r2,r3;
clrscr();
printf("************ AGE CALCULATOR **************\n\n");

printf("Enter Your Birth Date:");
scanf("%d", &d1);

printf("Enter Your Birth Month:");
scanf("%d", &m1);

printf("Enter Your Birth Year:");
scanf("%d", &y1);

printf("Enter Current Date:");
scanf("%d", &d2);

printf("Enter Current Month:");
scanf("%d", &m2);

printf("Enter Current Year:");
scanf("%d", &y2);

if((d1 > 31 || d1 < 1) || (d2 > 31 || d2 < 1)  || (m1<1 || m1>12) || (m2<1 || m2>12) || (y1<0 && y2<0))
{
	printf("Enter Detail in Correct Format");
}
else
{
	r3=y2-y1;    //r3 is Result in Year

	if(d2>=d1)
	{
		r1=d2-d1;
	}
	else{
		m2=m2-1;            //1 Month Sub From Current Month
	      //d2=d2+31;	    //31 Days Add in Current Date
		r1=(d2+31)-d1;
	}
	if(m2>=m1)
	{
		r2=m2-m1;
	}
	else{
		r3=r3-1;           //1 Year Sub From Result Year
	       //m2=m2+12;         //12 Months Add in Current Month
		r2=(m2+12)-m1;
	}
	printf("Age Calculated is %d Years %d Months %d Days", r3,r2,r1);
}
getch();
return 0;
}
