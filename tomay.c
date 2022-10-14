#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <ctype.h>

int main(){
    char c;
    char may;
    int n;

    do{
        n = read(STDIN_FILENO,&c,1);
        may = toupper(c);
        if(c == 'A'|| c =='E' || c =='I' || c == 'O' || c =='U' || c =='a'|| c =='e'|| c =='i'|| c =='o'|| c =='u'){
            may = '1';
        }
        write(STDOUT_FILENO,&may,1);

    }
    while(n != 0);
    return 0;
}