#!/usr/bin/python

from onl.platform.base import *
from onl.platform.datacom import *

class OnlPlatform_powerpc_dm4370_r0(OnlPlatformDatacom,
                                    OnlPlatformPortConfig_48x10_6x40):
    PLATFORM='powerpc-dm4370-r0'
    MODEL='dm4370'
    SYS_OBJECT_ID='.4370'