/* write a c program that prints the student details including 
name,rollno,mobilenumber,gender,addresss,and average of four subjects marks*/

#include <stdio.h>
struct student {
    char name[50];
    int rollNumber;
    char gender;
    char mobile[15];
    char address[100];
    float M1,M2,M3,M4;
}
float calculatepercentage of(float M1,M2,M3,M4){
    return (M1+M2+M3+M4)/4.0;
}
int main(){
    struct studen
    printf("Enter student name:");
    scanf("%d",Name);
    printf("Enter student rollnumber:");
    scanf("%d",rollnumber);
    printf("Enter student gender(M/F):");
    scanf("%c",gender);
    printf("Enter student mobile number:");
    scanf("%s",mobile);
    printf("Enter student address:");
    scanf("%s",address);
    printf("Enter student marks M1:");
    scanf("%f",M1);
    printf("Enter student marks M2:");
    scanf("%f",M2);
    printf("Enter student marks M3");
    scanf("%f",M3);
    printf("Enter student marks M4");
    scanf("%f",M4);

    floatpercentage = calculatepercentage(student.M1,student.M2,student.M3,student.M4);

    printf("\nstudent details:\n");
    printf("name:is\n",student.name);

    printf("rollnumber:%d\n",rollnumber);
    printf("gender:%c",gender);
    printf("mobile:%s\n",mobile);
    printf("address:%s\n",address);
    printf("marks in M1:%.2f\n,M1");
    printf("marks in M2:%.2f\n,M2");
    printf("marks in M3:%.2f\n,M3");
    printf("marks in M4:%.2f\n,M4");
    printf("average percentage:%.2f\n,percentage");

    return 0;


}