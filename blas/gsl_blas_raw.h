/*
 * Author:  G. Jungman
 * RCS:     $Id$
 */
/* Raw BLAS interface for row-major matrices.
 * Based on draft BLAST C interface specification  [Jul 7 1998]
 */
#ifndef GSL_BLAS_RAW_H_
#define GSL_BLAS_RAW_H_

#include <gsl_blas_raw_L1.h>
#include <gsl_blas_types.h>


/*
 * ===========================================================================
 * Prototypes for level 2 BLAS
 * ===========================================================================
 */

/* GEMV */
void gsl_blas_raw_sgemv (CBLAS_TRANSPOSE TransA,
                         size_t M, size_t N,
                         float alpha,
                         const float A[], int lda,
                         const float X[], int incX,
                         float beta,
                         float Y[], int incY);

void gsl_blas_raw_dgemv (CBLAS_TRANSPOSE TransA,
			 size_t M, size_t N,
                         double alpha,
			 const double A[], int lda,
                         const double X[], int incX,
			 double beta,
                         double Y[], int incY);

void gsl_blas_raw_cgemv (CBLAS_TRANSPOSE TransA,
			 size_t M, size_t N,
                         const void * alpha,
			 const void * A, int lda,
                         const void * X, int incX,
			 const void * beta,
                         void * Y, int incY);

void gsl_blas_raw_zgemv (CBLAS_TRANSPOSE TransA,
			 size_t M, size_t N,
                         const void * alpha,
			 const void * A, int lda,
                         const void * X, int incX,
			 const void * beta,
                         void * Y, int incY);

/* GBMV */

void gsl_blas_raw_sgbmv (CBLAS_TRANSPOSE TransA,
                         size_t M, size_t N, size_t KL, size_t KU,
			 float alpha,
                         const float A[], int lda,
                         const float X[], int incX,
                         float beta,
                         float Y[], int incY);

void gsl_blas_raw_dgbmv (CBLAS_TRANSPOSE TransA,
			 size_t M, size_t N, size_t KL, size_t KU,
			 double alpha,
                         const double A[], int lda,
			 const double X[], int incX,
			 double beta,
			 double Y[], int incY);

void gsl_blas_raw_cgbmv (CBLAS_TRANSPOSE TransA,
			 size_t M, size_t N, size_t KL, size_t KU,
			 const void * alpha,
                         const void * A, int lda,
			 const void * X, int incX,
			 const void * beta,
			 void * Y, int incY);

void gsl_blas_raw_zgbmv (CBLAS_TRANSPOSE TransA,
			 size_t M, size_t N, size_t KL, size_t KU,
			 const void * alpha,
                         const void * A, int lda,
			 const void * X, int incX,
			 const void * beta,
			 void * Y, int incY);


/* TRMV */

void gsl_blas_raw_strmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
                         const float A[], int lda,
                         float X[], int incX);

void gsl_blas_raw_dtrmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const double A[], int lda,
                         double X[], int incX);

void gsl_blas_raw_ctrmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const void * A, int lda,
                         void * X, int incX);

void gsl_blas_raw_ztrmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const void * A, int lda,
                         void * X, int incX);


/* TBMV */

void gsl_blas_raw_stbmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N, size_t K,
			 const float A[], int lda,
                         float X[], int incX);

void gsl_blas_raw_dtbmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N, size_t K,
			 const double A[], int lda,
                         double X[], int incX);

void gsl_blas_raw_ctbmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N, size_t K,
			 const void * A, int lda,
                         void * X, int incX);

void gsl_blas_raw_ztbmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N, size_t K,
			 const void * A, int lda,
                         void * X, int incX);


/* TPMV */

void gsl_blas_raw_stpmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const float Ap[],
			 float X[], int incX);

void gsl_blas_raw_dtpmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const double Ap[],
			 double X[], int incX);

void gsl_blas_raw_ctpmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const void * Ap,
			 void * X, int incX);

void gsl_blas_raw_ztpmv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const void * Ap,
			 void * X, int incX);

/* TRSV */

void gsl_blas_raw_strsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const float A[], int lda,
			 float X[], int incX);

void gsl_blas_raw_dtrsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const double A[], int lda,
			 double X[], int incX);

void gsl_blas_raw_ctrsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const void * A, int lda,
			 void * X, int incX);

void gsl_blas_raw_ztrsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const void * A, int lda,
			 void * X, int incX);


/* TBSV */

void gsl_blas_raw_stbsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N, size_t K,
			 const float A[], int lda,
                         float X[], int incX);

void gsl_blas_raw_dtbsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N, size_t K,
			 const double A[], int lda,
                         double X[], int incX);

void gsl_blas_raw_ctbsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N, size_t K,
			 const void * A, int lda,
                         void * X, int incX);

void gsl_blas_raw_ztbsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N, size_t K,
			 const void * A, int lda,
                         void * X, int incX);


/* TPSV */

void gsl_blas_raw_stpsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const float Ap[],
			 float X[], int incX);

void gsl_blas_raw_dtpsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const double Ap[],
			 double X[], int incX);

void gsl_blas_raw_ctpsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const void * Ap,
			 void * X, int incX);

void gsl_blas_raw_ztpsv (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE TransA, CBLAS_DIAG Diag,
                         size_t N,
			 const void * Ap,
			 void * X, int incX);


/* SYMV */

void gsl_blas_raw_ssymv (CBLAS_UPLO Uplo,
                         size_t N,
			 float alpha,
			 const float A[], int lda,
			 const float X[], int incX,
                         float beta,
			 float Y[], int incY);

void gsl_blas_raw_dsymv (CBLAS_UPLO Uplo,
                         size_t N,
			 double alpha,
			 const double A[], int lda,
			 const double X[], int incX,
                         double beta,
			 double Y[], int incY);


/* SBMV */

void gsl_blas_raw_ssbmv (CBLAS_UPLO Uplo,
                         size_t N, size_t K,
			 float alpha,
			 const float A[], int lda, 
			 const float X[], int incX,
                         float beta,
			 float Y[], int incY);

void gsl_blas_raw_dsbmv (CBLAS_UPLO Uplo,
                         size_t N, size_t K,
			 double alpha,
			 const double A[], int lda,
			 const double X[], int incX,
                         double beta,
			 double Y[], int incY);

/* SPMV */

void gsl_blas_raw_sspmv (CBLAS_UPLO Uplo,
                         size_t N,
			 float alpha,
			 const float Ap[],
                         const float X[], int incX,
                         float beta,
			 float Y[], int incY);

void gsl_blas_raw_dspmv (CBLAS_UPLO Uplo,
                         size_t N,
			 double alpha,
			 const double Ap[],
                         const double X[], int incX,
                         double beta,
			 double Y[], int incY);

/* GER */

void gsl_blas_raw_sger (size_t M, size_t N,
                        float alpha,
			const float X[], int incX,
                        const float Y[], int incY,
			float A[], int lda);

void gsl_blas_raw_dger (size_t M, size_t N,
                        double alpha,
			const double X[], int incX,
                        const double Y[], int incY,
			double A[], int lda);


/* SYR */

void gsl_blas_raw_ssyr (CBLAS_UPLO Uplo,
                        size_t N,
			float alpha,
			const float X[], int incX,
			float A[], int lda);

void gsl_blas_raw_dsyr (CBLAS_UPLO Uplo,
                        size_t N,
			double alpha,
			const double X[], int incX,
			double A[], int lda);


/* SPR */

void gsl_blas_raw_sspr (CBLAS_UPLO Uplo,
                        size_t N,
			float alpha,
			const float X[], int incX,
			float Ap[]);

void gsl_blas_raw_dspr (CBLAS_UPLO Uplo,
                        size_t N,
			double alpha,
			const double X[], int incX,
			double Ap[]);


/* SYR2 */

void gsl_blas_raw_ssyr2 (CBLAS_UPLO Uplo,
                         size_t N,
			 float alpha,
			 const float X[], int incX, 
			 const float Y[], int incY,
			 float A[], int lda);

void gsl_blas_raw_dsyr2 (CBLAS_UPLO Uplo,
                         size_t N,
			 double alpha,
			 const double X[], int incX,
			 const double Y[], int incY,
			 double A[], int lda);


/* SPR2 */

void gsl_blas_raw_sspr2 (CBLAS_UPLO Uplo,
                         size_t N,
			 float alpha,
			 const float X[], int incX,
			 const float Y[], int incY,
			 float A[]);

void gsl_blas_raw_dspr2 (CBLAS_UPLO Uplo,
                         size_t N,
			 double alpha,
			 const double X[], int incX,
			 const double Y[], int incY,
			 double A[]);


/* HEMV */

void gsl_blas_raw_chemv (CBLAS_UPLO Uplo,
                         size_t N,
			 const void * alpha,
			 const void * A, int lda,
			 const void * X, int incX,
                         const void * beta,
			 void * Y, int incY);

void gsl_blas_raw_zhemv (CBLAS_UPLO Uplo,
                         size_t N,
			 const void * alpha,
			 const void * A, int lda,
			 const void * X, int incX,
                         const void * beta,
			 void * Y, int incY);


/* HBMV */

void gsl_blas_raw_chbmv (CBLAS_UPLO Uplo,
                         size_t N, size_t K,
			 const void * alpha,
			 const void * A, int lda,
			 const void * X, int incX,
                         const void * beta,
			 void * Y, int incY);

void gsl_blas_raw_zhbmv (CBLAS_UPLO Uplo,
                         size_t N, size_t K,
			 const void * alpha,
			 const void * A, int lda,
			 const void * X, int incX,
                         const void * beta,
			 void * Y, int incY);


/* HPMV */

void gsl_blas_raw_chpmv (CBLAS_UPLO Uplo,
                         size_t N,
			 const void * alpha, const void * Ap,
                         const void * X, int incX,
                         const void * beta,
			 void * Y, int incY);

void gsl_blas_raw_zhpmv (CBLAS_UPLO Uplo,
                         size_t N,
			 const void * alpha,
			 const void * Ap,
                         const void * X, int incX,
                         const void * beta,
			 void * Y, int incY);


/* GERU */

void gsl_blas_raw_cgeru (size_t M, size_t N,
                         const void * alpha,
			 const void * X, int incX,
                         const void * Y, int incY,
			 void * A, int lda);

void gsl_blas_raw_zgeru (size_t M, size_t N,
                         const void * alpha,
			 const void * X, int incX,
                         const void * Y, int incY,
			 void * A, int lda);


/* GERC */

void gsl_blas_raw_cgerc (size_t M, size_t N,
                         const void * alpha,
			 const void * X, int incX,
                         const void * Y, int incY,
			 void * A, int lda);

void gsl_blas_raw_zgerc (size_t M, size_t N,
                         const void * alpha,
			 const void * X, int incX,
                         const void * Y, int incY,
			 void * A, int lda);

/* HER */

void gsl_blas_raw_cher (CBLAS_UPLO Uplo,
                        size_t N,
			float alpha,
			const void * X, int incX,
                        void * A, int lda);

void gsl_blas_raw_zher (CBLAS_UPLO Uplo,
                        size_t N,
			double alpha,
			const void * X, int incX,
                        void * A, int lda);


/* HPR */

void gsl_blas_raw_chpr (CBLAS_UPLO Uplo,
                        size_t N,
			float alpha,
			const void * X, int incX,
			void * A);

void gsl_blas_raw_zhpr (CBLAS_UPLO Uplo,
                        size_t N,
			double alpha,
			const void * X, int incX,
			void * A);


/* HER2 */

void gsl_blas_raw_cher2 (CBLAS_UPLO Uplo,
                         size_t N,
                         const void * alpha,
			 const void * X, int incX,
                         const void * Y, int incY,
			 void * A, int lda);

void gsl_blas_raw_zher2 (CBLAS_UPLO Uplo,
                         size_t N,
                         const void * alpha,
			 const void * X, int incX,
                         const void * Y, int incY,
			 void * A, int lda);


/* HPR2 */

void gsl_blas_raw_chpr2 (CBLAS_UPLO Uplo,
                         size_t N,
                         const void * alpha,
			 const void * X, int incX,
                         const void * Y, int incY,
			 void * Ap);

void gsl_blas_raw_zhpr2 (CBLAS_UPLO Uplo,
                         size_t N,
                         const void * alpha,
			 const void * X, int incX,
                         const void * Y, int incY,
			 void * Ap);


/*
 * ===========================================================================
 * Prototypes for level 3 BLAS
 * ===========================================================================
 */

/* GEMM */

void gsl_blas_raw_sgemm (CBLAS_TRANSPOSE TransA,
                         CBLAS_TRANSPOSE TransB,
			 size_t M, size_t N, size_t K,
			 float alpha,
			 const float A[], int lda,
			 const float B[], int ldb,
                         float beta,
			 float C[], int ldc);

void gsl_blas_raw_dgemm (CBLAS_TRANSPOSE TransA,
                         CBLAS_TRANSPOSE TransB,
			 size_t M, size_t N, size_t K,
			 double alpha,
			 const double A[], int lda,
			 const double B[], int ldb,
                         double beta,
			 double C[], int ldc);

void gsl_blas_raw_cgemm (CBLAS_TRANSPOSE TransA,
                         CBLAS_TRANSPOSE TransB,
			 size_t M, size_t N, size_t K,
			 const void * alpha,
			 const void * A, int lda, 
			 const void * B, int ldb,
                         const void * beta,
			 void * C, int ldc);

void gsl_blas_raw_zgemm (CBLAS_TRANSPOSE TransA,
                         CBLAS_TRANSPOSE TransB,
			 size_t M, size_t N, size_t K,
			 const void * alpha,
			 const void * A, int lda,
			 const void * B, int ldb,
                         const void * beta,
			 void * C, int ldc);


/* SYMM */

void gsl_blas_raw_ssymm (CBLAS_SIDE Side, CBLAS_UPLO Uplo,
			 size_t M, size_t N,
                         float alpha,
			 const float A[], int lda,
                         const float B[], int ldb,
			 float beta,
                         float C[], int ldc);

void gsl_blas_raw_dsymm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo,
			 size_t M, size_t N,
                         double alpha,
			 const double A[], int lda,
                         const double B[], int ldb,
			 double beta,
                         double C[], int ldc);

void gsl_blas_raw_csymm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo,
			 size_t M, size_t N,
                         const void * alpha,
			 const void * A, int lda,
                         const void * B, int ldb,
			 const void * beta,
                         void * C, int ldc);

void gsl_blas_raw_zsymm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo,
			 size_t M, size_t N,
                         const void * alpha,
			 const void * A, int lda,
                         const void * B, int ldb,
			 const void * beta,
                         void * C, int ldc);


/* SYRK */

void gsl_blas_raw_ssyrk (CBLAS_UPLO Uplo, CBLAS_TRANSPOSE Trans,
			 size_t N, size_t K,
                         float alpha,
			 const float A[], int lda,
                         float beta,
			 float C[], int ldc);

void gsl_blas_raw_dsyrk (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE Trans,
			 size_t N, size_t K,
                         double alpha,
			 const double A[], int lda,
                         double beta,
			 double C[], int ldc);

void gsl_blas_raw_csyrk (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE Trans,
			 size_t N, size_t K,
                         const void * alpha,
			 const void * A, int lda,
                         const void * beta,
			 void * C, int ldc);

void gsl_blas_raw_zsyrk (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE Trans,
			 size_t N, size_t K,
                         const void * alpha,
			 const void * A, int lda,
                         const void * beta,
			 void * C, int ldc);


/* SYR2K */

void gsl_blas_raw_ssyr2k (CBLAS_UPLO Uplo, CBLAS_TRANSPOSE Trans,
			  size_t N, size_t K,
                          float alpha,
			  const float A[], int lda,
                          const float B[], int ldb,
			  float beta,
                          float C[], int ldc);

void gsl_blas_raw_dsyr2k (CBLAS_UPLO Uplo,
                          CBLAS_TRANSPOSE Trans,
			  size_t N, size_t K,
                          double alpha,
			  const double A[], int lda,
                          const double B[], int ldb,
			  double beta,
                          double C[], int ldc);

void gsl_blas_raw_csyr2k (CBLAS_UPLO Uplo,
                          CBLAS_TRANSPOSE Trans,
			  size_t N, size_t K,
                          const void * alpha,
			  const void * A, int lda,
                          const void * B, int ldb,
			  const void * beta,
                          void * C, int ldc);

void gsl_blas_raw_zsyr2k (CBLAS_UPLO Uplo,
                          CBLAS_TRANSPOSE Trans,
			  size_t N, size_t K,
                          const void * alpha,
			  const void * A, int lda,
                          const void * B, int ldb,
			  const void * beta,
                          void * C, int ldc);


/* TRMM */

void gsl_blas_raw_strmm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo, CBLAS_TRANSPOSE TransA,
                         CBLAS_DIAG Diag,
			 size_t M, size_t N,
                         float alpha,
			 const float A[], int lda,
                         float B[], int ldb);

void gsl_blas_raw_dtrmm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo, CBLAS_TRANSPOSE TransA,
                         CBLAS_DIAG Diag,
			 size_t M, size_t N,
                         double alpha,
			 const double A[], int lda,
                         double B[], int ldb);

void gsl_blas_raw_ctrmm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo, CBLAS_TRANSPOSE TransA,
                         CBLAS_DIAG Diag,
			 size_t M, size_t N,
                         const void * alpha,
			 const void * A, int lda,
                         void * B, int ldb);

void gsl_blas_raw_ztrmm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo, CBLAS_TRANSPOSE TransA,
                         CBLAS_DIAG Diag,
			 size_t M, size_t N,
                         const void * alpha,
			 const void * A, int lda,
                         void * B, int ldb);


/* TRSM */

void gsl_blas_raw_strsm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo, CBLAS_TRANSPOSE TransA,
                         CBLAS_DIAG Diag,
			 size_t M, size_t N,
                         float alpha,
			 const float A[], int lda,
                         float B[], int ldb);

void gsl_blas_raw_dtrsm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo, CBLAS_TRANSPOSE TransA,
                         CBLAS_DIAG Diag,
			 size_t M, size_t N,
                         double alpha,
			 const double A[], int lda,
                         double B[], int ldb);

void gsl_blas_raw_ctrsm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo, CBLAS_TRANSPOSE TransA,
                         CBLAS_DIAG Diag,
			 size_t M, size_t N,
                         const void * alpha,
			 const void * A, int lda,
                         void * B, int ldb);

void gsl_blas_raw_ztrsm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo, CBLAS_TRANSPOSE TransA,
                         CBLAS_DIAG Diag,
			 size_t M, size_t N,
                         const void * alpha,
			 const void * A, int lda,
                         void * B, int ldb);


/* HEMM */

void gsl_blas_raw_chemm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo,
			 size_t M, size_t N,
                         const void * alpha,
			 const void * A, int lda,
                         const void * B, int ldb,
			 const void * beta,
                         void * C, int ldc);

void gsl_blas_raw_zhemm (CBLAS_SIDE Side,
                         CBLAS_UPLO Uplo,
			 size_t M, size_t N,
                         const void * alpha,
			 const void * A, int lda,
                         const void * B, int ldb,
			 const void * beta,
                         void * C, int ldc);


/* HERK */

void gsl_blas_raw_cherk (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE Trans,
			 size_t N, size_t K,
                         float alpha,
			 const void * A, int lda,
                         float beta,
			 void * C, int ldc);

void gsl_blas_raw_zherk (CBLAS_UPLO Uplo,
                         CBLAS_TRANSPOSE Trans,
			 size_t N, size_t K,
                         double alpha,
			 const void * A, int lda,
                         double beta,
			 void * C, int ldc);


/* HER2K */

void gsl_blas_raw_cher2k (CBLAS_UPLO Uplo,
                          CBLAS_TRANSPOSE Trans,
			  size_t N, size_t K,
                          const void * alpha,
			  const void * A, int lda,
                          const void * B, int ldb,
			  float beta,
                          void * C, int ldc);


void gsl_blas_raw_zher2k (CBLAS_UPLO Uplo,
                          CBLAS_TRANSPOSE Trans,
			  size_t N, size_t K,
                          const void * alpha,
			  const void * A, int lda,
                          const void * B, int ldb,
			  double beta,
                          void * C, int ldc);


#if defined(HAVE_INLINE) && defined(HAVE_CBLAS)
#include <cblas.h>

/* insert inline cblas implementation of above here */

#endif /* defined(HAVE_INLINE) && defined(HAVE_CBLAS) */


#endif /* !GSL_BLAS_RAW_H_ */
