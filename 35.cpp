#include <iostream>
using namespace std;
int partion(int arr[],int s,int e){
    int pivot=arr[s];
    
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivot at the  its right position 
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);
    
    int i=s;
    int j=e;
    while(i<pivotindex&&j>pivotindex){
        
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex&&j>pivotindex){
            swap(arr[i++],arr[j--]);
        
    }
    
}
return pivotindex; 
}
//############################################
void quicksort(int arr[],int s,int e){
    //base conditions
    if(s>=e){
        return ;
        
    } 
   
   
    //partion karege
    int p=partion(arr,s,e);
    //right part sort karo..
     quicksort(arr,p+1,e);
  
    quicksort(arr,s,p-1);
    //left wala wpart
    
}

//#######################################
int main() {
   int arr[11]={5,88,9,5,5,4,1,454,555,45,47};
   int n=11;
   quicksort(arr,0,n-1);
   
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}
