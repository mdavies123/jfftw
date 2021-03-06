/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jfftw_Interface */

#ifndef _Included_jfftw_Interface
#define _Included_jfftw_Interface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jfftw_Interface
 * Method:    jfftw_alloc_real
 * Signature: (J)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_jfftw_Interface_jfftw_1alloc_1real
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_alloc_complex
 * Signature: (J)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_jfftw_Interface_jfftw_1alloc_1complex
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_alignment_of
 * Signature: (Ljava/lang/Object;)I
 */
JNIEXPORT jint JNICALL Java_jfftw_Interface_jfftw_1alignment_1of
  (JNIEnv *, jclass, jobject);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_cleanup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1cleanup
  (JNIEnv *, jclass);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_cleanup_threads
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1cleanup_1threads
  (JNIEnv *, jclass);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_cost
 * Signature: (Ljfftw/Plan;)D
 */
JNIEXPORT jdouble JNICALL Java_jfftw_Interface_jfftw_1cost
  (JNIEnv *, jclass, jobject);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_destroy_plan
 * Signature: (Ljfftw/Plan;)V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1destroy_1plan
  (JNIEnv *, jclass, jobject);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_estimate_cost
 * Signature: (Ljfftw/Plan;)D
 */
JNIEXPORT jdouble JNICALL Java_jfftw_Interface_jfftw_1estimate_1cost
  (JNIEnv *, jclass, jobject);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_execute
 * Signature: (Ljfftw/Plan;)V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1execute
  (JNIEnv *, jclass, jobject);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_execute_dft
 * Signature: (Ljfftw/Plan;Ljava/lang/Object;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1execute_1dft
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_execute_dft_c2r
 * Signature: (Ljfftw/Plan;Ljava/lang/Object;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1execute_1dft_1c2r
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_execute_dft_r2c
 * Signature: (Ljfftw/Plan;Ljava/lang/Object;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1execute_1dft_1r2c
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_export_wisdom_to_filename
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_jfftw_Interface_jfftw_1export_1wisdom_1to_1filename
  (JNIEnv *, jclass, jstring);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_export_wisdom_to_string
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jfftw_Interface_jfftw_1export_1wisdom_1to_1string
  (JNIEnv *, jclass);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_forget_wisdom
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1forget_1wisdom
  (JNIEnv *, jclass);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_import_system_wisdom
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jfftw_Interface_jfftw_1import_1system_1wisdom
  (JNIEnv *, jclass);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_import_wisdom_from_filename
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_jfftw_Interface_jfftw_1import_1wisdom_1from_1filename
  (JNIEnv *, jclass, jstring);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_import_wisdom_from_string
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_jfftw_Interface_jfftw_1import_1wisdom_1from_1string
  (JNIEnv *, jclass, jstring);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_init_threads
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_jfftw_Interface_jfftw_1init_1threads
  (JNIEnv *, jclass);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_make_planner_thread_safe
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1make_1planner_1thread_1safe
  (JNIEnv *, jclass);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_with_nthreads
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1plan_1with_1nthreads
  (JNIEnv *, jclass, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_set_timelimit
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1set_1timelimit
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_print_plan
 * Signature: (Ljfftw/Plan;)V
 */
JNIEXPORT void JNICALL Java_jfftw_Interface_jfftw_1print_1plan
  (JNIEnv *, jclass, jobject);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_sprint_plan
 * Signature: (Ljfftw/Plan;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jfftw_Interface_jfftw_1sprint_1plan
  (JNIEnv *, jclass, jobject);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft
 * Signature: (I[ILjava/lang/Object;Ljava/lang/Object;II)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft
  (JNIEnv *, jclass, jint, jintArray, jobject, jobject, jint, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft_1d
 * Signature: (ILjava/lang/Object;Ljava/lang/Object;II)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft_11d
  (JNIEnv *, jclass, jint, jobject, jobject, jint, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft_2d
 * Signature: (IILjava/lang/Object;Ljava/lang/Object;II)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft_12d
  (JNIEnv *, jclass, jint, jint, jobject, jobject, jint, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft_3d
 * Signature: (IIILjava/lang/Object;Ljava/lang/Object;II)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft_13d
  (JNIEnv *, jclass, jint, jint, jint, jobject, jobject, jint, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft_c2r
 * Signature: (I[ILjava/lang/Object;Ljava/lang/Object;I)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft_1c2r
  (JNIEnv *, jclass, jint, jintArray, jobject, jobject, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft_c2r_1d
 * Signature: (ILjava/lang/Object;Ljava/lang/Object;I)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft_1c2r_11d
  (JNIEnv *, jclass, jint, jobject, jobject, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft_c2r_2d
 * Signature: (IILjava/lang/Object;Ljava/lang/Object;I)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft_1c2r_12d
  (JNIEnv *, jclass, jint, jint, jobject, jobject, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft_c2r_3d
 * Signature: (IIILjava/lang/Object;Ljava/lang/Object;I)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft_1c2r_13d
  (JNIEnv *, jclass, jint, jint, jint, jobject, jobject, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft_r2c
 * Signature: (I[ILjava/lang/Object;Ljava/lang/Object;I)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft_1r2c
  (JNIEnv *, jclass, jint, jintArray, jobject, jobject, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft_r2c_1d
 * Signature: (ILjava/lang/Object;Ljava/lang/Object;I)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft_1r2c_11d
  (JNIEnv *, jclass, jint, jobject, jobject, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft_r2c_2d
 * Signature: (IILjava/lang/Object;Ljava/lang/Object;I)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft_1r2c_12d
  (JNIEnv *, jclass, jint, jint, jobject, jobject, jint);

/*
 * Class:     jfftw_Interface
 * Method:    jfftw_plan_dft_r2c_3d
 * Signature: (IIILjava/lang/Object;Ljava/lang/Object;I)J
 */
JNIEXPORT jlong JNICALL Java_jfftw_Interface_jfftw_1plan_1dft_1r2c_13d
  (JNIEnv *, jclass, jint, jint, jint, jobject, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
