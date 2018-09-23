#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	int pid;

	pid = fork();
	// pid reussi == 0
	if (pid == 0){
		//boucle infinie
		for (;;){
			printf("Je suis le fils.\n");
			printf("Mon pid est: %d.\n", getpid());
			printf("Le pid de mon pere est: %d.\n", getppid());
			execlp("ls", "-l", NULL);
		}
	} else {
		for(;;){
			printf("Je suis le pere.\n");
			printf("Mon pid est: %d.\n", getpid());
			printf("Le pid de mon fils est: %d.\n", pid);
			wait(0);
		}
	}
}

/*quel est le mechanisme par lequel le pid du processus fils passe de 0 a ppid+1 ? ou
0 n'est pas le pid du fils, mais alors qu'est 0 ? il apparait quand on print pid. 
*/
