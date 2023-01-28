#include<stdio.h>

void print_array(int arr[],int length){

    for (int i= 0; i< length; i++){
        printf("Index: %d Value: %d\n",i,arr[i]);
    }

}

void insert(int arr[],int length,int item, int index){

    //can be updated lol


    int temp[length];

    if (index >= length ){
        printf("Error: Index out of bound\n");
        return;
    }else{

        for(int i = index;i< length;i++){
            //copy items to the temp array

            temp[i+1] = arr[i];
        }


        //put the item at ith index
        arr[index] = item;

        //switch back everything from the other array.


        for(int i = index + 1;i< length;i++){
            //copy items to the temp array
            arr[i] = temp[i];
        }


    }
}


void delete(int arr[],int length, int index){


    if (index >= length ){
        printf("Error: Index out of bound\n");
        return;
    }else{

        for(int i = index;i< length - 1;i++){

            arr[i] = arr[i+1];
        }


    }
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void insertion_sort(int array[],int length){

    for ( int i  = 1; i < length; i ++) {

        for( int j = 0; j < i;j++) {
            if( array[i] > array[j]) {
                swap(&array[i], &array[j]);
            }
        }


        
    }

}



void main() {
    int main[4] = {4,2,5,3};
    insertion_sort(main,4);
    print_array(main,4);

}