#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    int indice=0;
    int indice2=0;
    int indice3=0;
    int indice4=0;
    int indice5=0;
    int valor_total=0;
    float porcent = 0;
    int Intervalos[]={0,0,0,0,0};
    while(cin>>ws>>x){
        
        if(x>=0 and x<25){
            Intervalos[0]++;
        }
        if(x>=25 and x<50){
            Intervalos[1]++;
        }
        if(x>=50 and x<75){
            Intervalos[2]++;
        }
        if(x>=75 and x<100){
            Intervalos[3]++;
        }
        
        if(x<0 or x>=100){
            Intervalos[4]++;
        }
        valor_total++;
        
    }
  int arrSize = sizeof(Intervalos)/sizeof(Intervalos[0]);
  for(int i=0;i<arrSize;i++){
      porcent=((Intervalos[i]*1.0)/valor_total)*100;
      cout<<setprecision(4)<<" "<<porcent<<endl;
  }
    return 0;    
}
