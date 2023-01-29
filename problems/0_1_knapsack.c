#include<stdio.h>
#include<time.h>


int max(int x, int y ){
    if (x > y)return x;
    else return y;
}

typedef struct {
    int weight;
    int value;
} Item;

int re_knapsack(Item list[],int length,int knapsack_capacity){
    int result;
    if(  knapsack_capacity == 0 || length == 0){
        result = 0;
    }
    else if(list[length - 1].weight > knapsack_capacity){
        result = re_knapsack(list,length - 1,knapsack_capacity);

    }
    else {
        //if we put it there

        int value_if_inside = list[length - 1].value + re_knapsack(list,length -1 , knapsack_capacity - list[length - 1].weight);

        //if we don't

        int value_if_outsie = re_knapsack(list,length - 1,knapsack_capacity);

        result = max(value_if_inside,value_if_outsie);

        
    }



    return result;

}




void main(){
    Item list[3] = {
        {4,1}, { 5,2},{1,3}
    };


    int max = re_knapsack(list,3,4);

    printf("%d\n",max);

}