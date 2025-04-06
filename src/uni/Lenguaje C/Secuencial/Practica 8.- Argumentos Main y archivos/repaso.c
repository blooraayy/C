#include <stdio.h>
#include <stdlib>

int main(int argc, char*argv[]) {

    int i;
    for (i = 0; i < argc; i++) {
        printf("%s", argv[i])
    }

    int dato1 = atoi(argv[1]); //transformarlo en int
    float dato2 = atof(argv[2]); //transformarlo a float

return 0;

}