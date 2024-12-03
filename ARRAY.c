DECLARATION OF ARRAY AND INITIALISATION 

INT ARRAY_NAME[5]={1,2,3,4,5}//

PROGRAM1:INTIALISING AND DISPLAYING ARRAY

#include <stdio.h>
int main(){
    int array1[5]={1,2,4,5,6,};
    int i;
    for (i=0;i<5;i++)
        {printf("%d",array1[i]);
        }
        return 0;

}

PROGRAM2 :FINDING MAX VALUE AND MIN VALUE 

#include<stdio.h>
int main(){
    int array_2[5]={1,2,3,4,5};
    int max=array_2[0];
    int min=array_2[0];
    int i;

    for (i=1;i<5;i++){
        if (array_2[i]>max){
            max=array_2[i];
                
            }
        if (array_2[i]<min){
            min=array_2[i];
        }   
    }
    printf("max value is %d",max);
    printf("min value is %d",min);
}


PROGRAM3 : ARRAY SUM AND AVERAGE 
#include<stdio.h>
int arr[5]={1,10,3,18,5};
int i;
int main(){
int sum=0;
float average;
    for (i=0;i<5;i++){
        sum+=arr[i];
    }
    average=sum/5.0 ;

    printf("printf the sum %d\n",sum);
 printf("printf the average %f",average);
 
}





PROGRAM4 :Bubble Sort Algorithm

#include <stdio.h>

int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    int temp;

    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Bubble Sort
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

 PROGRAM5:Find the Frequency of an Element in an Array

 #include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 1, 4, 1};
    int search, count = 0;

    printf("Enter the element to find frequency: ");
    scanf("%d", &search);

    for (int i = 0; i < 6; i++) {
        if (arr[i] == search) {
            count++;
        }
    }

    printf("Frequency of %d is: %d\n", search, count);

    return 0;
}





