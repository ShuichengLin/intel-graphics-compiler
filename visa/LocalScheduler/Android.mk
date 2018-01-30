# Copyright 2014 Intel Corporation All Rights Reserved.
#
# The source code, information and material ("Material") contained
# herein is owned by Intel Corporation or its suppliers or licensors,
# and title to such Material remains with Intel Corporation or its
# suppliers or licensors. The Material contains proprietary information
# of Intel or its suppliers and licensors. The Material is protected by
# worldwide copyright laws and treaty provisions. No part of the
# Material may be used, copied, reproduced, modified, published,
# uploaded, posted, transmitted, distributed or disclosed in any way
# without Intel's prior express written permission. No license under any
# patent, copyright or other intellectual property rights in the
# Material is granted to or conferred upon you, either expressly, by
# implication, inducement, estoppel or otherwise. Any license under such
# intellectual property rights must be express and approved by Intel in
# writing.
#
# Unless otherwise agreed by Intel in writing, you may not remove or alter
# this notice or any other notice embedded in Materials by Intel or Intel's
# suppliers or licensors in any way.

ufo_local_path := $(call my-dir)
include $(ufo_local_path)/../../../Tools/Linux/ufo-android-includes.mk

ifeq ($(BUILD_TYPE),release)
    include $(UFO_CLEAR_VARS)
    UFO_LOCAL_PATH := $(ufo_local_path)
    UFO_LOCAL_MODULE := libigc_visa_scheduler
    UFO_LOCAL_REQUIRED_MODULES :=
    UFO_LOCAL_LINKED_MODULES :=
    UFO_LOCAL_MODULE_CLASS := STATIC_LIBRARIES
    UFO_LOCAL_ACTIVE_CFG := $$(CAP_BUILD_TYPE)$$(INTERNAL)-$$(ARX)
    UFO_LOCAL_VCXPROJ_PATH := vISA_LocalScheduler.vcxproj
    UFO_LOCAL_VCXPROJ_LIBNAME :=
    include $(UFO_BUILD_MODULE)
endif
