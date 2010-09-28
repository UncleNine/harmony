/*
 *  Licensed to the Apache Software Foundation (ASF) under one or more
 *  contributor license agreements.  See the NOTICE file distributed with
 *  this work for additional information regarding copyright ownership.
 *  The ASF licenses this file to You under the Apache License, Version 2.0
 *  (the "License"); you may not use this file except in compliance with
 *  the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/** 
 * @author Euguene Ostrovsky
 */  

/*
 * THE FILE HAS BEEN AUTOGENERATED BY INTEL IJH TOOL.
 * Please be aware that all changes made to this file manually
 * will be overwritten by the tool if it runs again.
 */

#include <jni.h>


/* Header for class java.lang.reflect.VMReflection */

#ifndef _JAVA_LANG_REFLECT_VMREFLECTION_H
#define _JAVA_LANG_REFLECT_VMREFLECTION_H

#ifdef __cplusplus
extern "C" {
#endif


/* Native methods */

/*
 * Method: java.lang.reflect.VMReflection.getExceptionTypes(J)[Ljava/lang/Class;
 */
JNIEXPORT jobjectArray JNICALL Java_java_lang_reflect_VMReflection_getExceptionTypes
    (JNIEnv *, jclass, jlong);

/*
 * Method: java.lang.reflect.VMReflection.getParameterTypes(J)[Ljava/lang/Class;
 */
JNIEXPORT jobjectArray JNICALL Java_java_lang_reflect_VMReflection_getParameterTypes
    (JNIEnv *, jclass, jlong);

/*
 * Method: java.lang.reflect.VMReflection.getMethodReturnType(J)Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_java_lang_reflect_VMReflection_getMethodReturnType
    (JNIEnv *, jclass, jlong);

/*
 * Method: java.lang.reflect.VMReflection.getFieldType(J)Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_java_lang_reflect_VMReflection_getFieldType
    (JNIEnv *, jclass, jlong);

/*
 * Method: java.lang.reflect.VMReflection.invokeMethod(JLjava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
 * Throws: java.lang.reflect.InvocationTargetException
 */
JNIEXPORT jobject JNICALL Java_java_lang_reflect_VMReflection_invokeMethod
    (JNIEnv *, jclass, jlong, jobject, jobjectArray);

/*
 * Method: java.lang.reflect.VMReflection.newArrayInstance(Ljava/lang/Class;[I)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_java_lang_reflect_VMReflection_newArrayInstance
    (JNIEnv *, jclass, jclass, jintArray);

/*
 * Method: java.lang.reflect.VMReflection.newClassInstance(J[Ljava/lang/Object;)Ljava/lang/Object;
 * Throws: java.lang.reflect.InvocationTargetException
 */
JNIEXPORT jobject JNICALL Java_java_lang_reflect_VMReflection_newClassInstance
    (JNIEnv *, jclass, jlong, jobjectArray);


#ifdef __cplusplus
}
#endif

#endif /* _JAVA_LANG_REFLECT_VMREFLECTION_H */
