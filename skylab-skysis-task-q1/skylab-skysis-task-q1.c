#include <stdio.h>

typedef struct Process{
    int value1;
    int value2;
    char processType;
} Process;

int sum(int x, int y){
    return (x+y);
}

int divide(int x, int y){
    return(x/y);
}

int multiply(int x, int y){
    return(x*y);
}

int minus(int x, int y){
    return(x-y);
} 

int main(){
    struct Process equation1;
    char *p = &equation1.processType;
    int (*PointerProcess)(int, int);
    
    printf("Enter first value : ");
    scanf("%d", &equation1.value1);

    printf("Enter process type : ");
    scanf(" %c", &equation1.processType);

    printf("Enter second value : ");
    scanf("%d", &equation1.value2);



    if(*p=='+'){
        PointerProcess = &sum;
    } else if(*p=='-'){
        PointerProcess = &minus;
    } else if(*p=='/'){
        PointerProcess = &divide;
    }else if(*p=='*'){
        PointerProcess = &multiply;
    }


    printf("\nResult :%d", PointerProcess(equation1.value1, equation1.value2));

    return 0;
}   