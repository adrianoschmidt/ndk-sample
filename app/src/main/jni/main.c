#include "br_com_localhost8080_ndksample_MainActivity.h"

JNIEXPORT jstring JNICALL Java_br_com_localhost8080_ndksample_MainActivity_getStringFromNative
        (JNIEnv * env, jobject obj)
  {
    return (*env)->NewStringUTF(env, "Hello from JNI!");
  }

