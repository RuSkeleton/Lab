#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <malloc.h>
#include <math.h>
#include "libs/algorithms/array/array.h"
#include "libs/data_structures/unordered_set/unordered_set.h"
#include "libs/data_structures/vector/vector.h"
#include "libs/data_structures/vector/vectorVoid.h"
#include "libs/data_structures/matrix/matrix.h"
#include "libs/algorithms/algorithm.h"
#include "libs/algorithms/for_dm/for_dm.h"
#include "libs/string_/string_.h"
#include "libs/data_structures/bitset/bitset.h"
#include "libs/files/files.h"



#include "libs/data_structures/bitset/bitset.h"
#include <time.h>

#include "libs/data_structures/ordered_set/ordered_set.h"
#include <time.h>





//void generate_permutations(unordered_array_set P, int n, int *M, int i,\
//                           int size, unordered_array_set *us_set, int us_set_size) {
//    for (int j = 0; j < size; j++) {
//        int x = M[j];
//        unordered_array_set_insert(&P, x);
//        if (i + 1 == n) {
//            us_set[us_set_size++] = P;
//        } else {
//            int m[n - 1];
//            for (int k = 0; k < j; k++)
//                m[k] = M[k];
//            for (int k = j + 1; k < size; k++)
//                m[k - 1] = M[k];
//            generate_permutations(P, n, m, i + 1, size - 1, us_set, us_set_size);
//        }
//    }
//}

int main() {

    int n;
    printf("Input number worker:\n");
    scanf("%d", &n);

    int M[n];
    unordered_array_set *us_work = getMemArrayOfUnorderedSet(n, n);
    for (int i = 0; i < n; i++) {
        M[i] = i + 1;

        printf("Input quantity work for worker %d: ", i + 1);
        int n_works;
        scanf("%d", &n_works);

        for (int j = 0; j < n_works; j++){
            int work;
            printf("Input number work (as an index) %d: ", j+1);
            scanf("%d", &work);

            unordered_array_set_insert(&us_work[i], work);
        }
    }

    printSetOfUnorderedSet(us_work, n);

    unsigned _factorial = factorial(n);

    unordered_array_set un_M = unordered_array_set_create_from_array(M, n);
    unordered_array_set *un_set = getAllPermutationUnorderedSet(un_M, n);
    printSetOfUnorderedSet(un_set, _factorial);

    unordered_array_set *result = getMemArrayOfUnorderedSet(_factorial, n);
    unsigned result_size = 0;
    for (int i_set = 0; i_set < _factorial; i_set++){
        bool is_true = 1;
        for(int work = 0; work < n; work++){
            int worker_index = un_set[i_set].data[work] - 1;
            unordered_array_set work_for_worker = us_work[worker_index];
            if (!unordered_array_set_in(work_for_worker, work)){
                is_true = 0;
                break;
            }
        }
        if (is_true){
            result[result_size++] = un_set[i_set];
        }
    }

    printSetOfUnorderedSet(result, result_size);

    return 0;
}





//int main() {
//    test_update_products_information();
//
//    return 0;
//}