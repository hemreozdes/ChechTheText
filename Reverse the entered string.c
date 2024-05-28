#include <stdio.h>
#include <string.h>
int main()
{
    char text[100];
    scanf("%s",&text);
    reverse(text);
    printf("%s",text);
    return 0;
}

void reverse(char text[]){
    int l=strlen(text);
    int i,hold;
    for(i=0;i<l/2;i++){
    	hold=text[i];
    	text[i]=text[l-1-i];
    	text[l-1-i]=hold;
	}
}

