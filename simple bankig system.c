#include<stdio.h>
int main()
{
    int a;
    int fo=1;
    float balance=0.0;
    float num1,num2,num3,num4;
    float bal,with,rem;
    printf("\n1.CREATE ACCOUNT\n2.DEPOSIT MONEY\n3.WITHDRAW MONEY\n4.CHECK BALANCE\n5.EXIT");
printf("\nENTER THE OPTION NUMBER FROM THE LIST:");
    scanf("%d",&a);
    while(1){
    switch(a){
        //creating account:
    case 1:
        printf("ENTER YOUR ACCOUNT NUMBER:");
        scanf("%f",&num1);
        char name[50];
        printf("ENTER YOUR NAME:");
        scanf("%s",name);
        printf("YOUR BALANCE IS %f",balance);
        printf("\nyour account is created successfully:)");
        printf("\nPLEASE DEPOSIT ATLEAST 500 TO AVOID PENALTY\n");
        break;
    case 2:
        //depositing money:
        printf("ENTER YOUR ACCOUNT NUMBER:");
        scanf("%f",&num2);
        if(num1==num2){
        float money_deposit;
        printf("ENTER A AMOUNT TO DEPOSIT:");
        scanf("%f",&money_deposit);
        bal=balance+money_deposit;
        printf("YOUR BALANCE IS :%f",bal);}
        else{
            printf("NO ACCOUNT EXIST IN THIS ACCOUNT NUMBER");
        }
        break;

    case 3:
        //withdraw money:
        printf("ENTER YOUR ACCOUNT NUMBER:");
        scanf("%f",&num3);
        if(num3==num1){
        printf("ENTER A AMOUNT TO WITHDRAW:");
        scanf("%f",&with);
        if(with<=bal){
          rem=bal-with;
         printf("%f WITHDRAWED SUCESSFULLY!",with);
         printf("\nYOUR BALANCE IS %f",rem);
    }
        else{
            printf("YOUR BALANCE IS NOT SUFFICIENT");
            printf("\nYOUR BALANCE IS %f",bal);
        }
        }
        else{
        printf("NO ACCOUNT EXIST IN THIS ACCOUNT NUMBER");
        }
        break;


    case 4:
        //check balance:
        printf("ENTER YOUR ACCOUNT NUMBER:");
        scanf("%f",&num4);
        if(num4==num1){
        printf("YOUR BALANCE IS:%f",rem);
        }
        else{
        printf("NO ACCOUNT EXIST IN THIS ACCOUNT NUMBER");
        }
        break;
    case 5:
        fo=2;
        break;
    default:
        printf("INVALID OPTION NUMBER");
    }
   if(fo==2){
        printf("\t\t\t\t\tTHANKYOU");
        break;
    }

    printf("\n1.CREATE ACCOUNT\n2.DEPOSIT MONEY\n3.WITHDRAW MONEY\n4.CHECK BALANCE\n5.EXIT");
printf("\nENTER THE OPTION NUMBER FROM THE LIST:");
    scanf("%d",&a);
    }


    return 0;
}
