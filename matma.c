// SE1647 Vu Duc Huy HE160866
#include<stdio.h>
#include<string.h>

int main()
{
    char message[100],coppymessage[100], ch;
    int i, key, want;
    scanf("%[^\n]",message);
    scanf("%d", &key);
    scanf("%d", &want);
    
    strcpy(coppymessage,message);
    
    for(i = 0; coppymessage[i] != '\0'; i++){
        ch = coppymessage[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            coppymessage[i] = ch;
        }

        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
                if(ch > 'Z'){
                    ch = ch - 'Z' + 'A' - 1;
                }
            coppymessage[i] = ch;
        }
    }
    for(i = 0; message[i] != '\0'; i++){
        ch = message[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - key;
            if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        }

        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch - key;
                if(ch > 'Z'){
                    ch = ch - 'Z' + 'A' - 1;
                }
            message[i] = ch;
        }
    }
    if(want == 1)
        printf("%s", message);
    if(want == 0)
        printf("%s", coppymessage);
    
    return 0;
}
