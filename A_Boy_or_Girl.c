#include <stdio.h>
#include <string.h>
int main (){
    char str[10000];
    scanf("%s",str);
    int i=0,size =0;
    while (str[i]!='\0'){
        size ++;
        i++;

    }
    int count =0;
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            if (str[i]==str[j]&&i!=j){
                count ++;

            }
        }
    }
    int total=size-(count/2);
    if (total%2==0){
        printf("CHAT WITH HER!");
    }
    else {
        printf("IGNORE HIM!");
    }
    return 0;
}