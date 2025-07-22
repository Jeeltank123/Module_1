
#include<stdio.h>
main()
{
	 int q;//for quantity
	 int a;//for ammount
	 int total=0;//for contine
	 char con;
	int piz=130,bur=90,dos=100,idli=40;

	printf("\twelcome to hotel\n");
	      
	do{
	

	
	 printf("\n   --------menu-------\n");
	
	       
	       printf("   |1.Pizza    :%d  |\n",piz);
	       printf("   |2.Burger   :%d   |\n",bur);
	       printf("   |3.Dosa     :%d  |\n",dos);
	       printf("   |4.Idli     :%d   |\n",idli);
	printf("   -------------------\n");
	       
	       printf("\n");
	       
	       
	       int ch;// for choois

	       printf("enter yor choose: ");
	       scanf("%d",&ch);
	       printf("\n");
	       switch(ch)
	       {
	       	case 1:
	       	     printf("nice you orderd pizza\n");
	       	     break;
	       	
	       	case 2:
	       	     printf("nice you orderd burger\n");
	       	     break;
	       	
	       	case 3:
	       	     printf("nice you orderd dosa\n");
	       	     break;
	       	
	       	case 4:
	       	     printf("nice you orderd idli\n");
	       	     break;
	       	
	       	default:
                 printf("invelid\n");
		   }
		  
		   if(ch<=4)
				{
				    
				   
				   printf("enter the quantity : ");
				   scanf("%d",&q);
				   printf("\n");
				   
				   
				   switch(ch)
			       {
			       	case 1:
			       	     printf("ammount = %d\n",a=piz*q);
			       	     break;
			       	
			       	case 2:
			       	      printf("ammount = %d\n",a=bur*q);
			       	     break;
			       	
			       	case 3:
			       	      printf("ammount = %d\n",a=dos*q);
			       	     break;
			       	
			       	case 4:
			       	      printf("ammount = %d\n",a=idli*q);
			       	     break;
			       	
			       	default:
		                 printf("invelid\n");
				   }
				   total=total+a;
				   printf("total ammount = %d\n",total);
				   a=0;
				   
				   
				   printf("do you want to place more order? y for yes and n for no =");
				   scanf(" %c",&con);	
				   
				   }
			    else
			    {
			    	printf("chooes is out of menu");
				}
    }while(con=='y' || con=='Y' );            
            printf("\n thank you");
			
						  
}
		  
	       
	       
	       


	       

	
	
