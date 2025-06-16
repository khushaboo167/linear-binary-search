//Q1.. find the lower bound using linear search
// TC=o(n)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9] = {1,2,4,5,9,15,18,21,24};
//     int n=9;
//     int x=12;
//     for(int i=0;i<n;i++){
//         if(arr[i]>x){
//             cout<<arr[i-1];
//             break;
//         }
//     }
// }





// find the lower bound using binary search
// TC=o(logn)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9] = {1,2,4,5,9,15,18,21,24};
//     int n=9;
//     int x=12;
    
//     int low=0;
//     int high=n-1;
//     bool flag=false;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==x){
//             flag=true;
//             cout<<arr[mid-1];
//             break;
//         }
//         else if(arr[mid]<x) low=mid+1;
//         else high=mid-1;
//     }
//     if(flag==false) cout<<arr[high];
// }






//Q2.. given a sorted array of n elements and a target 'x'. find the first occurrence of 'x'x in the array. if 'x' does not exit return -1.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
//     int n=13;
//     int x=4;

//     int low=0;
//     int high=n-1;
//      bool flag=false;
//     while(low<=high){
//     int   mid=low+(high-low)/2;
//         if(arr[mid]==x){
//             if(arr[mid-1]!=x){
//                 flag=true;
//                 cout<<mid;
//                 break;
//             }
//             else{
//                 high=mid-1;
//             }
//         }
//         else if(arr[mid]<x) low=mid+1;
//         else high=mid-1;
//     }
//     if(flag==false) cout<<-1;
// }





//Q3.. given a sorted array of non - negative distinct integers, find the smallest missing non-negative element in it.
// using linear search
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,1,2,3,4,5,8,10,16};
//     int n=8;
//     for(int i=0;i<n;i++){
//         if(i!=arr[i]) { cout<<i;
//         break;
//         }
//     }
// }



// given a sorted array of non - negative distinct integers, find the smallest missing non-negative element in it.
// using linear search
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,1,3,4,5,8,10,16};
//     int n=9;
//     int low=0;
//     int high=n-1;
//     int ans=-1;

//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==mid) low=mid+1;
//         else{
//             ans=mid;
//             high=mid-1;
//         }
//     }
//     cout<<ans;
// }