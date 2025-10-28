#include<stdio.h>
#include<limits.h>
int n,ttat=0,twt=0;
struct process{
    int at,bt,wt,tat;
};

void sjf(struct process p[],int n){
    int ct=0,cp=0;
    while (cp<n)
    {
       int sjindex=-1;
       int sjburst=INT_MAX;
       for(int i=0;i<n;i++){
        if(p[i].at<=ct&&p[i].bt<sjburst&&p[i].wt==-1){
            sjindex=i;
            sjburst=p[i].bt;
        }
       }
       if(sjindex==-1){
        ct++;
        continue;
       }
       p[sjindex].wt=ct-p[sjindex].at;
       p[sjindex].tat=p[sjindex].wt+p[sjindex].bt;
       ct+=p[sjindex].bt;
       cp++;
       twt+=p[sjindex].wt;
       ttat+=p[sjindex].tat;

    }
    printf("\n WT %d, TAT %d",twt/n,ttat/n);
}
int main(){
    printf("Enter process");
    scanf("%d",&n);
    struct process p[n];
    for (int i=0;i<n;i++){
        printf("\nEnter at  bt fr P[%d]",i);
        scanf("%d%d",&p[i].at,&p[i].bt);
        p[i].wt=-1;
    }
    sjf(p,n);
    return 0;
}