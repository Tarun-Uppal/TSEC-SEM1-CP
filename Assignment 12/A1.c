#include <stdio.h>
#include <string.h>

struct person {
    char name[20];
    int balance, damount, pin, depositmore, wamount;
};

void main()
{

    int n, tempin, depositmore, wamount;
    char name2[20];
    printf("Enter number of people \n");
    scanf("%d", &n);
    struct person p[n], temp;
    for (int i = 0; i<n; i++){
        printf("Enter your name\n");
        scanf("%s", &p[i].name);

        printf("Enter amount of money you want to deposit\n");
        scanf("%d", &p[i].damount);
        p[i].balance = p[i].damount;

        again:
        printf("Enter 4 digit pincode\n");
        scanf("%d", &p[i].pin);
        if(p[i].pin<999 || p[i].pin>10000){
            printf("Invaild pin entered (Must be a 4 digit pin code)\n");
            goto again;
        }
    }
    char tempname[20];
    int temppin;

    printf("Login Begins\n");

    int count = 0;
    login:
        if (count>=3) {
            printf("Login attempt count exceeded");
            return;
        }
        count ++;
    printf("Enter your name\n");
    scanf("%s", &tempname);
    printf("Enter 4 digit pincode\n");
    scanf("%d", &temppin);

    int index = -1;
    for (int i= 0; i<n;i++){
        if (strcmp(p[i].name, tempname) == 0 && temppin == p[i].pin){
            index = i;
            break;
        }
    }
    if (index == -1){
        printf("Invalid login details\n");
        goto login;
    } else {
        printf("Login Valid\n");
        int choice;
        selection:
        printf("1-Check Balance\n2-Deposit Money\n3-Withdraw Money\n4-Exit\n");
        scanf("%d" , &choice);
        if (choice == 1){
            printf("Your balance is %d\n", p[index].balance);
        } else if (choice == 2) {
            int amt;
            printf("Enter Amount to deposit\n");
            scanf("%d", &amt);
            p[index].balance += amt;
            printf("Your balance is %d\n", p[index].balance);
        } else if (choice == 3) {
            int amt;
            printf("Enter Amount to withdraw\n");
            scanf("%d", &amt);
            if (p[index].balance >= amt){
                p[index].balance -= amt;
            } else {
                printf("Insufficient Balance\n");
                amt = 0;
            }
            printf("Amount wihtdrawn is %d\n", amt);
            printf("Your balance is %d\n", p[index].balance);
        } else if (choice == 4) {
            return;
        } else {
            printf("Invalid choice\n");
        }
            goto selection;
    }
}
