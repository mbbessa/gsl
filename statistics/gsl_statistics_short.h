#ifndef __GSL_STATISTICS_SHORT_H__
#define __GSL_STATISTICS_SHORT_H__

#include <stddef.h>

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

double gsl_stats_short_mean (const short data[], size_t stride, size_t n);
double gsl_stats_short_variance (const short data[], size_t stride, size_t n);
double gsl_stats_short_sd (const short data[], size_t stride, size_t n);
double gsl_stats_short_variance_with_fixed_mean (const short data[], size_t stride, size_t n, double mean);
double gsl_stats_short_sd_with_fixed_mean (const short data[], size_t stride, size_t n, double mean);
double gsl_stats_short_absdev (const short data[], size_t stride, size_t n);
double gsl_stats_short_skew (const short data[], size_t stride, size_t n);
double gsl_stats_short_kurtosis (const short data[], size_t stride, size_t n);
double gsl_stats_short_lag1_autocorrelation (const short data[], size_t stride, size_t n);

double gsl_stats_short_variance_m (const short data[], size_t stride, size_t n, double mean);
double gsl_stats_short_sd_m (const short data[], size_t stride, size_t n, double mean);
double gsl_stats_short_absdev_m (const short data[], size_t stride, size_t n, double mean);
double gsl_stats_short_skew_m_sd (const short data[], size_t stride, size_t n, double mean, double sd);
double gsl_stats_short_kurtosis_m_sd (const short data[], size_t stride, size_t n, double mean, double sd);
double gsl_stats_short_lag1_autocorrelation_m (const short data[], size_t stride, size_t n, double mean);


double gsl_stats_short_pvariance (const short data1[], size_t stride1, size_t n1, const short data2[], const size_t stride2, size_t n2);
double gsl_stats_short_ttest (const short data1[], size_t stride1, size_t n1, const short data2[], size_t stride2, size_t n2);

short gsl_stats_short_max (const short data[], size_t stride, size_t n);
short gsl_stats_short_min (const short data[], size_t stride, size_t n);
void gsl_stats_short_minmax (short * min, short * max, const short data[], size_t stride, size_t n);

size_t gsl_stats_short_max_index (const short data[], size_t stride, size_t n);
size_t gsl_stats_short_min_index (const short data[], size_t stride, size_t n);
void gsl_stats_short_minmax_index (size_t * min_index, size_t * max_index, const short data[], size_t stride, size_t n);

double gsl_stats_short_median_from_sorted_data (const short sorted_data[], size_t stride, size_t n) ;
double gsl_stats_short_quantile_from_sorted_data (const short sorted_data[], size_t stride, size_t n, const double f) ;

__END_DECLS

#endif /* __GSL_STATISTICS_SHORT_H__ */
