/*https://www.hackerrank.com/challenges/deque-stl/problem*/
#include <iostream>
#include <algorithm>

void printKMax(int arr[], int n, int k){
   //Write your code here.
    int max_pos = -1; //use to skip repeated inner loop
    for(int offset = 0; offset+k <= n;++offset){
        if(max_pos < offset){ // if max value is out of the window
            auto iter = std::max_element( arr+offset, arr+(offset)+k ); //excluding end element
            std::cout << *iter << " ";
            max_pos = iter - arr;
        }else{//try compare max value with the next value
            if (arr[max_pos] <= arr[offset+k-1]){
                std::cout << arr[offset+k-1] << " ";
                max_pos = offset+k-1;
            }else{// max_po still if new value is smaller
                std::cout << arr[max_pos] << " ";
            }
        }
    }
   std::cout <<"\n";
}
int main(){
  
   int t;
   std::cin >> t;
   while(t>0) {
      int n,k;
       std::cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            std::cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
0026
