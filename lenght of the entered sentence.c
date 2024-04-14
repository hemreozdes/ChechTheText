#include <stdio.h>
int FindLen(char []);
int main(){
    char txt[100];scanf("%s",txt);
    printf("The length of %s=%d",txt,FindLen(txt));
    return 0;
}
int FindLen(char txt[]){
    int l=0;
    while(txt[l]!='\0'){
        l++;
    }
    return l;
}
