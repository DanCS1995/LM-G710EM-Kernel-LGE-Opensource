#########################################################################
#                   aac_lg static library build                         #
#########################################################################
LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MULTILIB := both

aacdec_sources := $(sort $(wildcard $(LOCAL_PATH)/libAACdec/src/*.cpp))
aacdec_sources := $(aacdec_sources:$(LOCAL_PATH)/libAACdec/src/%=%)

pcmutils_sources := $(sort $(wildcard $(LOCAL_PATH)/libPCMutils/src/*.cpp))
pcmutils_sources := $(pcmutils_sources:$(LOCAL_PATH)/libPCMutils/src/%=%)

fdk_sources := $(sort $(wildcard $(LOCAL_PATH)/libFDK/src/*.cpp))
fdk_sources := $(fdk_sources:$(LOCAL_PATH)/libFDK/src/%=%)

sys_sources := $(sort $(wildcard $(LOCAL_PATH)/libSYS/src/*.cpp))
sys_sources := $(sys_sources:$(LOCAL_PATH)/libSYS/src/%=%)

mpegtpdec_sources := $(sort $(wildcard $(LOCAL_PATH)/libMpegTPDec/src/*.cpp))
mpegtpdec_sources := $(mpegtpdec_sources:$(LOCAL_PATH)/libMpegTPDec/src/%=%)

sbrdec_sources := $(sort $(wildcard $(LOCAL_PATH)/libSBRdec/src/*.cpp))
sbrdec_sources := $(sbrdec_sources:$(LOCAL_PATH)/libSBRdec/src/%=%)

LOCAL_SRC_FILES := \
    $(aacdec_sources:%=/libAACdec/src/%) \
    $(pcmutils_sources:%=/libPCMutils/src/%) \
    $(fdk_sources:%=/libFDK/src/%) \
    $(sys_sources:%=/libSYS/src/%) \
    $(mpegtpdec_sources:%=/libMpegTPDec/src/%) \
    $(sbrdec_sources:%=/libSBRdec/src/%)

LOCAL_CFLAGS := -DANDROID
LOCAL_CFLAGS += -Wno-sequence-point -Wno-extra
LOCAL_CPPFLAGS += -std=c++98

ifeq ($(strip $(MTK_USE_ANDROID_MM_DEFAULT_CODE)),yes)
LOCAL_CFLAGS += -DANDROID_DEFAULT_CODE
endif

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/libAACdec/include \
    $(LOCAL_PATH)/libPCMutils/include \
    $(LOCAL_PATH)/libFDK/include \
    $(LOCAL_PATH)/libSYS/include \
    $(LOCAL_PATH)/libMpegTPDec/include \
    $(LOCAL_PATH)/libSBRdec/include \
    $(TOP)/system/core/include \
    $(TOP)/system/core/libutils/include \
    $(TOP)/frameworks/av/include \
    $(TOP)/frameworks/av/media/libmedia/include \
    $(TOP)/frameworks/av/media/libstagefright/include \
    $(TOP)/frameworks/native/include/media/openmax

LOCAL_ARM_MODE := arm

LOCAL_MODULE:= libmtvaacdec
LOCAL_VENDOR_MODULE := true
include $(BUILD_STATIC_LIBRARY)
