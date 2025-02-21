#include <accountPrivate.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    bankAccount* Sevval;
    Sevval = getInformation();
    /*
    Bu işlem gerçekleşmeyecektir, 
    çünkü verilere yanlızca fonksiyonlar üzerinden erişim 
    sağlanabildiği için veriler gözlemlenemeyecektir.

    accountPrivate.c bir nevi database işlevi görür.

    accountPrivate.h dosyası içerisinde tanımlanan her şey yanlızca bir bildirim işlevi görür.
    */

    deleteInformation(Sevval);


    return 0;
}