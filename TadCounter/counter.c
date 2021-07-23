#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
#include "counter.h"

struct _counter {
    unsigned int count;
};

counter init(void) {
    counter c = calloc(1, sizeof(struct _counter));
    c -> count =0;
    return c;
}

void inc(counter c) {
    c -> count = c -> count +1;
}

bool is_init(counter c) {
    bool b;
    b= (c -> count == 0);
return b;
}

void dec(counter c) {
    assert(!(is_init(c)));
    c -> count = c -> count -1;
}

counter copy_counter(counter c) {
    counter e = calloc(1, sizeof(struct _counter));
    e -> count = c -> count;
    return e;
}

void destroy_counter(counter c) {
    free(c);
}
