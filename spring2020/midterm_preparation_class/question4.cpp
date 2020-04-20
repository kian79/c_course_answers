#include <stdio.h>
#include <stdlib.h>
int check_ugly(int n){
    int temp=n;
    if(temp%2 || temp%3 || temp%5)
        return 0;
    while(!(temp%2))
        temp/=2;
    while(!(temp%3))
        temp/=3;
    while(!(temp%5))
        temp/=5;
    if(temp==1)
        return 1;
    return 0;
}
int ugly_counter(int n){
    int counter=0;
    int result=0;
    for(int i=0;counter!=n;i=i+30){
        if(check_ugly(i))
            counter++;
        if(counter==n){
            result=i;
}
}
    return result;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",ugly_counter(n));
    return 0;
}
