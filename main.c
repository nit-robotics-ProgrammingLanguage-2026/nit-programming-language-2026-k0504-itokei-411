#include <stdio.h>
int main(void)
{
    int input;
 
    scanf("%d",&input);
    // 0未満、10以上12未満、15以上の場合はNG
    if (!( input<0||
            (input >=10 && input <12 ) || 
            input >= 15))
 
   {
    
    // NG条件に当てはまらない場合はOK
     printf("OK");
    
   }

    else{
        printf("NG");}
        
    return 0;
    
    }
