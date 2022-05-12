 int d = 0, cDo = 0;
    do{
        d++;
        if(d % 2 == 0){
            cDo++;
        }
        
    } while(d <= 100);
    
    printf("Dentro del do while existen: %d numeros pares \n", cDo);