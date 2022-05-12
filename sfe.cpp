#include<bits/stdc++.h>

using namespace std;
int main(){
     int w = 0, cWhile = 0;
    while(w <= 100){
        w++;
        if(w % 2 == 0){
            cWhile++;
        }
       
    }
    printf("Dentro del while existen: %d numeros pares \n", cWhile);
    
    
    return 0;
}
