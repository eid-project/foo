#include <stdio.h>
#include <stdlib.h>

#include <baz.h>

int main(int argc, char **argv)
{
	printf("=== bc test ===\n");
	printf("echo '1 + 2' | bc:\n");
	system("echo '1 + 2' | bc");

	printf("=== baz test ===\n");
	printf("BAZ=%x\n", BAZ);
	baz("FOO");
	return 0;
}
