#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,acs;
    scanf("%d",&n);
    scanf("%d",&acs);
    int max=0;
    int prev;
    scanf("%d",&prev);
    int counter=0;
    for(int i=0;i<n-1;i++){
        int num;
        scanf("%d",&num);
        if(acs){
            if(num>prev){
                counter++;
}
            else{
                if(counter>max)
                    max=counter;
            counter=0;
}
}
        else{
            if(num<prev)
                counter++;
            else{
                if(counter>max)
                    max=counter;
            counter=0;
}
}
        prev=num;
}
if(counter>max)
    max=counter;
printf("%d",max+1);
}
