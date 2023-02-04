/* WAP to show difference between Structure and Union */

#include<stdio.h>
#define n 2
struct structuredemo
{
    char name[100];
    int roll_no;
    char branch[100];
    int sem;
};


union stu_acc
{
    int fees;
    char city[100];
};

void main (){

    struct structuredemo s[n]={{"harish",1,"cs",2},{"hari",2,"cs",2}};

    for (int i=0 ; i<n ; i++)
    {
        printf("enter name : ");
        scanf("%s",s[i].name);
        
        printf("enter roll no  : ");
        scanf("%d",&s[i].roll_no);

        
        printf("enter branch   : ");
        scanf("%s",s[i].branch);

        
        printf("enter sem  : ");
        scanf("%d",&s[i].sem);
    }

    for (int i=0 ; i<n ; i++)
    {
        printf("\nentered student\n==============");
        printf("\nname : ");
        puts(s[i].name);
        printf("\nroll no:%d",s[i].roll_no);
        printf("\nbranch : ");
        puts(s[i].branch);
        printf("\nsem:%d",s[i].sem);
    }

    union stu_acc un;

    un.fees=90000;
    printf("\ndetails of student account\n==========");
    printf("\nfees :%d",un.fees);

    strcpy(un.city,"surat");
    printf("\ncity is : ");
    puts(un.city);

    printf("diffrence between strcuture and union\ndiffrence one");
    for (int i = 0; i < n; i++)
    {
        printf("\naddress student\n=========");
        printf("\nname :%p",&s[i].name);

        printf("\nroll no:%p",&s[i].roll_no);
        printf("\nbranch:%p",&s[i].branch);
        printf("\nsem:%p",&s[i].sem);

    }

    printf("\nfees :%p",&un.fees);
    printf("\ncity is :%p",&un.city);
    printf("\ndiffrence two");
    printf("\nsize of structure:%d",sizeof(s));
    printf("\nsize of union:%d",sizeof(un));

}