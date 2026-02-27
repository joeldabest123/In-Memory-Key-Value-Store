#include <stddef.h>

typedef struct Node {
    char *key;
    void *value;
    size_t value_size;
    struct Node *next;
} Node;

struct KVStore {
    Node **buckets;
    size_t capacity;
};