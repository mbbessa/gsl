#ifndef __GSL_FFT_REAL_H__
#define __GSL_FFT_REAL_H__

#include <stddef.h>

#include <gsl/gsl_math.h>
#include <gsl/gsl_complex.h>
#include <gsl/gsl_fft.h>

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

int gsl_fft_real_radix2_transform (double data[], size_t stride, size_t n) ;

typedef struct
  {
    size_t n;
    size_t nf;
    size_t factor[64];
    gsl_complex *twiddle[64];
    gsl_complex *trig;
    double *scratch;
  }
gsl_fft_wavetable_real;

int gsl_fft_real_transform (double data[], size_t stride, size_t n,
		  const gsl_fft_wavetable_real * wavetable);

gsl_fft_wavetable_real * gsl_fft_real_alloc (size_t n);

void  gsl_fft_real_free (gsl_fft_wavetable_real * wavetable);

int gsl_fft_real_unpack (const double real_coefficient[],
			 double complex_coefficient[],
			 size_t stride, size_t n);

__END_DECLS

#endif /* __GSL_FFT_REAL_H__ */
