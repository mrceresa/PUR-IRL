/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class CRC_Prediction_InferenceAlgoCancer */

#ifndef _Included_CRC_Prediction_InferenceAlgoCancer
#define _Included_CRC_Prediction_InferenceAlgoCancer
#ifdef __cplusplus
extern "C" {
#endif
#undef CRC_Prediction_InferenceAlgoCancer_kOneMicroSecond
#define CRC_Prediction_InferenceAlgoCancer_kOneMicroSecond 1000L
#undef CRC_Prediction_InferenceAlgoCancer_kOneHundredthSecond
#define CRC_Prediction_InferenceAlgoCancer_kOneHundredthSecond 10LL
#undef CRC_Prediction_InferenceAlgoCancer_kOneQuarterSecond
#define CRC_Prediction_InferenceAlgoCancer_kOneQuarterSecond 250LL
#undef CRC_Prediction_InferenceAlgoCancer_kOneSecond
#define CRC_Prediction_InferenceAlgoCancer_kOneSecond 1000LL
#undef CRC_Prediction_InferenceAlgoCancer_kFiveSeconds
#define CRC_Prediction_InferenceAlgoCancer_kFiveSeconds 5000LL
#undef CRC_Prediction_InferenceAlgoCancer_kCompare
#define CRC_Prediction_InferenceAlgoCancer_kCompare 0L
#undef CRC_Prediction_InferenceAlgoCancer_kCompareJNI
#define CRC_Prediction_InferenceAlgoCancer_kCompareJNI 1L
#undef CRC_Prediction_InferenceAlgoCancer_kCompareBlas
#define CRC_Prediction_InferenceAlgoCancer_kCompareBlas 2L
#undef CRC_Prediction_InferenceAlgoCancer_kPrintDebug
#define CRC_Prediction_InferenceAlgoCancer_kPrintDebug 0L
#undef CRC_Prediction_InferenceAlgoCancer_kInvalidGPU
#define CRC_Prediction_InferenceAlgoCancer_kInvalidGPU -1L
/*
 * Class:     CRC_Prediction_InferenceAlgoCancer
 * Method:    convergeMatrixMKL
 * Signature: ([D[D[D[DIIID)Z
 */
JNIEXPORT jboolean JNICALL Java_CRC_1Prediction_InferenceAlgoCancer_convergeMatrixMKL
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray, jdoubleArray, jint, jint, jint, jdouble);

/*
 * Class:     CRC_Prediction_InferenceAlgoCancer
 * Method:    multiplyMatrixMKL
 * Signature: ([D[D[DIII)V
 */
JNIEXPORT void JNICALL Java_CRC_1Prediction_InferenceAlgoCancer_multiplyMatrixMKL
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray, jint, jint, jint);

/*
 * Class:     CRC_Prediction_InferenceAlgoCancer
 * Method:    initCuda
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_CRC_1Prediction_InferenceAlgoCancer_initCuda
  (JNIEnv *, jclass, jint);

/*
 * Class:     CRC_Prediction_InferenceAlgoCancer
 * Method:    convergeMatrixCuda
 * Signature: ([F[F[F[FIIIIF)Z
 */
JNIEXPORT jboolean JNICALL Java_CRC_1Prediction_InferenceAlgoCancer_convergeMatrixCuda
  (JNIEnv *, jclass, jfloatArray, jfloatArray, jfloatArray, jfloatArray, jint, jint, jint, jint, jfloat);

/*
 * Class:     CRC_Prediction_InferenceAlgoCancer
 * Method:    convergeMatrixCudaD
 * Signature: ([D[D[D[DIIIID)Z
 */
JNIEXPORT jboolean JNICALL Java_CRC_1Prediction_InferenceAlgoCancer_convergeMatrixCudaD
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray, jdoubleArray, jint, jint, jint, jint, jdouble);

/*
 * Class:     CRC_Prediction_InferenceAlgoCancer
 * Method:    convergeMatrixCuBLAS
 * Signature: ([F[F[F[FIIIIF)Z
 */
JNIEXPORT jboolean JNICALL Java_CRC_1Prediction_InferenceAlgoCancer_convergeMatrixCuBLAS
  (JNIEnv *, jclass, jfloatArray, jfloatArray, jfloatArray, jfloatArray, jint, jint, jint, jint, jfloat);

/*
 * Class:     CRC_Prediction_InferenceAlgoCancer
 * Method:    convergeMatrixCuBLASD
 * Signature: ([D[D[D[DIIIID)Z
 */
JNIEXPORT jboolean JNICALL Java_CRC_1Prediction_InferenceAlgoCancer_convergeMatrixCuBLASD
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray, jdoubleArray, jint, jint, jint, jint, jdouble);

/*
 * Class:     CRC_Prediction_InferenceAlgoCancer
 * Method:    multiplyMatrixCuBLASD
 * Signature: ([D[D[DIIII)V
 */
JNIEXPORT void JNICALL Java_CRC_1Prediction_InferenceAlgoCancer_multiplyMatrixCuBLASD
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray, jint, jint, jint, jint);

/*
 * Class:     CRC_Prediction_InferenceAlgoCancer
 * Method:    convergeMatrixJNI
 * Signature: ([D[D[D[DIIID)Z
 */
JNIEXPORT jboolean JNICALL Java_CRC_1Prediction_InferenceAlgoCancer_convergeMatrixJNI
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray, jdoubleArray, jint, jint, jint, jdouble);

/*
 * Class:     CRC_Prediction_InferenceAlgoCancer
 * Method:    compareMatrices
 * Signature: ([D[DID)Z
 */
JNIEXPORT jboolean JNICALL Java_CRC_1Prediction_InferenceAlgoCancer_compareMatrices
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jint, jdouble);

#ifdef __cplusplus
}
#endif
#endif
