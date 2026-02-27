#ifndef KVSTORE_H
#define KVSTORE_H

#include <stddef.h>

typedef struct KVStore KVStore;

KVStore* kv_create(size_t capacity);
void kv_set(KVStore* store, const char* key, const void* value, size_t value_size);
void* kv_get(KVStore* store, const char* key, size_t* value_size);
void kv_delete(KVStore* store, const char* key);
void kv_free(KVStore* store);

#endif