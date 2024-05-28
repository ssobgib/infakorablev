#include "lh.h"
#include <stdio.h>
#define NO 0
#define YES 1
int glas(char c) {
return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int lab1()
{
    int V, v1, v2, t;
    scanf("%d", &V);
    scanf("%d", &v1);
    scanf("%d", &t);
    v2=(t*v1-V)/t;
    printf("%d",v2);
    return 0;
}

int lab2()
{
    {
    float a=30000, e, x=0,i=1,j,n;
    scanf("%f", &e);
    while(a>e){
        j=i+1;
        n=j*j;
        a=i/n;
        x+=a;
        i++;
    }
    printf("%.2f",x);
    return 0;
}
}

int lab3()
{
    int flag, cnt, buk,n=0;
    char c;
    cnt = 0;
    buk=0;
    flag = NO;
    while((c = getchar()) != '\n' )
    {
        if (c=='.' || c==',' || c==' ' || c=='\n'){
            flag=NO;
            if(buk>n){
                n=buk;
                buk=0;}
        }else{
            if (flag==NO){
                flag==YES;
                buk+=1;
            }else{
                if (flag==YES){
                    buk+=1;
                }
            }
        }
    }
    printf("number of words = %d\n", n);
    return 0;
}

int lab4()

// Функция для определения является ли символ гласной буквой
{
char arr[1000];
char res[1000];
int gl, i, j, k;
fgets(arr, sizeof(arr), stdin);
i = j = k = gl = 0;
// Проходим по каждому символу во входной строке
while(arr[i] != '\0') {
// Если символ буква
if((arr[i] >= 'a' && arr[i] <= 'z') ||
(arr[i] >= 'A' && arr[i] <= 'Z')) {
// Если гласных больше или равно согласных, добавляем слово в выходную строку
while((arr[i] >= 'a' && arr[i] <= 'z') ||
(arr[i] >= 'A' && arr[i] <= 'Z')) {
res[j++] = arr[i++];
if(res[j-1] == 'a' || res[j-1] == 'e' || res[j-1] == 'i' || res[j-1] == 'o' || res[j-1] == 'u' ||
res[j-1] == 'A' || res[j-1] == 'E' || res[j-1] == 'I' || res[j-1] == 'O' || res[j-1] == 'U') {
gl++;
}
}
// Если число гласных больше числа согласных, пропускаем это слово
if(gl%2!=0) {
while(j > k) {
printf("%c", res[k++]);
}
printf(" ");
}
j = k = gl = 0;
} else {
i++;
}
}

printf("\n");

return 0;
}

int lab5()
{
    int arr[10];
    int sum1, sum2;
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
        if(i<5){
            sum1+=arr[i];
        }else{
            sum2+=arr[i];
        }
    }

    if(sum1<sum2){
        for(int i=0;i<10;i++){
            if(i<5){
                arr[i]=0;
            }
        }
    }
    if(sum1>sum2){
        for(int i=0;i<10;i++){
            if(i>=5){
                arr[i]=0;
            }
        }
    }
    for(int i=0;i<10;i++){
            printf("%d ", arr[i]);
        }
return 0;
}

int lab6()
{
    int n=3,k=4;
    int arr[n][k];
    int mini, min=30001, maxi, max=0;
    for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j]>max){
                maxi=i;
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                mini=i;
                min=arr[i][j];
            }
        }
    }

    if(mini!=maxi){
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                arr[i][j]=0;
            }
        }
    }else{
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                if(i!=mini){
                    arr[i][j]=0;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
            printf("%d ", arr[i][j]);
            }printf("\n");
        }
return 0;
}

int lab7()
{
    long int N;
    scanf("%ld", &N);

    for (int i = 0; i < sizeof(N); i++) {
        int count = 0;
        for (int j = 0; j < 8; j++) {
            if (N & 1) {
                count++;
            }
            N = N >> 1;
        }
        printf("%d: %d\n", i+1, count);
    }
    return 0;
}
