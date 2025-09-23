#include <stdio.h>
int main()
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