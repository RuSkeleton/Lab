//
// Created by yaros on 08.05.2024.
//

#ifndef UNTITLED1_FILES_H
#define UNTITLED1_FILES_H

#include <stdbool.h>
#include <stdio.h>

typedef struct polynomial {
    int power;
    int coefficient;
} polynomial;

bool assert_file(char *file_name, char **true_data);

void make_matrix_storage_by_columns(char *file_name);

void test_make_matrix_storage_by_columns();

void represent_as_floating_point_numbers(char *file_name);

void test_represent_as_floating_point_numbers();

void calculate_expression(char *file_name);

void test_calculate_expression();

void save_only_words_with_sequence(char *file_name, char *sequence);

void test_save_only_words_with_sequence();

void save_only_longest_word_in_string(char *file_name);

void test_save_only_longest_word_in_string();

void remove_polynomials_if_x_sqrt_root(char *file_name, int *size, int x);

void test_remove_polynomials_if_x_sqrt_root();

void sort_negative_after_positive(char *file_name, size_t size);

void test_sort_negative_after_positive();

void transpose_non_symmetric_matrices(char *file_name, size_t size);

void test_transpose_non_symmetric_matrices();


#endif //UNTITLED1_FILES_H
