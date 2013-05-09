/*
 * md5.c
 *
 *  Created on: Oct 9, 2012
 *      Author: chris
 */
#include <android/log.h>
#include <stdio.h>

#include "wo_yinyuetai_utils_S2K.h"
#include "md5.h"

JNIEXPORT jstring JNICALL Java_wo_yinyuetai_utils_S2K_s2k
  (JNIEnv *env , jobject obj, jstring encrypt_s ){

	/*	获取 输入的字符串	*/
	char *input = NULL;
	input = (char*) (*env)->GetStringUTFChars(env, encrypt_s, NULL);
	__android_log_print(ANDROID_LOG_INFO, "chris_magic", "input string is  +%s+ ",
			input);

	/*	输出		？？*/

//	char* tmpstr = "return string succeeded";
//	   jstring rtstr = env->NewStringUTF(tmpstr);

	jstring output;
	unsigned char flash_encrypt_k[38] = {0};
	//invoke function
	s2k(input ,flash_encrypt_k);

	__android_log_print(ANDROID_LOG_INFO, "chris_magic", "output string is  +%s+ ",
			flash_encrypt_k);

	//end
	(*env)->ReleaseStringUTFChars(env, encrypt_s, input);

	output = (*env)->NewStringUTF(env ,flash_encrypt_k);
	return output;
}
