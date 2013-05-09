LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES:=wo_yinyuetai_utils_S2K.c \
				md5.c

LOCAL_C_INCLUDES := $(JNI_H_INCLUDE)

#LOCAL_C_INCLUDES += \
#/home/chris/work/ffmpeg/refs/android/include

LOCAL_MODULE := s2k_chris

LOCAL_SHARED_LIBRARIES := libutils

LOCAL_LDLIBS := -fpic -g -D_CHRIS -llog  
#LOCAL_LDLIBS := -fpic -D_CHRIS -llog -lstagefright -lz   -lbinder -lstdc++ -lstlport -lutils -L/home/chris/work/android/toolchain/sysroot/usr/lib  -lavformat -lavcodec -lswscale -lavutil 
# -L/home/chris/work/android/android-ndk-r8/sources/cxx-stl/gnu-libstdc++/libs/armeabi-v7a -lgnustl_static


LOCAL_PRELINK_MODULE := false

LOCAL_PROGUARD_ENABLED := disabled

#APP_STL := gnustl_static
#LOCAL_ALLOW_UNDEFINED_SYMBOLS := true

include $(BUILD_SHARED_LIBRARY)
