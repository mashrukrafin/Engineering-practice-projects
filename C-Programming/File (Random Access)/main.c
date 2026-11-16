//Random Access

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int id;
    char name[8];
    float cgpa;
};

void random();
void fdata();
void edata();

int main() {
    printf("Enter students information!\n");
    random();
    return 0;
}

void random() {
    int i,y,n;
    char a[7];
    struct student std;
    FILE *ptr;

    ptr = fopen("test.bin", "rb+");
    if (ptr == NULL) {
        printf("File could not open\n");
       // ptr=fopen("test.bin","wb+");
        return 0;
    }

    printf("File has been opened!\n");

    while (1) {
        printf("Enter id: (exit to quit):\n");

        if (scanf("%d", &n) == 0) {
            gets(a);
            if (strcmp(a, "exit") == 0) {
                break;
            }
        }
        else {
            std.id = n;
            fseek(ptr, (std.id-1)*sizeof(struct student), 0);
            printf("Enter name:\n");
            scanf("%s", std.name);
            printf("Enter cgpa:\n");
            scanf("%f", &std.cgpa);
            fwrite(&std, sizeof(struct student), 1, ptr);
        }
    }
    fclose(ptr);

    ptr = fopen("test.bin", "r+b");
    if (ptr == NULL) {
        printf("\nFile could not open\n");
        return;
    }

    printf("\nFile has been opened!\n");


   printf("1.To see whole data\n");
   printf("2.To see particular data\n");
   printf("3.To edit a particular data\n");
   scanf("%d",&y);
   if (y==2) {
    while (1) {
        printf("Enter id: (exit to quit):\n");

        if (scanf("%d", &n) == 0) {
            scanf("%s", a);
            if (strcmp(a, "exit") == 0) {
                break;
            }
        }
        else {
        int idd=n;
   // printf("\nEnter the student ID to retrieve: ");
    //scanf("%d", &idd);

    int offset = (idd - 1) * sizeof(struct student);
    fseek(ptr, offset, 0);
    printf("The offset is %d\n", offset);

    int count = fread(&std, sizeof(struct student), 1, ptr);
    if (count == 1 && std.id == idd) {
        printf("Student ID: %d\n", std.id);
        printf("Name: %s\n", std.name);
        printf("CGPA: %.2f\n", std.cgpa);
    } else {
        printf("No record found for student ID: %d\n", idd);
    }
            }
        }
    }
   else if (y==3)
    edata();
   else fdata();
       fclose(ptr);
}

void fdata()
{
        int y;
        struct student std;
    FILE *ptr;

    ptr = fopen("test.bin", "rb");
    if (ptr == NULL) {
        printf("File could not open\n");
    }

    printf("\nFile has been opened!\n");
        printf("%-10s%-8s%7s\n","ID","Name","CGPA");

    while (1) {
            y=fread(&std, sizeof(struct student), 1, ptr);
            if (feof(ptr))
                break;
            if (y==1 && std.id!=0)
       printf("%-10d%-8s%7.2f\n", std.id, std.name, std.cgpa);
    }
    fclose(ptr);
}

void edata()
{
    int y,i,x;
    char a[8];
    float f;
        struct student std;
    FILE *ptr;
        ptr = fopen("test.bin", "rb+");
    if (ptr == NULL) {
        printf("File could not open\n");
    }
    else {
 printf("Enter the id no. of acc to modify:\n");
scanf("%d",&y);
fseek(ptr, (y-1) * sizeof(struct student), 0);
fread(&std, sizeof(struct student), 1, ptr);

printf("What do you want to modify?\n1.ID\n2.Name\n3.CGPA\n");
scanf("%d",&x);

switch(x) {
    case 1:
        printf("Enter the new id:\n");
        scanf("%d",&i);
        std.id = i;
        break;
    case 2:
        printf("Enter the new name:\n");
        scanf("%s", a);
        strcpy(std.name,a);
        break;
    case 3:
        printf("Enter the new cgpa:\n");
        scanf("%f", &std.cgpa);
        break;
    default:
        printf("Invalid choice.\n");
        break;
}
fseek(ptr, (y-1) * sizeof(struct student), 0);
fwrite(&std, sizeof(struct student), 1, ptr);
    }
    fclose(ptr);
}
