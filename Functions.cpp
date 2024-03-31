//Q1. Sum of two numbers.
//#include<stdio.h>
//int sum(int,int);
//int main()
//{
//	int a,b,c;
//	printf("\nEnter 2 numbers:");
//	scanf("%d %d",&a,&b);
//	c=sum(a,b);
//	printf("\nThe sum is: %d",c);
//	return 0;
//}
//int sum(int x,int y)
//{
//	int z;
//	z=x+y;
//	return z;
//}

//Q2. Area of rectangle.
//#include<stdio.h>
//int area(int,int);
//int main()
//{
//	int l,b,res;
//	printf("\nEnter length and breadth:");
//	scanf("%d %d",&l,&b);
//	res=area(l,b);
//	printf("\nThe area of rectangle is:%d",res);
//	return 0;
//}
//int area(int x,int y)
//{
//	int z;
//	z=x*y;
//	return z;
//}

//Q3. Area of circle.
//#include<stdio.h>
//float area(float);
//#define pie 3.14
//int main()
//{
//	float r,res;
//	printf("\nEnter radius:");
//	scanf("%f",&r);
//	res=area(r);
//	printf("\nThe area of circle is:%f",res);
//	return 0;
//}
//float area(float x)
//{
//	float y;
//	y=pie*x*x;
//	return y;
//}

//Q4. Maximum out of two numbers.
//#include<stdio.h>
//int max(int,int);
//int main()
//{
//	int a,b,res;
//	printf("\nEnter two numbers:");
//	scanf("%d %d",&a,&b);
//	res=max(a,b);
//	printf("\nMaximum number is: %d",res);
//	return 0;
//}
//int max(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}

//Q5. Factorial of a number.
//#include<stdio.h>
//int fact(int);
//int main()
//{
//	int num,res;
//	printf("\nEnter number:");
//	scanf("%d",&num);
//	res=fact(num);
//	printf("\n%d factorial is %d",num,res);
//	return 0;
//}
//int fact(int x)
//{
//	int j,z=1;
//	for(j=1;j<=x;j++)
//		z=z*j;
//	return z;
//}

//Q6. Reverse of number.
//#include<stdio.h>
//int rev(int);
//int main()
//{
//	int num,res;
//	printf("\nEnter number:");
//	scanf("%d",&num);
//	res=rev(num);
//	printf("\nReverse number is:%d",res);
//	return 0;
//}
//int rev(int n)
//{
//	int y,z,ctr=0;
//	y=n;
//	while(n!=0)
//	{
//		z=n%10;
//		ctr=ctr*10+z;
//		n=n/10;
//	}
//	return ctr;
//}

//Q7. Number of days
//#include<stdio.h>
//int nod(int,int);
//int main()
//{
//	int m,y,res;
//	printf("\nEnter month number and year:");
//	scanf("%d %d",&m,&y);
//	res=nod(m,y);
//	printf("\nThe number of days is: %d",res);
//	return 0;
//}
//int nod(int mo,int ye)
//{
//	if(mo==4||mo==6||mo==9||mo==11)
//		return 30;
//    else if(mo==2 && ye%4==0)
//		return 29;
//    else if(mo==2 && ye%4!=0)
//		return 28;
//	else
//		return 31;	
//}

//Q8. Table of a number
//#include<stdio.h>
//void table(int);
//int main()
//{
//	int num;
//	printf("\nEnter number:");
//	scanf("%d",&num);
//	table(num);
//	return 0;
//}
//void table(int n)
//{
//	int i;
//	for(i=1;i<=10;i++)
//		printf("\n%d * %d =%d",n,i,n*i);
//}

//Q9. Year leap or not
//#include<stdio.h>
//void isleap(int);
//int main()
//{
//	int y;
//	printf("\nEnter any year:");
//	scanf("%d",&y);
//	isleap(y);
//	return 0;
//}
//void isleap(int yr)
//{
//	if(yr%4==0)
//		printf("\nLEAP");
//	else
//		printf("\nNOT LEAP");
//}

//Q10. Maximum out of three numbers.
//#include<stdio.h>
//void max(int,int,int);
//int main()
//{
//	int a,b,c;
//	printf("\nEnter 3 numbers:");
//	scanf("%d %d %d",&a,&b,&c);
//	max(a,b,c);
//	return 0;
//}
//void max(int x,int y,int z)
//{
//	if(x>y&&x>z)
//		printf("%d is maximum",x);
//	else if(y>x&&y>z)
//		printf("%d is maximum",y);
//	else
//		printf("%d is maximum",z);
//}

//Q11. Number is prime or not.
//#include<stdio.h>
//void isprime(int);
//int main()
//{
//	int num;
//	printf("\nEnter number:");
//	scanf("%d",&num);
//	isprime(num);
//		return 0;
//}
//void isprime(int n)
//{
//	int i,ctr=0;
//	for(i=2;i<=n/2;i++)
//	{
//		if(n%2==0)
//			ctr++;
//			break;
//	}
//	if(ctr==0)
//		printf("\nPRIME");
//	else
//		printf("\nNOT PRIME");
//}

//Q12. Pallindrome or not.
//#include<stdio.h>
//void ispallindrome(int);
//int main()
//{
//	int n;
//	printf("\nEnter number:");
//	scanf("%d",&n);
//	ispallindrome(n);
//	return 0;
//}
//void ispallindrome(int num)
//{
//	int temp,digit,sum=0;
//	temp=num;
//	while(num!=0)
//	{
//		digit=num%10;
//		sum=sum*10+digit;
//		num=num/10;	
//	}
//	if(temp==sum)
//		printf("\nPALLINDROME");
//	else
//		printf("\nNOT PALLINDROME");	
//}

//Q13. Sum and average of 2 numbers.
//#include<stdio.h>
//int sum(int,int);
//float average(int,int);
//int main()
//{
//	int a,b;
//	float avg;
//	printf("\nEnter two numbers:");
//	scanf("%d %d",&a,&b);
//	avg=average(a,b);
//	printf("\nAverage of %d and %d is: %f",a,b,avg);
//	return 0;
//}
//int sum(int x,int y)
//{
//	int z;
//	z=x+y;
//	return z;
//}
//float average(int p,int q)
//{
//	int s;
//	float av;
//	s=sum(p,q);
//	av=(float)s/2;
//	return av;
//}
