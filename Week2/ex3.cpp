#include<iostream>
using namespace std ;
int& getElement( int arr[] , int index){
    return arr[index];
}
int main (){
    int array[6]= {4, 8, 15, 16, 23, 43};
     int& ref = getElement(array ,4);

     ref = 99;
    for(int i = 0 ; i < 6 ; i++){
    cout << array[i] ;
    cout << " " ;
}
}
