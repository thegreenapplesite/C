# include <stdio.h>
# include <stdlib.h>


int main() {

    // Difference between Array and Pointers

    int myarr[4];
    int *pointerArray;
    
    pointerArray=myarr;
    

        myarr[0]=20;
        myarr[1]=40;
        myarr[2]=60;
        myarr[3]=80;


    printf("This is the value of the last element of the array %d\n",myarr[3]);
    printf("------Memory address of the Array---------:\n");
    printf("This is the memorry address of array using myarr     %p\n",myarr);
    printf("This is the memorry address of array using &myarr    %p\n",&myarr);
    printf("This is the memorry address of array using &myarr[0] %p\n",&myarr[0]);
    printf("This is the memorry address of array using &myarr[1] %p\n",&myarr[1]);
    printf("This is the memorry address of array using &myarr[2] %p\n",&myarr[2]);
    printf("This is the memorry address of array using &myarr[3] %p\n",&myarr[3]);

    printf("\n");
    printf("------How to move between memory address of the pointerArray---------:\n");
    printf("This is the memorry address of the pointerArray base      %p\n",pointerArray);
    printf("This is the memorry address of the pointerArray+1         %p\n",pointerArray+1);
    printf("This is the memorry address of the pointerArray+2         %p\n",pointerArray+2);
    printf("This is the memorry address of the pointerArray+3         %p\n",pointerArray+3);
    

    printf("\n");
    printf("------How to move derefence---------:\n");
    printf("This is the memorry address of the pointerArray base      %d\n",*pointerArray);
    printf("This is the memorry address of the pointerArray[1]        %d\n",pointerArray[1]);
    printf("This is the memorry address of the *(pointerArray+1)      %d\n", *(pointerArray+1) );


    printf("\n");
    printf("------How to change the value of the first lement---------:\n");
    *pointerArray=160;
    printf("This is the memorry address pointerArray is equal to  %p The value is    %d\n",pointerArray,*pointerArray);
    printf("The memory address of the 1st element of myarray[0] is   %p Its value is %d\n", &myarr[0], myarr[0]);


    printf("\n");
    printf("------How to change the value of the last lement---------:\n");
    pointerArray[3]=480;
    printf("This is the memorry address pointerArray[3]=480          %p Its value is    %d\n",(pointerArray+3),pointerArray[3]);
    printf("The memory address of the   myarray[3] is                %p Its value is    %d\n", &myarr[3], myarr[3]);

    return 0;

}