#include<stdio.h>
#include<addfunction.h>

int main()
{
    int choice,num1,num2;
    printf("Enter the operations to be operated 1.Add 2.Mul");
    scanf("%d",&choice);
    printf("Enter the 1st numbr");
    scanf("%d",&num1);
    printf("Enter the 2nd numbr");
    scanf("%d",&num2);


    if(choice == 1)
    {
        int result = add(num1,num2);
        print("sum is %d",result);

    }
    elif(choice == 2)
    {
        int result = mul(num1,num2);
        print("product is %d",result);
    }
}