#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>
#include <math.h>
#include "libs/algorithms/array/array.h"
#include "libs/data_structures/ordered_set/ordered_set.h"
#include "libs/data_structures/vector/vector.h"
#include "libs/data_structures/vector/vectorVoid.h"
#include "libs/data_structures/matrix/matrix.h"
#include "libs/algorithms/algorithm.h"
#include "libs/algorithms/for_dm/for_dm.h"
#include "libs/string_/string_.h"
#include "libs/data_structures/bitset/bitset.h"
#include "libs/files/files.h"

#define SYMMDIFF(a, b) bitset_symmetricDifference(a, b)
#define COMPL(a) bitset_complement(bitset a)
#define DIFF(a, b) bitset_difference(a, b)
#define INTERSEC(a, b) bitset_intersection(a, b)
#define UNION(a, b) bitset_union(a, b)


int main() {
    test_sort_negative_after_positive();

    return 0;
}