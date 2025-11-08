#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll_no;
    int physics;
    int chemistry;
    int math;
    int total;
};
void main()
{
    int length;
    printf("Enter the Number of students: ");
    scanf("%d", &length);
    struct student s1[length];
    for(int i = 0; i<length; i++){
        getchar();
        printf("Enter the student name: ");
        gets(s1[i].name);
        printf("Enter the student roll no: ");
        scanf("%d", &s1[i].roll_no);
        printf("Enter the student physics: ");
        scanf("%d", &s1[i].physics);
        printf("Enter the student chemistry: ");
        scanf("%d", &s1[i].chemistry);
        printf("Enter the student math: ");
        scanf("%d", &s1[i].math);
        s1[i].total = s1[i].physics + s1[i].chemistry + s1[i].math;
    }
    for (int i = 0; i<length-1;i++){
        for(int j = 0;j<length-1;j++){
            if(s1[j].total<s1[j+1].total){
                struct student temp = s1[j];
                s1[j] = s1[j+1];
                s1[j+1] = temp;
            }
        }
    }
    printf("The student details are as follows:\n");
    printf("Sr. No\tName\tRoll Number\tPhysics\tChemistry\tMaths\n");
    for(int i = 0; i<length; i++){
        printf("%d.\t%s\t%d\t\t%d\t%d\t\t%d\n",(i+1),s1[i].name, s1[i].roll_no, s1[i].physics, s1[i].chemistry, s1[i].math);
    }
}
