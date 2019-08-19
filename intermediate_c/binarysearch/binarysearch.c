#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x) ;

int main (void){
int array[] = {1,2,3,4,5,6,9,10,11};
int middlepos,number=0;
printf("lunghezza dell' array è %ld\n",sizeof(array)/sizeof(array[0]));
printf(" quale numero vuoi controllare?\n");
scanf("%d",&number);
printf("%d\n",array[number]);










    return 0;
}


int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 