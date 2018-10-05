#include <stdio.h>

#include <baz.h>

int main(int argc, char **argv)
{
	printf("foo: BAZ=%x\n", BAZ);
	return baz("FOO");
}
