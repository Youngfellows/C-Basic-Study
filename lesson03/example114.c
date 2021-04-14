#include<stdio.h>
#include<stdlib.h>

#define LEN 3

enum Color{red,yellow,blue,white,black};

int main()
{

		enum Color i,j,k,pri;
		int n,loop;

		n = 0;
		for(i=red;i<=black;i++)
		{
				for(j=red;j<=black;j++)
				{
						if(i != j)
						{
								for(k=red;k<=black;k++)
								{
										if((k != i) && (k != j))
										{
												n = n + 1;
												printf("%-4d",n);
												for(loop = 1;loop <= LEN;loop++)
												{
														switch(loop)
														{
																case 1:
																		pri = i;
																		break;
																case 2:
																		pri = j;
																		break;
																case 3:
																		pri = k;
																		break;
																default:
																		break;
														}

														switch(pri)
														{
																case red:
																		printf("%-10s","red");
																		break;
																case yellow:
																		printf("%-10s","yellow");
																		break;
																case blue:
																		printf("%-10s","blue");
																		break;
																case white:
																		printf("%-10s","white");
																		break;
																case black:
																		printf("%-10s","black");
																		break;
																default:
																		break;
														}
												}
											printf("\n");
										}
								}
							

						}
				}
		}

		printf("total number:%d\n",n);

		return 0;
}
