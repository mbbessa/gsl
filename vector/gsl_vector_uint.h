#ifndef __GSL_VECTOR_UINT_H__
#define __GSL_VECTOR_UINT_H__

#include <stdlib.h>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_block_uint.h>

#undef __BEGIN_DECLS
#undef __END_DECLS
#ifdef __cplusplus
# define __BEGIN_DECLS extern "C" {
# define __END_DECLS }
#else
# define __BEGIN_DECLS /* empty */
# define __END_DECLS /* empty */
#endif

__BEGIN_DECLS

struct gsl_vector_uint_struct
{
  size_t size;
  size_t stride;
  unsigned int *data;
  gsl_block_uint *block;
};

typedef struct gsl_vector_uint_struct gsl_vector_uint;

gsl_vector_uint *gsl_vector_uint_alloc (size_t n);
gsl_vector_uint *gsl_vector_uint_calloc (size_t n);

gsl_vector_uint *gsl_vector_uint_alloc_from_block (gsl_block_uint * b,
                                                     size_t offset, 
                                                     size_t n, 
                                                     size_t stride);

gsl_vector_uint *gsl_vector_uint_alloc_from_vector (gsl_vector_uint * v,
                                                      size_t offset, 
                                                      size_t n, 
                                                      size_t stride);

void gsl_vector_uint_free (gsl_vector_uint * v);

int gsl_vector_uint_view_from_vector (gsl_vector_uint *v, 
                                       gsl_vector_uint *base,
                                       size_t offset, size_t n, size_t stride);

unsigned int *gsl_vector_uint_ptr (const gsl_vector_uint * v, const size_t i);
unsigned int gsl_vector_uint_get (const gsl_vector_uint * v, const size_t i);
void gsl_vector_uint_set (gsl_vector_uint * v, const size_t i, unsigned int x);

void gsl_vector_uint_set_zero (gsl_vector_uint * v);
void gsl_vector_uint_set_all (gsl_vector_uint * v, unsigned int x);

int gsl_vector_uint_fread (FILE * stream, gsl_vector_uint * v);
int gsl_vector_uint_fwrite (FILE * stream, const gsl_vector_uint * v);
int gsl_vector_uint_fscanf (FILE * stream, gsl_vector_uint * v);
int gsl_vector_uint_fprintf (FILE * stream, const gsl_vector_uint * v,
			      const char *format);

int gsl_vector_uint_memcpy (gsl_vector_uint * dest, const gsl_vector_uint * src);

int gsl_vector_uint_reverse (gsl_vector_uint * v);

int gsl_vector_uint_swap (gsl_vector_uint * v, size_t i, size_t j);

int gsl_vector_uint_isnull (gsl_vector_uint * v);

extern int gsl_check_range;

#ifdef HAVE_INLINE

extern inline
unsigned int
gsl_vector_uint_get (const gsl_vector_uint * v, const size_t i)
{
#ifndef GSL_RANGE_CHECK_OFF
  if (i >= v->size)
    {
      GSL_ERROR_RETURN ("index out of range", GSL_EINVAL, 0);
    }
#endif
  return v->data[i * v->stride];
}

extern inline
void
gsl_vector_uint_set (gsl_vector_uint * v, const size_t i, unsigned int x)
{
#ifndef GSL_RANGE_CHECK_OFF
  if (i >= v->size)
    {
      GSL_ERROR_RETURN_NOTHING ("index out of range", GSL_EINVAL);
    }
#endif
  v->data[i * v->stride] = x;
}

#endif /* HAVE_INLINE */

__END_DECLS

#endif /* __GSL_VECTOR_UINT_H__ */


