#include<stdio.h>
void print_array(int arr[],int length){

    for (int i= 0; i< length; i++){
        printf("Index: %d Value: %d\n",i,arr[i]);
    }

}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}



int selection_sort(int arr[],int length){
   
    for(int i = 0; i < length; i++) {
        int minimum_index = i;
        for(int j = i  + 1; j < length; j ++) {

            if( arr[j] < arr[minimum_index]) {
                minimum_index = j;
            }
            

        }
        swap(&arr[minimum_index],&arr[i]);
    }

}



void main(){
    int main[4] = {4,2,5,3};
    selection_sort(main,4);


    print_array(main,4);
}