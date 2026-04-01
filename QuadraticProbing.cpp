#include <stdio.h>
#define Size 10
#define Empty -1
int hashTable[Size];
void initializeTable() {
    for (int i = 0; i < Size; i++) {
        hashTable[i] = Empty;
    }
}
int hashFunction(int key) {
    return key % Size;
}
void insertQuadratic(int key) {
    int index = hashFunction(key);
    for (int i = 0; i < Size; i++) {
        
        int newIndex = (index + (i * i)) % Size; 
        
        if (hashTable[newIndex] == Empty) {
            hashTable[newIndex] = key;
            printf("%d inserted at index %d\n", key, newIndex);
            return;
        }
    }
    printf("Hash table is full. Could not insert %d\n", key);
}
void displayTable() {
    printf("\nHash Table:\n");
    for (int i = 0; i < Size; i++) {
        if (hashTable[i] == Empty) {
            printf("Index %d : Empty\n", i);
        } else {
            printf("Index %d : %d\n", i, hashTable[i]);
        }
    }
}
int main() {
    initializeTable();
    insertQuadratic(23); 
    insertQuadratic(43); 
    insertQuadratic(13); 
    insertQuadratic(27); 
    insertQuadratic(33); 
    displayTable();
    return 0;
}

