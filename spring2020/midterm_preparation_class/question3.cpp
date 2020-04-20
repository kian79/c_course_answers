#include<stdio.h>
#include<stdlib.h>
int zojiat(){
    static int counter=0;
    counter++;
    if(counter%2)
        return 1;
    return 0;
}
int main(){
    printf("%d\n",zojiat());
    printf("%d\n",zojiat());
    printf("%d\n",zojiat());
    return 0;
}
