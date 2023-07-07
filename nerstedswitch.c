#include<stdio.h>
#include<stdlib.h>
void main()
{
	 int a,btech,degree,agritech;
	 system("clear");
	 printf("\n 1.B.Tech ");
	 printf("\n 2.Degree");
	 printf("\n 3.Agri science: ");
	 printf("\n Enter your course: ");
	 scanf("%d",&a);
	 switch(a)
	 {
		 case 1:
			 printf("\n you have choosen B.Tech:");
			 printf("\n 1.computer science B.Tech: ");
			 printf("\n 2.Information Technologies B.Tech: ");
			 printf("\n Electronical and communications: ");
			 printf("\n Electrical and Electronics: ");
			 printf("\n choose which one you want: ");
			 scanf("%d",&btech);
			 switch(btech)
			 {
				 case 1:
					 printf("\n you have choosen computer science: ");
					 break;
				 case 2:
					   printf("\n you have choosen informational technology: ");
                                         break;
				 case 3:
					   printf("\n you have choosen ECE: ");
                                         break;
				case 4:
                                           printf("\n you have choosen EEE: ");
                                         break;
 
					                                        
				 
					  
				 default:
					 printf("\n you have choosen invaid options");
			 }
		 case 2:
			   printf("\n welcome to degree");
			   printf("\n 1.Bsc computers");
			   printf("\n 2.Bsc general");
			   printf("\n 3.Bsc Agri");
			   printf("\n 4.Bsc Biotech");
			   printf("\n 5.Bcom computers");
			   printf("\n 6.Bcom general");
			   printf("\n 7.B.A General");
			     printf("\n 8.B.A computers");
printf("\n\n choose which coruse you want: ");
scanf("%d",&degree);
switch (degree)
{
               case 1:
                           printf("\n you have choosen Bsc computers ");
                           break;
			    case 2:
                           printf("\n you have choosen Bsc general ");
                           break;
			    case 3:
                           printf("\n you have choosen Bsc Agri ");
			   break;
			    case 4:
                           printf("\n you have choosen Bsc Biotech");

                           break;
			    case 5:
                           printf("\n you have choosen Bcom computers ");
                           break;
			    case 6:
                           printf("\n you have choosen Bcom general ");

                           break;
			    case 7:
                           printf("\n you have choosen BA General ");
                           break;
			    case 8:
                           printf("\n you have choosen BA computers ");
                           break;
			    default:
			   printf("\n you have choosen invalid couse");
}
}
}








                            










