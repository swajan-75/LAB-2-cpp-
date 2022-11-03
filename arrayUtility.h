#include<iostream>
using namespace std;
void print1DArry(int *arr ,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void reversePrint1DArray(int *arr, int size){
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
void input1DArry(int *arr ,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void searchIn1DArray(int *arr,int size , int searchKey){
    for(int i=0;i<size;i++){
        if(searchKey==arr[i]){
            cout<<"Array Found in index "<<i<<endl;
            break;
        }
    }
}
int findMax1DArray( int *arr , int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max ;
}
int findMin1DArray( int *arr , int size){
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min ;
}
void copy1DArray(int *arr,int *arr2 , int size ){
        for(int i=0;i<size;i++){
            arr2[i]=arr[i];
        }
}
void sort1DArray(int arr[],int size){
    int min ,temp2 , index;
    for(int i=0;i<size;i++){
        min = arr[i];
        for(int j=i;j<size;j++){
            if(arr[j] <= min){
                index = j; 
                min=arr[j];
            }
        }
         temp2 = arr[i];
         arr[i]=arr[index];
         arr[index]=temp2;
    }
}
void print2DArray(int **m, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
void input2DArray(int **m, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> m[i][j];
        }
    }
}
void reversePrint2DArray(int **m, int row, int col)
{
    for (int i = row-1; i >=0; i--)
    {
        for (int j = col-1; j >=0; j--)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
void searchIn2DArray(int **arr , int row , int col,int searchKey){
    for(int i=0;i<(row);i++){
        for(int j=0;j<col;j++){
            if(searchKey==arr[i][j]){
                cout<<"Number is Found in index ( "<<i<<","<<j<<" )"<<endl;
            }
        }
    }

}
int  findMin2Darray(int **arr , int row , int col){
    int min=arr[0][0];
    for(int i=0;i<(row);i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            } 
        }
    }
    return min;

}
void copy2DArray(int **arr , int **arr2 , int row , int col ){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr2[i][j]=arr[i][j];
        }
    }
}



