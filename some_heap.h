
#ifndef HEAP_H
#define HEAP_H

// a min heap

typedef unsigned long long heap_key_t;
typedef void* heap_value_t; // generic pointer used to store key values
#define HEAP_KEY_FORMAT "%llu"

typedef struct { // single node in heap
    heap_key_t key; // key in heap (NOT POSITION)
    heap_value_t value; // pointer to associated value
} heap_node_t;

typedef struct {
    heap_node_t *data; // pointer to an array of heap_node_t structures (nodes), first element in array
    int size;
    int capacity;
} heap_t;

heap_t *heap_create(int capacity); // returns pointer to the heap

void heap_free(heap_t *heap);

unsigned int heap_size(heap_t *heap);

void heap_insert(heap_t *heap, heap_key_t key, heap_value_t data);

heap_value_t heap_remove_min(heap_t *heap);

void heap_print(heap_t *heap);

#endif
