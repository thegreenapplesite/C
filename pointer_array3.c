# include <stdio.h>
# include <stdlib.h>

int main() {

    // Declaring an array of pointers
    // This program show how to make quick comparion between string using pointer

    int yourselection;

    char *mylist[] = {
        "Java",
        "C",
        "Python",
        "Javascript",
        "Java"
    };

    printf("What do you like programming\n");

    printf("0:Java\n");
    printf("1:C\n");
    printf("2:Python\n");
    printf("3:Javascript\n");

    printf("Please enter your selection:");
    scanf("%d",&yourselection);
    printf("%s\n",mylist[yourselection]);

    if (mylist[yourselection]==mylist[1]) {
        printf("You selected C, Congratulation\n");
    }

    else{
          printf("You have selected %s", mylist[yourselection] );  
          printf(" which is not my favorite\n");
        }

    return 0;

}