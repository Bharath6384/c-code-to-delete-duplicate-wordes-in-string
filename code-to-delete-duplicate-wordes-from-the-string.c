#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char w[100][100];
    int i,j,k,l;
    scanf("%[^\n]",a);
    while(a[i]!='\0'){
        k=0;
        while(a[i]!=' ' && a[i]!='\0'){
            w[j][k]=a[i];
            k++;
            i++;
        }
        w[j][k]='\0';
        j++;
        if(a[i]!='\0') i++;
    }
    l=j;
    for(j=0;j<l;j++){
        for(k=j+1;k<l;){
            if(strcmp(w[j],w[k])==0){
                for(i=k;i<l-1;i++){
                    strcpy(w[i],w[i+1]);
                   
                }
                l--;
            }
            else k++;
            }
    }
    for(i=0;i<l;i++){
        printf("%s ",w[i]);
        
    }
    
}