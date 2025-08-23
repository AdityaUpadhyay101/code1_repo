
#include <stdio.h>
#include <stdbool.h>

#define MEMORY_SIZE 20

int memory[MEMORY_SIZE]; 


struct File {
    char name[20];
    int startBlock;
    int size;
};

bool allocateFile(const char* fileName, int start, int yoursize) {
   
    if (start + yoursize > MEMORY_SIZE) {
        return false;
    }

    for (int i = start; i < start + yoursize; i++) {
        if (memory[i] == 1) {
            return false; 
        }
    }

    
    for (int i = start; i < start + yoursize; i++) {
        memory[i] = 1;
    }

    strcpy(files.name, fileName);
    files.startBlock = start;
    files.size = yoursize;
    fileCount++;

    return true;
}

void printMemory() {
    for (int i = 0; i < MEMORY_SIZE; i++) {
        printf("%d ", memory[i]);
        printf("Block %d -> Address: %p\n", i, &memory[i]);

    }
    printf("\n");
}

int main() {
    
    if (allocateFile(3, 9)) {
        printf("File allocated successfully!\n");
        printf("File Name \n", i,);

        

    } else {
        printf("Allocation failed!\n");
    }

    printMemory();
    return 0;
}
