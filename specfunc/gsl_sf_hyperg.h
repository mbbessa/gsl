/* Author:  G. Jungman
 * RCS:     $Id$
 */
#ifndef __GSL_SF_HYPERG_H__
#define __GSL_SF_HYPERG_H__

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


/* Hypergeometric function related to Bessel functions
 * 0F1[c,x] =
 *            Gamma[c]    x^(1/2(1-c)) I_{c-1}(2 Sqrt[x])
 *            Gamma[c] (-x)^(1/2(1-c)) J_{c-1}(2 Sqrt[-x])
 *
 * exceptions: GSL_EOVRFLW, GSL_EUNDRFLW
 */
int gsl_sf_hyperg_0F1_impl(double c, double x, gsl_sf_result * result);
int gsl_sf_hyperg_0F1_e(double c, double x, gsl_sf_result * result);


/* Confluent hypergeometric function  for integer parameters.
 * 1F1[m,n,x] = M(m,n,x)
 *
 * exceptions: 
 */
int gsl_sf_hyperg_1F1_int_impl(int m, int n, double x, gsl_sf_result * result);
int gsl_sf_hyperg_1F1_int_e(int m, int n, double x, gsl_sf_result * result);


/* Confluent hypergeometric function.
 * 1F1[a,b,x] = M(a,b,x)
 *
 * exceptions:
 */
int gsl_sf_hyperg_1F1_impl(double a, double b, double x, gsl_sf_result * result);
int gsl_sf_hyperg_1F1_e(double a, double b, double x, gsl_sf_result * result);


/* Confluent hypergeometric function for integer parameters.
 * U(m,n,x)
 *
 * exceptions:
 */
int gsl_sf_hyperg_U_int_impl(int m, int n, double x, gsl_sf_result * result);
int gsl_sf_hyperg_U_int_e(int m, int n, double x, gsl_sf_result * result);


/* Confluent hypergeometric function for integer parameters.
 * U(m,n,x)
 *
 * exceptions:
 */
int gsl_sf_hyperg_U_int_e10_impl(int m, int n, double x, gsl_sf_result_e10 * result);
int gsl_sf_hyperg_U_int_e10_e(int m, int n, double x, gsl_sf_result_e10 * result);


/* Confluent hypergeometric function.
 * U(a,b,x)
 *
 * exceptions:
 */
int gsl_sf_hyperg_U_impl(double a, double b, double x, gsl_sf_result * result);
int gsl_sf_hyperg_U_e(double a, double b, double x, gsl_sf_result * result);


/* Confluent hypergeometric function.
 * U(a,b,x)
 *
 * exceptions:
 */
int gsl_sf_hyperg_U_e10_impl(double a, double b, double x, gsl_sf_result_e10 * result);
int gsl_sf_hyperg_U_e10_e(double a, double b, double x, gsl_sf_result_e10 * result);


/* Gauss hypergeometric function 2F1[a,b,c,x]
 * |x| < 1
 *
 * exceptions:
 */
int gsl_sf_hyperg_2F1_impl(double a, double b, double c, double x, gsl_sf_result * result);
int gsl_sf_hyperg_2F1_e(double a, double b, double c, double x, gsl_sf_result * result);


/* Gauss hypergeometric function
 * 2F1[aR + I aI, aR - I aI, c, x]
 * |x| < 1
 *
 * exceptions:
 */
int gsl_sf_hyperg_2F1_conj_impl(double aR, double aI, double c, double x, gsl_sf_result * result);
int gsl_sf_hyperg_2F1_conj_e(double aR, double aI, double c, double x, gsl_sf_result * result);


/* Renormalized Gauss hypergeometric function
 * 2F1[a,b,c,x] / Gamma[c]
 * |x| < 1
 *
 * exceptions:
 */
int gsl_sf_hyperg_2F1_renorm_impl(double a, double b, double c, double x, gsl_sf_result * result);
int gsl_sf_hyperg_2F1_renorm_e(double a, double b, double c, double x, gsl_sf_result * result);


/* Renormalized Gauss hypergeometric function
 * 2F1[aR + I aI, aR - I aI, c, x] / Gamma[c]
 * |x| < 1
 *
 * exceptions:
 */
int gsl_sf_hyperg_2F1_conj_renorm_impl(double aR, double aI, double c, double x, gsl_sf_result * result);
int gsl_sf_hyperg_2F1_conj_renorm_e(double aR, double aI, double c, double x, gsl_sf_result * result);


/* Mysterious hypergeometric function. The series representation
 * is a divergent hypergeometric series. However, for x < 0 we
 * have 2F0(a,b,x) = (-1/x)^a U(a,1+a-b,-1/x)
 *
 * exceptions: GSL_EDOM
 */
int     gsl_sf_hyperg_2F0_impl(double a, double b, double x, gsl_sf_result * result);
int     gsl_sf_hyperg_2F0_e(double a, double b, double x, gsl_sf_result * result);


__END_DECLS

#endif /* __GSL_SF_HYPERG_H__ */
