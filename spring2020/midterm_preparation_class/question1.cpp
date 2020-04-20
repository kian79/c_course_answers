#include<stdlib.h>
#include<stdio.h>
#include<math.h>
double calculate_distance(int x1,int y1,int x2,int y2){
    double distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return distance;
}
int main(){
    int x1,x2,y1,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    printf("%lf",calculate_distance(x1,y1,x2,y2));
    return 0;
}
