#include <iostream>
using namespace std ;
bool isTriangular(int num) {
    int sum = 0;
    for (int i = 1; sum <= num; i++) {
        sum += i;
        if (sum == num)
            return true;
    }
    return false;
}

int main (){
    int x;
    cin>>x;
    if (isTriangular(x)) {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    

}