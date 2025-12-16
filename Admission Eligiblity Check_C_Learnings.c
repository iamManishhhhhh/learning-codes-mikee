#include <stdio.h>
#include <string.h>

struct StudentDetails{
    char name[100];
    int age;
    int marks;
    char address[1000];
    char remarks[1000];
};

int main(){
    
    struct StudentDetails data;
    // variable name data!
        printf("Enter Student Name\n");
        scanf("%s", &data.name);
        printf("Enter Student Age\n");
        scanf("%d", &data.age);
        printf("Enter Obtained Marks in 10+2\n");
        scanf("%d", &data.marks);
        printf("Enter Student Address\n");
        scanf("%s", &data.address);
        printf("Enter Student Remarks\n");
        scanf("%s", &data.remarks);
    //printing the collected data
        printf("Here's the Students data given by the user!\n");
        printf("%s\n", data.name);
        printf("%d\n", data.age);
        printf("%d\n", data.marks);
        printf("%s\n", data.address);
        printf("%s\n", data.remarks);

if (data.age >= 20 && data.marks >= 60) {
    printf("You're eligible for admission\n");
} 
else {
    printf("Sorry one of the condition for the admission is not being fulfilled, So unfortunately You're not eligible for admission, Sorry!\n");
}
if (data.age >= 20, data.marks >= 60) {
    printf("Would you like to continue for the further process!\n");
}
char choice[10];
scanf("%s", choice);
 if (strcmp(choice, "Yes") == 0 || strcmp(choice, "yes") == 0) {
        printf("You chose to continue. Process started... you will receive a phone call from our representaive soon!! Thanks\n");
    } else {
        printf("You chose not to continue. Process stopped.\n");
    }
}
