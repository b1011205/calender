#include<stdio.h>
#include<stdlib.h>


int main(void){
    
    int youbi,hi,i,count=0,flag;
    
    FILE  *fp;
    char filename[] = "calender.txt";
    
    fp = fopen(filename,"w");
    
    scanf("%d",&youbi);
    scanf("%d",&hi);
    
    for(i=0;i<youbi;i++){
        
        fprintf(fp,"   ");
        
    }
    
    for(i=1;i<hi+1;i++){
        
        //1ケタの場合は空白を追加
        if(0<i&&i<10){
            fprintf(fp," ");
        }
        //数字の追加
        fprintf(fp,"%d",i);
        
        
        
        if(count==7 && flag==1){
            fprintf(fp,"\n");
            count = 0;
        }else if(count == 6 - youbi && flag == 0){
            fprintf(fp,"\n");
            flag = 1;
            count= 0;
        }else{
            fprintf(fp," ");
        }
        count++;
    }
    fprintf(fp,"\n");
}
