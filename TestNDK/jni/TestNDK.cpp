#include <jni.h>
#include "com_et_testndk_NativeClass.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_et_testndk_NativeClass
 * Method:    getResult
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_et_testndk_NativeClass_getResult
  (JNIEnv *env, jobject jthiz)
{
	return env->NewStringUTF( "Hello from JNI !");
}
/*
 * Class:     com_et_testndk_NativeClass
 * Method:    getLine
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_et_testndk_NativeClass_getLine
  (JNIEnv *, jobject, jstring)
{
	char buf[128] = "���Ǵӱ��ش����ȡ����"; //�ַ�����
	 jbyte *str;//jbyte���Ͷ�ӦC�е�unsigned char
	  str = (*env)->GetStringUTFChars(env, jstring, NULL);
	  (*env)->ReleaseStringUTFChars(env, jstring, str);
	  return (*env)->NewStringUTF(env, buf);
}
#ifdef __cplusplus
}
#endif

