#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>

#include <baz.h>

int main(int argc, char **argv)
{
	/* for libcrypto test */
	int i;
	unsigned char md5src[5] = "hoge";
	unsigned char md5[MD5_DIGEST_LENGTH];
	char md5str[MD5_DIGEST_LENGTH * 2];
	MD5_CTX c;

	printf("=== bc test ===\n");
	printf("echo '1 + 2' | bc:\n");
	system("echo '1 + 2' | bc");

	printf("=== libcrypto test ===\n");
	MD5_Init(&c);
	MD5_Update(&c, md5src, strlen(md5src));
	MD5_Final(md5, &c);
	for (i = 0; i < MD5_DIGEST_LENGTH; i++) {
		sprintf(&md5str[i * 2], "%02x", (unsigned int)md5[i]);
	}
	printf("md5(\"%s\"): %s\n", md5src, md5str);

	printf("=== baz test ===\n");
	printf("BAZ=%x\n", BAZ);
	baz("FOO");
	return 0;
}
