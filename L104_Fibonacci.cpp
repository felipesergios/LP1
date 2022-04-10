#include <iostream>
#include <vector>
using namespace std;
std::vector<int> fib_below_n ( unsigned int n );
int main() {
    int n = 0;
    cin>>n;
    std::vector<int> fib_numbers;
    fib_numbers=fib_below_n(n);
    
    for (int i=0; i<fib_numbers.size(); i++){
    cout<<" "<< fib_numbers[i];
    }
    
    
    return 1;
}


std::vector<int> fib_below_n ( unsigned int n ){
std::vector<int> myvector;
    if(n==1){
        return myvector;
    }
    myvector.push_back(1);
    int t1 = 0;
    int t2 = 1;
    int cont = 3;
    //cout<<"-> "<<t1<<" ->"<<t2;
    while(cont<= n){
        int t3=t1+t2;
        if(t3 < n){
    //cout<<" -> "<<t3;
    myvector.push_back(t3);
    t1=t2;
    t2=t3;
    cont +=1;
        }else{
            break;
        }
        
        
    }
    return myvector;
}
