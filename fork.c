#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
    int pid = fork(); // cera un nuevo proceso por medio de la duplicación
    
    if(pid == 0){
        printf("Soy el proceso hijo\n");
        //execl("/workspace/TC1004B/hola.exe", "hola.exe", NULL);
        execl("hola.exe", "hola.exe", NULL);
        sleep(5);
    } else {
        printf("Soy el proceso padre\n");
        wait(NULL);
    }
    return 0;
}