
#include <stdio.h>
#include<conio.h>
void tower(int, char, char, char);

main(void)
{
	int n;
	printf("Enter trhe  number of disk:");
	scanf("%d", &n);
	tower(n,'A','C','B');
}

void tower (int n, char frompeg, char topeg, char auxpeg)
{
	if (n==1)
	{
		printf("\n%s%c%s%c", "move disk 1 from peg ", frompeg, " to peg ", topeg);
		return;
	}
	tower (n-1,frompeg, auxpeg, topeg);
	printf("\n%s%d%s%c%s%c", "move disk ", n, " from peg ", frompeg, " to peg ", topeg);
	tower (n-1, auxpeg, topeg, frompeg);
	getch();
}
