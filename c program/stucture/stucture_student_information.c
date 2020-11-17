#include<stdio.h>
#include<stdlib.h>
#include<string.h>
///Global structure
struct student_information
{
    char name[10];
    int id;
    char department[15];
};

void STUDENT(struct student_information st)
{


    printf("student name: %s\n",st.name);
    printf("student id: %d\n",st.id);
    printf("student department: %s\n",st.department);

}


int main()
{
    int student_number,i;
    printf("student number: ");
    scanf("%d",&student_number);

    ///array declaration and how many student need

    int number[student_number];

    for(i=0; i<student_number; i++)
    {
        printf("student number[%d]: ",i);
        scanf("%d",&number[i]);
    }
    printf("\n");

///structure declaration

    struct student_information information[i];

///taking student information from array

    for(i=0; i<student_number; i++)
    {
        printf("Student name: ");         ///student name
        scanf("%s",&information[i].name);
    }
    printf("\n");
    for(i=0; i<student_number; i++)
    {
        printf("Student ID: ");
        scanf("%d",&information[i].id);     ///student id
    }
    printf("\n");
    for(i=0; i<student_number; i++)
    {
        printf("Student department name: ");
        scanf("%s",&information[i].department);  ///student department name
    }
printf("\n");
    for(i=0; i<student_number; i++)
    {
        STUDENT(information[i]);
    }

    return 0;
}
