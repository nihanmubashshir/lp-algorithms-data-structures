#include<stdio.h>

// insert function to insert a value inside an array.


//how do I make a function return an array?


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

//driver code
void main(){

    int x[6] = {1,2,3,5,4};
    insert(x,6,5,0);
    print_array(x,6);
    delete(x,6,3);

    printf("Deleted an item. \n");
    print_array(x,6);




}