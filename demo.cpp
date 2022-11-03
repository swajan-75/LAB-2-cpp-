#include<iostream>
#include"arrayUtility.h"
int main(){
    int arr[4]={1,22,3,4};
    int **arr2 = new int*[3];
    arr2[0]=new int[4];
    arr2[1]=new int[4];
    arr2[2]=new int[4];

    int **arr3 = new int*[3];
    arr3[0]=new int[4];
    arr3[1]=new int[4];
    arr3[2]=new int[4];

   // input1DArry(arr2,5);
   print1DArry(arr,4);
    //reversePrint1DArray(arr,4);
    //searchIn1DArray(arr,4,3);
    //cout<<findMax1DArray(arr,4);
    //cout<<findMin1DArray(arr,4);

   /* copy1DArray(arr,arr2,4);
    print1DArry(arr2,4);*/

   /* sort1DArray(arr,4);
    print1DArry(arr,4);
    */

    //input2DArray(arr2,3,4);
   // cout<<endl;
    //print2DArray(arr2,3,4);
    //cout<<endl;
    //reversePrint2DArray(arr2,3,4);
    //searchIn2DArray(arr2,3,4,7);
    //cout<<findMax2Darray(arr2,3,4);
    //cout<<findMin2Darray(arr2,3,4);
    //copy2DArray(arr2 , arr3,3,4);
    //cout<<endl;
    //print2DArray(arr3,3,4);



}