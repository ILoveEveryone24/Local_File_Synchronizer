#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]){
    DIR *dir;
    struct dirent *dp;
    char *path = "./test";

    if((dir = opendir(path)) == NULL){
        printf("Could not open %s\n", path);
        return -1;
    }
    while((dp = readdir(dir)) != NULL){
        printf("%s\n", dp->d_name);
    }

    closedir(dir);

    return 0;
}
