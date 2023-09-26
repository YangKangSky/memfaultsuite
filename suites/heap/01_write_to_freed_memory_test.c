#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void write_to_freed_memory(size_t size) {
    char* ptr = (char*)malloc(size);

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Allocated memory address: %p\n", ptr);

    free(ptr);
    printf("Memory freed.\n");

    // Attempt to write data to freed memory
    for (size_t i = 0; i < 1; i++) {
        ptr[i] = 'A';
    }

    printf("Attempted to write data to freed memory.\n");
}

int main() {
    size_t size = 512 * 1024; // 512KB
	while(1)
	{
		write_to_freed_memory(size);
		usleep(10);
	}

    return 0;
}
