#include <stdio.h>
#include <string.h>
int basic_if_else()
{
    int a=10;
    int b=20;

    if (a>30 || b>30)
    {

        printf("this statement or if method is true\n");
    }
else
    {
        printf("If condition is wrong\n");
    }

    return 0;
} 

int odd()
{
int x;

    for(x=11; x<=19; x+=2)
    printf("number %d=%d\t\n",x,x);


    return 0;
}

int table_27()
{
    int x,y=27;
    for(x=1;x<=10;x++)
    printf("%dx%d=%d\n",y,x,y*x);

    return 0;
}

int add_scan()
{
    int x,y;
    printf("enter x:");
    scanf("%d",&x);

    printf("enter y:");
    scanf("%d",&y);

    printf("x+y=%d\n",x+y);

    return 0;

}

int pattern()
{
    int i,j;
    for(i=1;i<=4;i++){{for (j=1; j<=4; j++)
    printf("%d ",j);
}
printf("\n");}
    return 0;
}

int fladd()
{
    float x=2.345, y=7.284, z=x+y;

    printf("x=%f\n",x);
    printf("y=%f\n",y);
    printf("z=x+y=%f\n",z);
    return 0;
}

int for_loop()
{
    int x=1;
    for(int i=1; i<=10; i++)
    {
        printf("%d\n",x);
    }


    return 0;
}

int psswd()
{
   char a[8];
   
   printf("Enter Password:");
   scanf("%s",a);
   while(strcmp(a,"TMKOC")!=0)
   {
    printf("\nWrong Password\nTry Again\n\n");
    printf("Enter Password:");
    scanf("%s",a);
   }

   printf("\n\n");

    return 0;
}

int swap()
{
    int a=5,b=10;

    a=a*b;
    b=a/b;
    a=a/b;

    printf("a=%d\nb=%d\n",a,b);
    
    return 0;
}

int even()
{
    int x;
    printf("\nEnter a number:");
    scanf("%d",&x);

    if (x%2==0)
        {printf("\nYour number is an EVEN number\n\n");}
else 
    {printf("Your number is an ODD number\n\n");}

    return 0;
}

int tkt()
{
    int choice, n, time, price;
    
    printf("1. Saiyara (180Rs)\n2. Dabang (140Rs)\n3. Sant Tukaram (120Rs)\n4. Muktai(200Rs)\n5. URI (220Rs)\n\n");
    
    printf("Enter choice number: ");
    scanf("%d", &choice);

    printf("Number of Tickets: ");
    scanf("%d", &n);

    printf("\nTime slot\n1. 4:00 to 7:00\n2. 8:00 to 11:00\n3. 11:00 to 2:00\n\n");
    printf("Choose your time slot: ");
    scanf("%d", &time);

    printf("\nYour movie: ");
    if(choice==1)printf("Saiyara\n\n");
    else if(choice==2)printf("Dabang\n\n");
    else if(choice==3)printf("Sant Tukaram\n");
    else if(choice==4)printf("Muktai\n\n");
    else if(choice==5)printf("URI\n\n");
    else printf("Invalid\n");
    
    printf("Tickets Purchased: %d\n", n);

    if(time==1){printf("Your Time Slot: 4:00 to 7:00\n");}
    else if(time==2){printf("Your Time Slot: 8:00 to 11:00\n");}
    else if(time==3){printf("Your Time Slot: 11:00 to 2:00\n");}
    else printf("Your Time Slot: Invalid\n");

    if(choice==1){price=180;printf("Final Payment: %d\n", price*n);}
    else if(choice==2){price=140;printf("Final Payment: %d\n", price*n);}
    else if(choice==3){price=120;printf("Final Payment: %d\n", price*n);}
    else if(choice==4){price=200;printf("Final Payment: %d\n", price*n);}
    else if(choice==5){price=220;printf("Final Payment: %d\n", price*n);}
    else printf("Final Payment: Invalid\n");

    return 0;
}

int main()
{
    basic_if_else();
    odd();
    table_27();
    add_scan();
    pattern();
    fladd();
    for_loop();
    psswd();
    swap();
    even();
    tkt();

    return 0;
}