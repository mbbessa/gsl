#ifndef __GSL_FFT_HALFCOMPLEX_FLOAT_H__
#define __GSL_FFT_HALFCOMPLEX_FLOAT_H__

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

int gsl_fft_halfcomplex_float_radix2_backward (float data[], const size_t stride, const size_t n);
int gsl_fft_halfcomplex_float_radix2_inverse (float data[], const size_t stride, const size_t n);
int gsl_fft_halfcomplex_float_radix2_transform (float data[], const size_t stride, const size_t n);

typedef struct
  {
    size_t n;
    size_t nf;
    size_t factor[64];
    gsl_complex *twiddle[64];
    gsl_complex *trig;
    float *scratch;
  }
gsl_fft_wavetable_halfcomplex_float;

int gsl_fft_halfcomplex_float_backward (float data[], const size_t stride, const size_t n,
					const gsl_fft_wavetable_halfcomplex_float * wavetable);

int gsl_fft_halfcomplex_float_inverse (float data[], const size_t stride, const size_t n,
				       const gsl_fft_wavetable_halfcomplex_float * wavetable);

int gsl_fft_halfcomplex_float_transform (float data[], const size_t stride, const size_t n,
				   const gsl_fft_wavetable_halfcomplex_float * wavetable);

gsl_fft_wavetable_halfcomplex_float * gsl_fft_halfcomplex_float_alloc (size_t n);

void
gsl_fft_halfcomplex_float_free (gsl_fft_wavetable_halfcomplex_float * wavetable);

int
gsl_fft_halfcomplex_float_unpack (const float halfcomplex_coefficient[],
				  float complex_coefficient[],
				  const size_t stride, const size_t n);

int
gsl_fft_halfcomplex_float_radix2_unpack (const float halfcomplex_coefficient[],
					 float complex_coefficient[],
					 const size_t stride, const size_t n);

__END_DECLS

#endif /* __GSL_FFT_HALFCOMPLEX_FLOAT_H__ */
