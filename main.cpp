#include <iostream>
using namespace std;

int* coolFunc(int array[], int target);

int main(int argc, const char * argv[]) {
    cout << "H.O.P.E.\n";  // Greeting code!
    int arr[] = { 77, 12, 10, 9, 45, 2, -10, 10, 45, 55, 65, 75, 88}; // Testing input
    int target = 1035;// Testing Target
    int s = sizeof(arr)/ sizeof(arr[0]); // Calculating number of items
    arr[s]=NULL;// Safety null so that coolFunc can count the number of items
    // cout<<"el tamaño del array en main es: "<<s<<endl; // Assert
    cout << "coolFunc Call!"<<endl; //
    int * x = coolFunc(arr, target); // function Call
    // cout<<"Respuesta: "<<arr[0]<<" - "<<arr[1]<<endl; // Answer
    cout<<"Target: "<<target<<endl<<"Respuesta: "<<*(arr+0)<<"  "<<*(arr+1)<<endl; // Answer
    return 0;
}

int* coolFunc(int array[], int target){
    int size =0;
    int resp[2];
    while(array[size]){
        size ++;        // Array Item Count
    }
    cout<<"El tamaño del array en coolFunces: "<<size<<endl; // upper triangular matrix iteration
    for (int i = 0; i < size; i++){
        //cout<<i<<" "<<array[i]<<endl;
        // cout<<endl;
        for (int j = i+1; j < size; j++){
            // cout<<i<<" "<<j<<" - ";
            if(array[i]+array[j]==target){
                // cout<<"Exitooooouu"<<endl;
                cout<<endl<<i<<" "<<j<<" - ";
                array[0]=array[i];           // Return the answer using the input array to save memory
                array[1]=array[j];           // Return the answer using the input array to save memory
                return 0;
            };
        }
    }
    array[0]=NULL;           // Return the answer using the input array to save memory
    array[1]=NULL;
    
    return 0;
}
