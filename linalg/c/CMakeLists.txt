
add_library(linalg vector_dot.c vector_add.c matrix_vector_mul.c
  matrix_matrix_mul.c vector.c matrix.c)

link_libraries(linalg)

add_executable(test_vector_dot test_vector_dot.c)
add_test(TestVectorDot test_vector_dot)

add_executable(test_vector_add test_vector_add.c)
add_test(TestVectorAdd test_vector_add)

add_executable(test_matrix_vector_mul test_matrix_vector_mul.c)
add_test(TestMatrixVectorMul test_matrix_vector_mul)

add_executable(test_matrix_matrix_mul test_matrix_matrix_mul.c)
add_test(TestMatrixMatrixMul test_matrix_matrix_mul)

add_executable(test_args test_args.c)
