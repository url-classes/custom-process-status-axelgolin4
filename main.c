#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main()
{
    time_t tiempo;
    printf("Tarea 1: custom-process-status\n");
    printf("Process Type        PID     PPID        Time\n");  

    fork();
	fork();
	fork();
    
    time(&tiempo);

    printf("System process      %d      %d          %s",getpid(), getppid(),ctime(&tiempo));
    return 0;

}