#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//design a structure named student with attributes
struct student
{
    int id;
    char name[10];
    char department[15];
    float hsc;
    float ssc;
};

// #define --> learn about define.
// Global Variable --> Can accessiable any where of the code
#define number_of_student 1000                   // it's mean "int number_of_student = 1000;" --> but doing it as a global and constant
int total_student = 0;                           // for tracking how many student are inserted --> like a counter
struct student student_lists[number_of_student]; // declare student array globally with sizeof 1000


void print_student_information(struct student st) //Print a single student information
{
    printf("ID          : %d\n",st.id);
    printf("NAME        : %s\n",st.name);
    printf("DEPARTMENT  : %s\n",st.department);
    printf("HSC RESULT  : %.2f\n",st.hsc);
    printf("SSC RESULT  : %.2f\n\n",st.ssc);
}

struct student find_by_studentId(int studentId) // return the student information by id
{
    for(int index =0; index <total_student; index++)
    {
        if(student_lists[index].id == studentId)    // check the condition if the student.id matches
        {
            return student_lists[index];            // then return the student
        }
    }
}

void get_studentInformation_byId(int id) // print a single student information
{
    struct student std = find_by_studentId(id); // return the student information by the id --> call the find_by_studentId(id)
    print_student_information(std);             // print the student informations
}

void calculate_waiver_student_id(int studentId) // calculate student waiver [SSC*5+HSC*10] converted into 50%
{
    struct student std = find_by_studentId(studentId); // return the student information by the id --> call the find_by_studentId(id)
    float total_waiver =0;

    total_waiver = ((std.ssc*5.0 + std.hsc*10.0)*50.0)/75.0; // calculate the waiver converted into 50%
    printf("Total Waiver : %.2f percent", total_waiver);
}

void save() // Save a single student's information
{
    printf("Enter student Id: ");
    scanf("%d",&student_lists[total_student].id);

    printf("Enter Student name: ");
    scanf("%s",&student_lists[total_student].name);

    printf("Enter student department: ");
    scanf("%s",&student_lists[total_student].department);

    printf("HSC result: ");
    scanf("%f",&student_lists[total_student].hsc);

    printf("SSC result: ");
    scanf("%f",&student_lists[total_student].ssc);

    total_student++; // increase the the tracking value --> like counter of the student
}

void get_all_student_data()  // Print all the student's informations
{
    if(total_student>0)
    {
        for(int i=0; i<total_student; i++)
        {
            print_student_information(student_lists[i]); // call print_student_information() function for print single student information
        }
    }
    else
    {
        printf("No student available \n");
    }
}

int main()
{
    while(1)
    {
        int select_input; // select - for switch case
        int input_studentId;
        printf("1. Get all student \n");
        printf("2. Save \n");
        printf("3. Calculate waiver \n");
        printf("4. Find by student Id \n");
        printf("5. Exit \n");

        printf("\n\nSelect an input: ");
        scanf("%d",&select_input);

        switch (select_input)
        {
        case 1:
            get_all_student_data();
            break;

        case 2:
            save();
            printf("successfully saved !");
            break;

        case 3:
            printf("Enter a student Id: ");
            scanf("%d", &input_studentId);
            calculate_waiver_student_id(input_studentId);
            break;

        case 4:
            printf("Enter a student Id: ");
            scanf("%d", &input_studentId);
            get_studentInformation_byId(input_studentId);
            break;

        case 5:
            exit(0);
            break;

        default :
            printf("Invalid number \n");
        }
        getch();        // hold the program for a input
        system("cls");  // clear the console
    }
    return 0;
}
