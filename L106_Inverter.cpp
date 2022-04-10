

#include <iostream>
#include <array>
using namespace std;
template <std::size_t SIZE>

void reverse ( std::array <std::string, SIZE> &arr );
int main()
{
    std::array <string , 4> Array_teste = {"um", "dois", "três", "quatro"};
    
    reverse(Array_teste);
    
    for(int i=0;i<Array_teste.size();i++){
        cout<<Array_teste[i]<<" ";
    }

    return 0;
}
template <std::size_t SIZE>
void reverse ( std::array <std::string, SIZE> &arr ){
    int tam = arr.size();
    for(int i =0;i<tam-i;i++){
        std::swap(arr[i],arr[tam-i-1]);
    }
}

