#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_students 1000;

// Student Model
typedef struct Student
{
    char name[30];
    int roll_no;
    int fee;
} Student_T;

// Array of all students
Student_T *students[1000];
int size = 0;

// Create a new student
Student_T *createStudent()
{
    char n[30];
    int roll_no;

    printf("Enter roll no: ");
    scanf("%d", &roll_no);

    printf("Enter name: ");
    getchar();
    gets(n);

    Student_T *st = (Student_T *)malloc(sizeof(Student_T));
    strncpy(st->name, n, sizeof(st->name));
    st->roll_no = roll_no;
    st->fee = 0;
    return st;
}

// Searching for student in array
int searchStudent()
{
    int roll_no;
    printf("Enter roll no of a registered student: ");
    scanf("%d", &roll_no);

    for (int i = 0; i < size; i++)
        if (students[i]->roll_no == roll_no)
            return i;
    printf("No such student found.\n");
    return -1;
}

// Add a new student
void addStudent()
{
    Student_T *st = createStudent();
    students[size++] = st;
    printf("Student added.\n");
}

// View a student
void view()
{
    int index = searchStudent();
    if (index != -1)
    {
        printf("Name: ");
        puts(students[index]->name);
        printf("Roll No: %d\n", students[index]->roll_no);
        printf("Fee Deposited: %d\n", students[index]->fee);
    }
}

// Delete a student
void dltStudent()
{
    int index = searchStudent();
    if (index != -1)
    {
        for (int i = index; i < size - 1; i++)
            students[i] = students[i + 1];
        size--;
        printf("Student Deleted.\n");
    }
}

// Update a student
void updateStudent()
{
    int index = searchStudent();
    if (index != -1)
    {
        int fee;
        printf("Enter new details:\n");
        Student_T *st = createStudent();
        printf("Enter fee (-1 for unchanged): ");
        scanf("%d", &fee);
        if (fee == -1)
            st->fee = students[index]->fee;
        else
            st->fee = fee;

        students[index] = st;
        printf("Student updated.\n");
    }
}

// Getting fee status
int getFee()
{
    int index = searchStudent();
    if (index != -1)
    {
        printf("Fees deposited is %d\n", students[index]->fee);
        return students[index]->fee;
    }
    return -1;
}

// Depositing fee
void depositFee()
{
    int index = searchStudent();
    if (index != -1)
    {
        int fee;
        printf("Enter fee to be added: ");
        scanf("%d", &fee);
        students[index]->fee += fee;
        printf("Fee deposited.\n");
    }
}

int getQuery()
{
    int q;

    printf("\n\nEnter 0 to add new student.\n");
    printf("Enter 1 to view student.\n");
    printf("Enter 2 to delete a student.\n");
    printf("Enter 3 to update a student.\n");
    printf("Enter 4 to get fee status.\n");
    printf("Enter 5 to deposit fee.\n");
    printf("Enter -1 to quit program.\n");

    scanf("%d", &q);
    printf("\n\n");
    return q;
}

int main()
{
    printf("Welcome to our library!!!\n");
    int query;

    do
    {
        query = getQuery();
        switch (query)
        {
        case 0:
            addStudent();
            break;
        case 1:
            view();
            break;
        case 2:
            dltStudent();
            break;
        case 3:
            updateStudent();
            break;
        case 4:
            getFee();
            break;
        case 5:
            depositFee();
            break;
        case -1:
            break;
        default:
            printf("Incorrect query. Enter again\n");
            break;
        }
    } while (query != -1);

    printf("Thanks for using our library!!!\n");

    return 0;
}