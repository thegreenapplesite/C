# include <stdio.h>
# include <stdlib.h>

// Dynmaic integere Array

int main() {

    int *a=(int*)malloc(20 * sizeof(int));
    int b;


    // Fill the pointer
    for (int i =0; i<20; i++) {
        a[i] = i+1;
    }


    // Print the pointer
    for (int i =0; i<20;i++)   {
        printf("%d ", a[i]);
    } 


    //Ask the user an input
    printf("\n");
    printf("Please give me one number:");
    scanf("%d",&b);
    printf("%d\n",b);
    
    
    //Reallocate memory of the pointer a
    a=realloc(a,b*sizeof(int));

    //Fill the array
    for (int s =0; s<b; s++) {
        a[s] = s+1;
    }


    // Reprint the pointer
    for (int s =0; s<b;s++)   {
        printf("%d ", a[s]);
    } 

    printf("\n");
    free(a);
    return 0;

}