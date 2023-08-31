# include <stdio.h>
int main ()
{
	float percentage,DM,ML,C,EDS,ME,obtained_marks;
	printf("Enter DM marks:");
	scanf("%f", &DM);
	printf("Enter ML marks:");
	scanf("%f", &ML);
	printf("Enter C marks:");
	scanf("%f", &C);
	printf("Enter EDS marks:");
	scanf("%f", &EDS);
	printf("Enter ME marks:");
	scanf("%f", &ME);
	obtained_marks = DM + ML + C + EDS + ME;
	printf("%f obtained marks\n",obtained_marks);
	percentage = obtained_marks/500*100;
	printf("%f Percent\n",percentage);
	if(percentage>=60 && percentage<70)
	{
		printf("Grade B");
    }
    if(percentage>=70 && percentage<80)
    {
    	printf("Grade A");
	}
	if(percentage>=80 && percentage<90)
	{
		printf("Grade E");
	}
	if(percentage >=90 && percentage<100)
	{
		printf("Grade O");
	}
}
