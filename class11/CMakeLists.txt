cmake_minimum_required (VERSION 3.16)

project(Class11 LANGUAGES C Fortran)

add_executable(test_data_layout test_data_layout.c print_matrix_fortran.F90)
add_executable(test_data_layout_fortran test_data_layout_fortran.F90 print_matrix_fortran.F90)
