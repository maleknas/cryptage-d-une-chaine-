//*********** cryptage d une phrase :***********
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
            void main(){
                //insertion de la phrase :
                char ch[100];
                printf("donner la chaine a cripter :");
                gets(ch);
                printf("votre chaine de depart a ete : %s\n",ch);
                //variable de criptage :
                int p,j;
                printf("entrer un variable de criptage : ");
                scanf("%d",&p);
                if(p>26){p=26-p%26+2;}
                //criptage du mots a p'éme charactere :
                for (int i = 0; i < strlen(ch); ++i) {
                    if(('a'<ch[i]<'z')||('A'<ch[i]<'Z')){
                        j=(int)ch[i]+p;
                        if(j>(int)'z' || j>(int)'Z'){j=j-26;};
                        if(j<(int)'a' || j<(int)'A'){j=j+26;};
                        //printf("%d",j);
                        printf("%c",j);}
                    else{
                        if(ch[i]=' '){ printf(" ");}}
                }
            }
