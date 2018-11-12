###############################################################################
#
# 
#
###############################################################################
THIS_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
powerpc_dm4370_INCLUDES := -I $(THIS_DIR)inc
powerpc_dm4370_INTERNAL_INCLUDES := -I $(THIS_DIR)src
powerpc_dm4370_DEPENDMODULE_ENTRIES := init:powerpc_dm4370 ucli:powerpc_dm4370

