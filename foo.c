#include <stdio.h>

#include <bar.h>

int main(int argc, char **argv)
{
	printf("foo: BAR=%x\n", BAR);
	return bar("FOO");
}
