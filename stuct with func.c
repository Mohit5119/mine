#include<stdio.h>
struct stud
{
    char name[20];
    int roll;
    int age;
};
void accept()
{
    struct stud s1;
    printf("enter info of student ");
    scanf("%s %d %d",&s1.name,&s1.roll,&s1.age);
    diso(s1);
    struct stud s2={"sumit",102,22};
    diso(s2);
}
void diso(struct stud t1)
{
    printf("%s %d %d",t1.name,t1.roll,t1.age);
}
void main()
{
    printf("start of prog");
    accept();
}
