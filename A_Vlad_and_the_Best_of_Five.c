#include <stdio.h>
#include <string.h>

int main (){
    int t;
    scanf("%d",&t);
    while (t--){
        char str[6];
        scanf ("%s",str);
        int i=0,count_A=0,count_B=0;
        while (str[i]!='\0'){
            if (str[i]=='A'){
                count_A++;
            }
            else {
                count_B++;
            }
            i++;
            
        }
        if (count_A>count_B){
            printf("A\n");
        }
        else {
            printf("B\n");
        }
        
    }
    return 0;
}