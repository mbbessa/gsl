/* Author: G. Jungman
 * RCS: $Id$
 */

#define CONCAT(a,b) a ## _ ## b

/* n_start >= n_max >= n_min 
 * f[n+1] + a[n] f[n] + b[n] f[n-1] = 0
 */
#define GEN_RECURSE_BACKWARD_MINIMAL_SIMPLE(func)                             \
int CONCAT(recurse_backward_minimal_simple, func) (                           \
	                       const int n_start,                             \
                               const int n_max, const int n_min,              \
                               const double parameters[],                     \
                               const double f_n_min,                          \
                               double * f,                                    \
			       double * f_n_max                               \
                               )                                              \
{                                                                             \
  int n;                                                                      \
  double r_n = 0.;                                                            \
  double r_nm1;                                                               \
  double ratio;                                                               \
                                                                              \
  for(n=n_start; n > n_max; n--) {                                            \
    r_nm1 = -REC_COEFF_B(n, parameters) / (REC_COEFF_A(n, parameters) + r_n); \
    r_n = r_nm1;                                                              \
  }                                                                           \
                                                                              \
  if(f != 0) {                                                                \
    f[n_max] = 10.*DBL_MIN;                                                      \
    for(n=n_max; n > n_min; n--) {                                               \
      r_nm1  = -REC_COEFF_B(n, parameters) / (REC_COEFF_A(n, parameters) + r_n); \
      f[n-1] = f[n] / r_nm1;                                                     \
      r_n = r_nm1;                                                               \
    }                                                                         \
    ratio = f_n_min / f[n_min];                                               \
    for(n=n_min; n<=n_max; n++) {                                             \
      f[n] *= ratio;                                                          \
    }                                                                         \
  }                                                                           \
  else {                                                                      \
    double f_nm1;                                                             \
    double f_n = 10.*DBL_MIN;                                                 \
    *f_n_max = f_n;                                                           \
    for(n=n_max; n > n_min; n--) {                                               \
      r_nm1 = -REC_COEFF_B(n, parameters) / (REC_COEFF_A(n, parameters) + r_n);  \
      f_nm1 = f_n / r_nm1;                                                       \
      r_n = r_nm1;                                                               \
    }                                                                         \
    ratio = f_n_min / f_nm1;                                                  \
    *f_n_max *= ratio;                                                        \
  }                                                                           \
                                                                              \
  return GSL_SUCCESS;                                                         \
}                                                                             \

