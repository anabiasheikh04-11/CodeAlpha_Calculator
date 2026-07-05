#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int choice, n = 0, i, id, found;

    while (1)
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Student ID: ");
            scanf("%d", &s[n].id);

            printf("Enter Student Name: ");
            scanf(" %[^\n]", s[n].name);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Student Record Found!\n");
            }
            else
            {
                printf("\nID\tName\t\tMarks\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%.2f\n", s[i].id, s[i].name, s[i].marks);
                }
            }
            break;

        case 3:
            printf("Enter Student ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i].id == id)
                {
                    printf("ID: %d\n", s[i].id);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found!\n");
            break;

        case 4:
            printf("Enter Student ID to Update: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i].id == id)
                {
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", s[i].name);

                    printf("Enter New Marks: ");
                    scanf("%f", &s[i].marks);

                    printf("Record Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found!\n");
            break;

        case 5:
            printf("Enter Student ID to Delete: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i].id == id)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }
                    n--;
                    printf("Student Deleted Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found!\n");
            break;

        case 6:
            printf("Thank You!\n");
            exit(0);

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}