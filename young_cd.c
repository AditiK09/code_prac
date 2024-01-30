#include<stdio.h>
#include<string.h>
    int main() {
    int n;
       scanf("%d\n",&n);
    char str[50];
    gets(str);
    int c=0;
    int s=strlen(str);
       for(int i=0;i<s;i++){
         if(str[i]==str[i+1]){
             c++;
              }
        }
    printf("%d",c);
    return 0;

}