#include<iostream>
using namespace std;

//task--1//


// int main(){
//     int arr[10]={10,30,20,30,10,20,40,50,60,70};
//     int length=10;

//     for (int i = 0; i < length; i++){
//         for (int j = i + 1; j < length;){
//             if (arr[i] == arr[j]){
//                 for (int k = j; k < length; k++){
//                     arr[k] = arr[k + 1];
//                 }
//                 length--;
//             }
//             else{
//                 j++;
//             }
//         }
//     }

//     cout << "\nChange Arr: ";
//     for (int i = 0; i < length; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }


//task--2//

// int main(){
//     int arr2[5] = {10, 45, 30, 45, 20};
//     int largest = arr2[0];
//     int second;

   
//     for(int i = 0; i < 5; i++)
//     {
//         if(arr2[i] > largest)
//         {
//             largest = arr2[i];
//         }
//     }

   
//     second = arr2[0];
//     for(int i = 0; i < 5; i++)
//     {
//         if(arr2[i] > second && arr2[i] < largest)
//         {
//             second = arr2[i];
//         }
//     }

//     cout << "Largest = " << largest << endl;
//     cout << "Second Largest = " << second;


// }
  



//task--3//

// int main(){
//     int arr[5]={10,5,50,40,20};

//     // Ascending
//     for(int i=0;i<5;i++)
//         for(int j=i+1;j<5;j++)
//             if(arr[i]>arr[j]) swap(arr[i],arr[j]);

//     cout<<"Ascending: ";
//     for(int i=0;i<5;i++) cout<<arr[i]<<" ";

//     // Descending
//     for(int i=0;i<5;i++)
//         for(int j=i+1;j<5;j++)
//             if(arr[i]<arr[j]) swap(arr[i],arr[j]);

//     cout<<"\nDescending: ";
//     for(int i=0;i<5;i++) cout<<arr[i]<<" ";
// }


//task--4//

// int main(){
//     int arr[5]={10,-50,30,-100,50};
//     int neg=0,pos=0;
//     for(int i=0;i<5;i++){
//         if(arr[i]>0){

//             pos++; 
//         }
//         else if(arr[i]<0){
//             neg++;
//         }
//     };
//     cout<<"postive:"<<pos<<endl;
//     cout<<"negative:"<<neg<<endl;
// }



//task--5//


// int main()
// {
// int arr4 [5] = {10 , 5 , 30 , 3 , 7};
// int size2 = sizeof(arr4)/ sizeof(arr4[0]);
// int evenVal[5];
// int j = 0;
// int oddVal[5];
// int k = 0;

// for(int i = 0 ; i<size2 ; i++){
//     if(arr4[i] % 2 == 0 ){
//         evenVal[j] = arr4[i];
//         j++;
//     }else{
//         oddVal[k] = arr4[i];
//         k++;
//     }
// }
//  cout << "Even value :" <<endl ;
// for(int i = 0 ; i<j ; i++){
//     cout << evenVal[i] << " " <<endl;
// }
// cout << "Odd value :" <<endl ;
// for(int i = 0 ; i<k ; i++){
//     cout << oddVal[i] << " " <<endl;
// }
// }
