
#ifndef LINEAR_ALGEBRA_H
#define LINEAR_ALGEBRA_H

// struct vector
//
// encapsulates what makes up a vector -- how many elements it contains (n), as
// well as the actual elements data[0] ... data[n-1]

struct vector
{
  double* data;
  int n;
};

#define VEC(v, i) ((v)->data[i])

void vector_construct(struct vector* v, int n);
void vector_destruct(struct vector* v);

double vector_dot(const struct vector* x, const struct vector* y);
void vector_add(const struct vector* x, const struct vector* y,
                struct vector* z);
void matrix_vector_mul(int n, const double A[n][n], const double* x, double* y);

#endif
