
#include<stdio.h>
void main()
{
    int pin=1234,deposit,withdrawal,balance,a,option,amount=1000,w1,w2,num;
    printf("Welcome to ATM service!!\n");
   
    printf("enter your pin:\n");
    scanf("%d",&a);
    if(a==pin)
    {
        printf("________________ entry_successful_________________\n");
        do{
        printf("1.balance enquiry\n2.withdrawal\n3.Deposit\n4.exit\n");
        scanf("%d",&option);
       
        switch(option)
        {
            case 1:
           
                printf("your balance is =%d",amount);
                break;
   
           
            case 2:
           
                printf("Enter the amount that you need to withdraw:\n");
                scanf("%d",&withdrawal);
                w1=amount-withdrawal;
                printf("%d\n",w1);
                break;
               
           
            case 3:
           
                printf("enter the amount that you need to deposit:\n");
                scanf("%d",&deposit);
                w2=amount+deposit;
                printf("%d\n",w2);
                break;
           
            case 4:
           
                printf("thanks for using our ATM service!!!\n");
                break;
        }printf("do you need to continue press 1\n");
            scanf("%d",&num);
           
           
            }
            while(num==1);
    }
    else{
        printf("you have entered the wrong pin number\n");
    }
}
