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
		}
	} else {
		for(;;){
			printf("Je suis le pere.\n");
		}
	}
}
