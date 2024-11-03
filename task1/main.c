#include <stdio.h>
#include <string.h>



typedef struct {
	int	intId;
	char	chrName[50]; //100 names, each name takes up to 50 charachters
	float	fltGpa;
} Student;

int main(){
	int	intNumberOfStudents=0;

	Student students[100];

	printf("Enter the number of students: ");
	scanf("%d",&intNumberOfStudents);

	//for saving information
	for (int i=0;i<intNumberOfStudents;i++){
		printf("Enter ID for student #%d: ",i+1);
		scanf("%d",&students[i].intId);

                printf("Enter name for student #%d: ",i+1);
                scanf("%s",&students[i].chrName);

                printf("Enter GPA for student #%d: ",i+1);
                scanf("%f",&students[i].fltGpa);

                }

	printf("\nStudent Records: \n");
	//for displaying information
	for (int j=0;j<intNumberOfStudents;j++){
		printf("ID: %d, Name: %s, GPA: %f\n",students[j].intId,students[j].chrName,students[j].fltGpa);
	}
return 0;
}

