#include <stdio.h>

int main()

{
	int i,j;
	for(i=1;i<=5;i++)
	{
	 for(j=1;j<=5;j++)
	  {
	  	printf("2");
	  }
	 printf("\n");
	}
	
	{
	int i,j;
	for(i=1;i<=5;i++)
	{
	 for(j=1;j<=i;j++)
	  {
	  	printf("5");
	  }
	 printf("\n");
	}
	
	{
	int i,j;
	for(i=1;i<=5;i++)
	{
	 for(j=5;j>=i;j--)
	  {
	  	printf("A");
	  }
	 printf("\n");
	}
	
	{
	int i,j;
	for(i=1;i<=6;i++)
	{
	 for(j=1;j<=i;j++)
	  {
	  	printf("%d", j);
	  }
	 printf("\n");
	}
	
	{
	int i,j;
	for(i=1;i<=5;i++)
	{
	 for(j=1;j<=5;j++)
	  {
	  	if((i+j)<=5)
	  	printf(" ");
	  	else
	  	printf("r");
	  }
	 printf("\n");
	}
	
	{
	int i,j;
	for(i=1;i<=5;i++)
	{
	 for(j=1;j<=i;j++)
	  {
	  	printf("%d", i);
	  }
	 printf("\n");
	}
	
	{
	int i,j,number=1;
	for(i=1;i<=5;i++)
	{
	 for(j=1;j<=i;j++)
	  {
	  	printf("%d", number);
	  	number++;
	  }
	 printf("\n");
	}
	
	{
	int i,j,rows=5,space;
	for(i=1;i<=5;i++)
	{
	 for(space=1 ; space<=(rows-i);space++)
	  {
	  	printf(" ");
	  }
	  for(j=1;j<=i;j++)
	  {
	  	printf("b ");
	  }
	 printf("\n");
	}
	
	{
	int i,j,rows=5,space;
	for(i=1;i<=5;i++)
	{
	 for(space=1 ; space<=(rows-i);space++)
	  {
	  	printf(" ");
	  }
	  for(j=1;j<=2*i-1;j++)
	  {
	  	printf("Y");
	  }
	 printf("\n");
	}
	
	{
	int i,j,rows=5,space;
	for(i=5;i>=1;i--)
	{
	 for(space=1 ; space<=(rows-i);space++)
	  {
	  	printf(" ");
	  }
	  for(j=1;j<=2*i-1;j++)
	  {
	  	printf("z");
	  }
	 printf("\n");
	}
	
	{
		int i,j,space,rows=5;
		for(i=1; i<=rows; i++)
		{
		 for(space=1; space<=rows-i; space++)
		 {
		 	printf(" ");
		 }
		 for(j=1; j<=2*i-1; j++)
		 {
		 	printf("O");
		 }
		 printf("\n");
		}
		for(i=rows; i>=1; i--)
		{
			for(space=1; space<=rows-i; space++)
			{
				printf(" ");
			}
			for(j=1; j<=2*i-1; j++)
			{
				printf("O");
			}
			printf("\n");
		}
	}
	
	{
	int i,j,space,rows=5;
	for(i=1;i<=rows;i++)
	{
	 for(j=1; j<=i; j++)
	  {
	  	printf("R");
	  }
	  printf("\n");
    }
	  for(i=rows-1; i>=1; i--)
	  {
	  	for(j=1; j<=i; j++)
	  {
	  	printf("R");
	  }
	 printf("\n");
	}
	
	{
	int i,j,rows=5;
	for(i=1;i<=rows;i++)
	{
	 for(j=1; j<=i; j++)
	  {
	  	printf("%c",j+64);
	  }
	  printf("\n");
    }
   }
   
   {
	int i,j;
	for(i=5;i>=1;i--)
	{
	 for(j=1; j<=i; j++)
	  {
	  	printf("%c",j+64);
	  }
	  printf("\n");
    }
   }
   
   {
	int i,j;
	for(i=1;i<=5;i++)
	{
	 for(j=1; j<=i; j++)
	  {
	  	printf("%c",64+i);
	  }
	  printf("\n");
    }
   }
   
{
 int num=6,n,r,c,sp;
 printf("\n");
 n=num;
 for(r=1; r<=num; r++)
 {
  for(sp=1; sp<=r; sp++)
    printf(" ");
  for(c=1; c<=n; c++)
    printf("p");
  for(c=num-r; c>=1; c--)
    printf("p");
  n--;
  printf("\n");
 }
 for(r=2; r<=num; r++)
 {
  for(sp=num-r+1; sp>=1; sp--)
    printf(" ");
  for(c=1; c<=r; c++)
    printf("p");
  for(c=r-1; c>=1; c--)
    printf("p");
  printf("\n");
 }
 
 {
    printf("I\n");
    printf("  N\n");
    printf("    D\n");
    printf("      I\n");
    printf("        A\n");
    
}


 {
    printf("     A     \n");
    printf("    A A    \n");
    printf("   A   A   \n");
    printf("  AAAAAAA  \n");
    printf(" A       A \n");
    printf("A         A\n");
}

{
    printf("BBBBBB \n");
    printf("B    B \n");
    printf("B    B \n");
    printf("BBBBB  \n");
    printf("B    B \n");
    printf("B    B \n");
    printf("BBBBBB \n");
}

{
    printf("CCCCCC \n");
    printf("C      \n");
    printf("C      \n");
    printf("C      \n");
    printf("C      \n");
    printf("C      \n");
    printf("CCCCCC \n");
}

{
    printf("DDDDD  \n");
    printf("D    D \n");
    printf("B    D \n");
    printf("D    D  \n");
    printf("D    D \n");
    printf("D    D \n");
    printf("DDDDD  \n");
}

{
    printf("EEEEEE \n");
    printf("E      \n");
    printf("E      \n");
    printf("EEEEE  \n");
    printf("E      \n");
    printf("E      \n");
    printf("EEEEEE \n");
}

{
    printf("FFFFFF \n");
    printf("F      \n");
    printf("F      \n");
    printf("FFFFF  \n");
    printf("F      \n");
    printf("F      \n");
    printf("F      \n");
}

{
    printf("GGGGGG \n");
    printf("G      \n");
    printf("G      \n");
    printf("G GGGG \n");
    printf("G    G \n");
    printf("G    G \n");
    printf("GGGGGG \n");
}

{
    printf("H    H \n");
    printf("H    H \n");
    printf("H    H \n");
    printf("HHHHHH \n");
    printf("H    H \n");
    printf("H    H \n");
    printf("H    H \n");
}

{
    printf("IIIII \n");
    printf("  I   \n");
    printf("  I   \n");
    printf("  I   \n");
    printf("  I   \n");
    printf("  I   \n");
    printf("IIIII \n");
}

{
    printf(" JJJJJJJ\n");
    printf("    J   \n");
    printf("    J   \n");
    printf("    J   \n");
    printf(" J  J   \n");
    printf(" J  J   \n");
    printf("  JJ    \n");
}

{
    printf("K   K \n");
    printf("K  K  \n");
    printf("K K   \n");
    printf("KK    \n");
    printf("K K   \n");
    printf("K  K  \n");
    printf("K   K \n");
}

{
    printf("L      \n");
    printf("L      \n");
    printf("L      \n");
    printf("L      \n");
    printf("L      \n");
    printf("L      \n");
    printf("LLLLLL \n");
}

{
    printf("MM     MM\n");
    printf("M  M M  M\n");
    printf("M  M M  M\n");
    printf("M  M M  M\n");
    printf("M   M   M\n");
    printf("M       M\n");
    printf("M       M\n");
}

{
    printf("N      N\n");
    printf("NN     N\n");
    printf("N N    N\n");
    printf("N  N   N\n");
    printf("N   N  N\n");
    printf("N    N N\n");
    printf("N     NN\n");
}

{
    printf(" OOOO  \n");
    printf("O    O \n");
    printf("O    O \n");
    printf("O    O \n");
    printf("O    O \n");
    printf("O    O \n");
    printf(" OOOO  \n");
}

{
    printf("PPPPPP \n");
    printf("P    P \n");
    printf("P    P \n");
    printf("PPPPP  \n");
    printf("P      \n");
    printf("P      \n");
    printf("P      \n");
}

{
    printf("QQQQQQQQQ\n");
    printf("Q       Q\n");
    printf("Q       Q\n");
    printf("Q   Q   Q\n");
    printf("Q  Q Q  Q \n");
    printf("Q Q   Q Q \n");
    printf("QQQQQQQQQ \n");
    printf("         Q\n");
    printf("          Q\n");
    printf("           Q\n");
}

{
    printf("RRRRR \n");
    printf("R    R \n");
    printf("R    R \n");
    printf("RRRRR  \n");
    printf("R R \n");
    printf("R   R \n");
    printf("R    R \n");
}

{
    printf(" SSSSS \n");
    printf("S     \n");
    printf("S      \n");
    printf(" SSSS \n");
    printf("     S \n");
    printf("     S \n");
    printf("SSSSS \n");
}

{
    printf("TTTTTTT\n");
    printf("   T\n");
    printf("   T\n");
    printf("   TT\n");
    printf("   T\n");
    printf("   T\n");
    printf("   T\n");
}

{
    printf("u     u\n");
    printf("u     u\n");
    printf("u     u\n");
    printf("u     u\n");
    printf("u     u\n");
    printf("u     u\n");
    printf(" UUUUU \n");
}

{
    printf("v           v\n");
    printf(" v         v\n");
    printf("  v       v\n");
    printf("   v     v\n");
    printf("    v   v \n");
    printf("     v v  \n");
    printf("      v    \n");
}

{
    printf("w           w           w\n");
    printf(" w         w w         w\n");
    printf("  w       w   w       w\n");
    printf("   w     w     w     w\n");
    printf("    w   w       w   w\n");
    printf("     w w         w w\n");
    printf("      w           w\n");
}

{
    printf("x           x\n");
    printf(" x         x\n");
    printf("  x       x\n");
    printf("   x     x\n");
    printf("    x   x \n");
    printf("     x x  \n");
    printf("      x    \n");
    printf("      x      \n");
    printf("     x x     \n");
    printf("    x   x   \n");
    printf("   x     x\n");
    printf("  x       x\n");
    printf(" x         x\n");
    printf("x           x\n");
}

{
    printf("Y           Y\n");
    printf(" Y         Y\n");
    printf("  Y       Y\n");
    printf("   Y     Y\n");
    printf("    Y   Y \n");
    printf("     Y Y  \n");
    printf("      Y    \n");
    printf("      Y    \n");
    printf("      Y    \n");
    printf("      Y    \n");
    printf("      Y    \n");
}

{
    printf("ZZZZZZZ\n");
    printf("     Z\n");
    printf("    Z\n");
    printf("   Z\n");
    printf("  Z\n");
    printf(" Z  \n");
    printf("ZZZZZZZ\n");
}

{
    printf("  11\n");
    printf(" 1 1\n");
    printf("1  1\n");
    printf("   1\n");
    printf("   1\n");
    printf("   1\n");
    printf("1111111\n");
}

{
    printf(" 22222\n");
    printf("2     2\n");
    printf("2    2\n");
    printf("    2\n");
    printf("   2\n");
    printf("  2  \n");
    printf(" 222222\n");
}
 
{
    printf("333333 \n");
    printf("     3 \n");
    printf("     3 \n");
    printf(" 33333 \n");
    printf("     3 \n");
    printf("     3 \n");
    printf("333333 \n");
}

{
    printf("4       \n");
    printf("4    4 \n");
    printf("4    4 \n");
    printf("444444  \n");
    printf("     4 \n");
    printf("     4 \n");
    printf("     4 \n");
}
   
{
    printf("555555 \n");
    printf("5     \n");
    printf("5     \n");
    printf("555555  \n");
    printf("     5 \n");
    printf("     5 \n");
    printf("555555\n");
}

{
    printf("666666\n");
    printf("6     \n");
    printf("6     \n");
    printf("666666 \n");
    printf("6    6 \n");
    printf("6    6 \n");
    printf("666666 \n");
}

{
    printf("7777777 \n");
    printf("     7 \n");
    printf("    7 \n");
    printf("   7 \n");
    printf("  7 \n");
    printf(" 7 \n");
    printf("7 \n");
}

{
    printf(" 8888 \n");
    printf("8    8 \n");
    printf("8    8 \n");
    printf(" 8888 \n");
    printf("8    8 \n");
    printf("8    8 \n");
    printf(" 8888 \n");
}

{
    printf("999999 \n");
    printf("9    9 \n");
    printf("9    9 \n");
    printf(" 99999 \n");
    printf("     9 \n");
    printf("     9 \n");
    printf("999999 \n");
}

{
    printf("   1    0000000\n");
    printf(" 1 1    0     0\n");
    printf("1  1    0     0\n");
    printf("   1    0     0\n");
    printf("   1    0     0\n");
    printf("   1    0     0\n");
    printf("   1    0     0\n");
    printf("1111111 0000000\n");
}
 return 0;
}
}
}
}
}
}
}
}
}
}
}
}
