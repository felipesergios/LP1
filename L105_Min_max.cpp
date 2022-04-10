#include <iostream>
#include <vector>
#include <utility> 

using namespace std;
std::pair <int ,int> min_max ( int numbers_vector[], int n );
int main()
{
    std::pair <int ,int> result;
    //int myint = 0;
    //cin>>myint;
    int numbers_vector[10]={5,4,1,3,1,10,7,10,6,8};
   // for(int i=0;i<myint;i++){
    //    cin>>numbers_vector[i];
    //}
    
    
    result=min_max( numbers_vector, 10 );
     cout<<get<0>(result)<<" "<<get<1>(result) << '\n';
    
    
    return 0;
}

std::pair <int ,int> min_max ( int numbers_vector[], int n ){
    int max_number=0;
    int lower_number=0;
    int pos1,pos2=0;
    max_number=numbers_vector[0];
    lower_number=numbers_vector[0];
    for(int i=1;i<n;i++){
        if(lower_number>numbers_vector[i]){
            lower_number=numbers_vector[i];
            pos1=i;
         
            
        }
        if(max_number<=numbers_vector[i]){
            max_number=numbers_vector[i];
            pos2=i;
        }
    
    }
    std::pair <int ,int> min_max;
    min_max.first=pos1;
    min_max.second=pos2;
    return min_max;
}
