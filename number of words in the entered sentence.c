#include <stdio.h>
int FindW(char []);
int main(){
    char txt[100];
    printf("Enter a sentence=\n");gets(txt);
    if(strlen(txt)>100){
        printf("You have to enter shorter sentences!");
    }
    else{
    printf("\nThe number of words in %s = %d",txt,FindW(txt));
    }
    return 0;
}
int FindW(char txt[]){
    int sayac=1;
    for (int i=0;i<strlen(txt);i++)
    {
        if(txt[i]==' ')
        {
            sayac++;
        }
    }
    return sayac;
}
