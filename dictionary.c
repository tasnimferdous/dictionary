#include<stdio.h>
#include<string.h>
int main()
{
    char w[100][100],w1[100][100],s3[]="#";
    int i,j,m,a=0,b=0,c=0,d=0,p=0,q=0,r=0,s=0,x=0,y=0,len,len1,count,flag;
    printf("Enter the dictionary:\n");
    for(i=0;;i++){
            b++;
        scanf("%s",w[i]);
        if(strcmp(s3,w[i])==0)
        break;
}
    printf("Enter the words to check:\n");
    for(i=0;;i++){
            c++;
        scanf("%s",w1[i]);
        if(strcmp(s3,w1[i])==0)
        break;
}
    printf("Corrected words:\n");
    for(i=0;i<c-1;i++){
            count=0;
            flag=0;
            d=0;
            r=0;
            x=0;
            y=0;
            len=strlen(w1[i]);
            for(j=0;j<b-1;j++){         //Not found loop
                    len1=strlen(w[j]);
                if(len!=len1)
                    d++;
        }
        if(d==b-1){
            printf("%s: Not found\n",w1[i]);
            x++;
        }
            for(j=0;j<b-1;j++){              //Correct loop
                    if(x==1)
                    break;
                    else{
                    len1=strlen(w[j]);
                    if(len==len1&&strcmp(w[j],w1[i])==0){
                        flag=10;
                        break;
                    }
                }
            }
            if(flag==10){
                printf("%s: Correct\n",w1[i]);
                y++;
            }
                    else{
                            if(x==1||y==1)
                                break;
                            else{
                            for(j=0;j<b-1;j++){              //Correction loop
                                    len1=strlen(w[j]);
                                if(len==len1){
                                    p=0;
                                    q=0;
                                    s=0;
                        for(m=0;w1[i][m],w[j][m]!='\0';m++){
                            if((w1[i][m]!=w[j][m]&&m==0)||(w1[i][m]!=w[j][m]&&m==len-1))
                                p++;
                            else if(w1[i][m]==w[j][m])
                                q++;
                            else
                                s++;
                        }
                        if(p==1&&len==p+q){
                        printf("%s: %s\n",w1[i],w[j]);
                        r++;
                        }
                    }
                }
                if(r==0)
                printf("%s: Not found\n",w1[i]);
                }
            }
        }
    return 0;
}
