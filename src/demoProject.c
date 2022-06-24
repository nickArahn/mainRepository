
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
//	return EXIT_SUCCESS;
//}


#include <stdio.h>

static int count = 0;

void add()
{
//    static int count = 0;
    count++;
    printf("static local variable %d \n", count);

    int num = 0;
    num ++;
    printf("standart local variable %d \n", num);
}

int main()
{
    printf("Hello World \n\n");
    add();

    add();

    add();

    add();
    add();
    add();
    printf("**************************************\n");

    return 0;
}
