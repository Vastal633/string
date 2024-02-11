#include<stdio.h>
 
int main(){
    char str1[10],str2[10];

    int i=0,n=0;

    printf("enter your name:");
    fflush(stdin);
    scanf("%s",str1);

    while(str1[i]!='\0'){
        i++;
        n++;
    }

    for(int j=0;j<n;j++){
        str2[j]=str1[j];
    }

    printf("the old string:%s\n",str1);

    printf("the new string is %s\n",str2);
    return 0;
}
