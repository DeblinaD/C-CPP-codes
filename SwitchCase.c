//wap using switch statement asking the user to enter a day. if weekend print a message enjoy, if weekday then print you have to still work.
#include<stdio.h>
#include<conio.h>
int main()
{
	int options;
	printf("\n 1. Monday");
		printf("\n 2.Tuesday");
			printf("\n 3.Wednesday");
				printf("\n 4.Thursday");
					printf("\n 5.Friday");
						printf("\n Saturday");
							printf("\n Sunday");
							printf("\n enter any option");
							      scanf("%d", &options);
							
						
							switch(options)
							{
								case 1:
							      printf("\n so sad you still have to work");
							      break;
									case 2:
										printf("\n so sad you still have to work");
							      break;
										case 3:
											printf("\n so sad you still have to work");
							      break;
											case 4:
												printf("\n so sad you still have to work");
							      break;
												case 5:
													printf("\n so sad you still have to work");
							      break;
													case 6:printf("\n enjoy");
							      break;
														case 7:printf("\n enjoy");
							      break;
							      default: 
								  printf("\n please enter a valid option");
														
								}
								return 0;	
}
