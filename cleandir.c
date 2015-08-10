//file: cleandir.c
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    struct dirent *entry;
    DIR *dp;
    chdir("./test/");
    dp = opendir(".");
    while( (entry = readdir(dp)) != NULL ) {
        if ( strcmp(entry->d_name, ".") && strcmp(entry->d_name, "..") ){
            unlink(entry->d_name);  // maybe unlinkat ?
        }
    }
}
