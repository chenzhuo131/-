#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
    char i;
    int a,b,c,d,e,f,g,n,m;
    printf("*********��ӭʹ�����������Զ��������*********\n");
    printf("1.��ʼ\n");
    printf("2.�˳����\n") ;
    printf("��ѡ��\n");
    scanf("%d",&e);
    if(e==1){
    printf("��ѡ��������Ŀ��������\n");
    scanf("%d",&f);    
    srand((unsigned)time(NULL));
    for(int g=0;g<f;g++)
    {
    n=rand()%4;
    if(n==0){i='+';}
    if(n==1){i='-';}
    if(n==2){i='*';}
    if(n==3){i='/';}
    a=rand()%10+1;
    b=rand()%10+1;
    c=rand()%10+1;
    d=rand()%10+1;
    m=rand()%2;
    if(m==0){printf("%d%c%d=\n",a,i,b);}
    else if(m==1){
        if(a<=b&&c<=d)printf("%d/%d%c%d/%d=\n",a,b,i,c,d);
        else if(a>b&&c>d) printf("%d/%d%c%d/%d=\n",b,a,i,d,c);
        else if(a<=b&&c>d) printf("%d/%d%c%d/%d=\n",a,b,i,d,c);
        else if(a>b&&c<=d) printf("%d/%d%c%d/%d=\n",b,a,i,c,d);
    }
    }
}
 if(e==2){
        exit(0);
        return 0;
            }
}