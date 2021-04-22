#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char ch;
	char newch[50];
	int i=0;
	int j;
	int count = 0;
	fp = fopen("newfile.txt","r");
	printf("\nThe Original Content is:\n");
	ch = getc(fp);
	while(ch!=EOF)
	{
		count++;
		putchar(ch);
		newch[i]=ch;
		i++;
		ch = getc(fp);
	}
	printf("\n\n--------------------------------\nThe content in reverse order is:\n");
	for(j=(count-1);j>=0;j--)
	{
		ch = newch[j];
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
//Aditya Kuranjekar....MyCaptain->HAPPY CODING
