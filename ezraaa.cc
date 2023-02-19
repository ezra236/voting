#include<stdio.h>
#include<string.h>
int main()
{
	char kenyan;
	int id;
	int passport;
	int age;
	printf("Are you kenyan=YES(Y) or NO(N)");
	scanf("%c",&kenyan);
	printf("your age=");
	scanf("%d",&age);
	if(((kenyan=='Y')||(kenyan=='y'))&&(age>17))
	{
		printf("you have an id=YES(1) or NO(0)");
		scanf("%d",&id);
		if((id==1)&&(kenyan=='y'))
		{
			printf("you are eligible to vote");
		}
		else
		printf("you have an passport=YES(1) or N0(0)");
		scanf("%d",&passport);
		if((passport==1)&&(kenyan=='y'))
		{
			printf("you are eligible to vote");
      	}	
	}
	else
	printf("you are not eligible to vote");
return 0;
}