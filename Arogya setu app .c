#include<stdio.h>
#include<conio.h>
void main()
{	
	char a,b,c,d;
	upa:
	printf("\nAre you have any symptom of covid 19(y\\n) :");
	a=getche();
	if (a=='y'||a=='Y'||a=='n'||a=='N')
	{
		upb:
		printf("\nAre you contect in covid 19 patient in last few days(y\\n) :");
		b=getche();
		if (b=='y'||b=='Y'||b=='n'||b=='N')
		{
			upc:
			printf("\nAre you go to outside in last few days(y\\n) :");
			c=getche();
			if (c=='y'||c=='Y'||c=='n'||c=='N')
			{
				upd:
				printf("\nAre you restrict any covid guideline(y\\n) :");
				d=getche();
				if (d=='y'||d=='Y'||d=='n'||d=='N')
				{
					
					if((a=='Y'||a=='y')&&(b=='Y'||b=='y')&&(c=='Y'||c=='y')&&(d=='Y'||d=='y'))
					{
						printf("\nYou are suffering from covid 19 :");
					}
					else
					{
						if((a=='N'||a=='n')&&(b=='N'||b=='n')&&(c=='N'||c=='n')&&(d=='N'||d=='n'))
						{
							printf("\nYou are not suffering from covid 19 :");
						}
						else
						{
							printf("\nYou may be suffering from covid 19.\nYou should check to doctor.");
						}
					}
				}
				else
				{
					printf("\nInvalid character\a");
					goto upd;
				}
			}
			else
			{
				printf("\nInvalid character\a");
				goto upc;
			}
		}
		else
		{
			printf("\nInvalid character\a");
			goto upb;
		}	
	}
	else
	{
	printf("\nInvalid character\a");
	goto upa;
	}
}

