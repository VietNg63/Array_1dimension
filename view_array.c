#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "ODA_library.h"
int main(){
   int no_of_element;
   printf("no of element ; ");
   scanf("%d",&no_of_element);
   int size_of_array;
   printf("\nsize of array: ");
   scanf("%d",&size_of_array);
   int a[size_of_array];
   double b[size_of_array];
   //insert array
   Insert_array( a, no_of_element);
   //export array
   export_array(a, no_of_element);
   // view code
   int check =  find_perfect_element(a, no_of_element);
   printf("\n%d",check);
}  
