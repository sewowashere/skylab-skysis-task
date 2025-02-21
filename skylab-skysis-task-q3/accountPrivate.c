#include <accountPrivate.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    long long TCnumber;
    int MoneyAmount;
} bankAccount;

bankAccount* getInformation(){
    
    bankAccount* tempMemory;
    tempMemory = (bankAccount*)malloc(sizeof(bankAccount));
    tempMemory->TCnumber = 65889547591;
    tempMemory->MoneyAmount = 100;
    return(tempMemory);
}

void deleteInformation(bankAccount* tempMemory){
    free(tempMemory);
} 