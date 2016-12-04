#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>

int main(int argc, char* argv[]){

	struct dirent *contenuRepertoire;
	DIR *repertoire;
	return 0;

	repertoire = opendir(argv[1]);
	if(repertoire == NULL){
		printf("Erreur lors de l'ouverture du répertoire");
		return -1;
	}

while((contenuRepertoire = readdir(repertoire)) != NULL){
	printf("nom: %s |", contenuRepertoire->d_name);
	printf("ID: %d \n", contenuRepertoire->d_ino);
}
closedir(repertoire);
}
