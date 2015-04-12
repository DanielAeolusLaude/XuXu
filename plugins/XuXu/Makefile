#!/usr/bin/make -f
# Makefile for DISTRHO Plugins #
# ---------------------------- #
# Created by falkTX
#

# --------------------------------------------------------------
# Project name, used for binaries

NAME = XuXu

# --------------------------------------------------------------
# Files to build

OBJS_DSP = \
	DistrhoPluginXuXu.cpp.o

OBJS_UI  = \
	DistrhoUIXuXu.cpp.o

# --------------------------------------------------------------
# Do some magic

include ../Makefile.mk

# --------------------------------------------------------------
# Enable all possible plugin types

ifeq ($(HAVE_JACK),true)
TARGETS += jack
endif

ifeq ($(LINUX),true)
ifeq ($(HAVE_LIBLO),true)
TARGETS += dssi
endif
endif

TARGETS += lv2_sep
TARGETS += vst

all: $(TARGETS)

# --------------------------------------------------------------
