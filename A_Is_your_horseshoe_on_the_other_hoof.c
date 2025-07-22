#include <stdio.h>
int main (){
    long long arr[4];
    int count=0;
    for (int i=0;i<4;i++){
        scanf ("%lld",&arr[i]);
    }
    for (int i=0;i<4;i++){
        for (int j=i;j<4;j++){
        
            if (arr[i]==arr[j]){
                count =count +1;
            }
        }
 
        
        

    }
    count=count-4;
    if (count<=2){
    printf("%d",count);
    }
    else {
        count =count-3;
        printf("%d",count);
    }
    return 0;
 
}