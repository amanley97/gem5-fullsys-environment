#
# DO NOT EDIT THIS FILE!
# File automatically generated by
#   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/StateMachine.py:295
#

from m5.params import *
from m5.SimObject import SimObject
from m5.objects.Controller import RubyController

class Memory_Controller(RubyController):
    type = 'Memory_Controller'
    cxx_header = 'mem/ruby/protocol/Memory_Controller.hh'
    cxx_class = 'gem5::ruby::Memory_Controller'
    response_latency = Param.Cycles((2), "")
    data_latency = Param.Cycles((1), "")
    to_memory_controller_latency = Param.Cycles((1), "")
    data_channel_size = Param.Int("")
    reqOut = Param.MessageBuffer("")
    snpOut = Param.MessageBuffer("")
    rspOut = Param.MessageBuffer("")
    datOut = Param.MessageBuffer("")
    reqIn = Param.MessageBuffer("")
    snpIn = Param.MessageBuffer("")
    rspIn = Param.MessageBuffer("")
    datIn = Param.MessageBuffer("")
    reqRdy = Param.MessageBuffer("")
    requestToMemory = Param.MessageBuffer("")
    responseFromMemory = Param.MessageBuffer("")
    triggerQueue = Param.MessageBuffer("")
