/* Author:  G. Jungman
 * RCS:     $Id$
 */
#ifndef __GSL_SF_POW_INT_H__
#define __GSL_SF_POW_INT_H__

#include <gsl/gsl_sf_result.h>

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


/* Calculate small integer powers.
 * Does not check for overflow/underflow.
 */
double gsl_sf_pow_2(const double x);
double gsl_sf_pow_3(const double x);
double gsl_sf_pow_4(const double x);
double gsl_sf_pow_5(const double x);
double gsl_sf_pow_6(const double x);
double gsl_sf_pow_7(const double x);
double gsl_sf_pow_8(const double x);
double gsl_sf_pow_9(const double x);


/* Calculate x^n.
 * Does not check for overflow/underflow.
 */
int     gsl_sf_pow_int_impl(double x, int n, gsl_sf_result * result);
int     gsl_sf_pow_int_e(double x, int n, gsl_sf_result * result);
double  gsl_sf_pow_int(double x, int n);


#ifdef HAVE_INLINE
extern inline double gsl_sf_pow_2(const double x) { return x*x;   }
extern inline double gsl_sf_pow_3(const double x) { return x*x*x; }
extern inline double gsl_sf_pow_4(const double x) { double x2 = x*x;   return x2*x2;	}
extern inline double gsl_sf_pow_5(const double x) { double x2 = x*x;   return x2*x2*x;  }
extern inline double gsl_sf_pow_6(const double x) { double x2 = x*x;   return x2*x2*x2; }
extern inline double gsl_sf_pow_7(const double x) { double x3 = x*x*x; return x3*x3*x;  }
extern inline double gsl_sf_pow_8(const double x) { double x2 = x*x;   double x4 = x2*x2; return x4*x4; }
extern inline double gsl_sf_pow_9(const double x) { double x3 = x*x*x; return x3*x3*x3; }

extern inline
int gsl_sf_pow_int_e(double x, int n, gsl_sf_result * result)
{
  int status = gsl_sf_pow_int_impl(x, n, result);
  if(status != GSL_SUCCESS) {
    GSL_ERROR("gsl_sf_pow_int", status);
  }
  return status;
  
}

extern inline
double gsl_sf_pow_int(double x, int n)
{
  gsl_sf_result p;
  int status = gsl_sf_pow_int_impl(x, n, &p);
  if(status != GSL_SUCCESS) {
    GSL_WARNING("gsl_sf_pow_int", status);
  }
  return p.val;
}
#endif /* HAVE_INLINE */


__END_DECLS

#endif /* __GSL_SF_POW_INT_H__ */
