// in this code i can access all the data from file
//Sequential
#include <stdio.h>
#include <stdlib.h>

struct student {
           int id;
           char name[8];
           float cgpa;
};
void read(struct student bro);
int main()
{
    int i=1,n,x,a,y;
    struct student stud;
    printf("Enter students information!\n");
    while (1)
    {
        printf("Information for student %d\n",i);
        printf("Enter ID(-1 to quit):\n");
        scanf("%d",&n);
        if (n==-1)
            break;
            stud.id=n;
        printf("Enter Name:\n");
        scanf("%s",stud.name);
        printf("Enter Cgpa:\n");
        scanf("%f",&stud.cgpa);
        i++;
        read(stud);
    }


     FILE *bro;
       bro=fopen("test.txt","r");
    if (bro==NULL)
        printf("File doesn't exist\n");
     else {
     printf("\nFile has opened!\n");
     while (1) {
     fscanf(bro,"%d%s%f",&stud.id,&stud.name,&stud.cgpa);
     if (feof(bro))
        break;
     printf("ID:%d\n",stud.id);
     printf("Name:%s\n",stud.name);
     printf("Cgpa:%.2f\n\n",stud.cgpa);
     }
     }
     fclose(bro);
    return 0;

}

void read(struct student bro)
{
    struct stud{
     int id;
     char name[8];
    float cgpa;
 };
 struct stud std;
    int i;
    FILE *sis;
     sis=fopen("test.txt","a");

     if (sis==NULL)
        printf("File could not open\n");
     else {
    // printf("File has been opened!\n");

     fprintf(sis,"%d\n",bro.id);
     fputs(bro.name,sis);
     fflush(stdin);
     fprintf(sis,"\n");
     fprintf(sis,"%.2f\n\n",bro.cgpa);
     }
 fclose(sis);
}
