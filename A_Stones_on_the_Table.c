#include <stdio.h>
#include <string.h>
int main (){
    int x;
    scanf ("%d",&x);
    char str[x+1];
    scanf ("%s",str);
    int i=0,count =0;
    while (str[i]!='\0'){
        if (str[i]==str[i+1]){
            count ++;
        }
        i++;
    }
    printf("%d",count );
    return 0;
}