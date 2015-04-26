/*
 * DISTRHO XuXu Plugin
 * Copyright (C) 2015 Filipe Coelho <falktx@falktx.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * For a full copy of the GNU General Public License see the LICENSE file.
 */

#include "DistrhoPluginXuXu.hpp"
#include "DistrhoUIXuXu.hpp"

START_NAMESPACE_DISTRHO

// -----------------------------------------------------------------------

DistrhoUIXuXu::DistrhoUIXuXu()
    : UI(300, 300)
{
}

// -----------------------------------------------------------------------
// DSP Callbacks

void DistrhoUIXuXu::parameterChanged(uint32_t index, float /*value*/)
{
    switch (index)
    {
    /*
    case kParam:
        fKnobFreq->setValue(value);
        break;
   */
    }
}

void DistrhoUIXuXu::stateChanged(const char*, const char*)
{
}

// -----------------------------------------------------------------------
// Widget Callbacks

void DistrhoUIXuXu::onDisplay()
{
}

// -----------------------------------------------------------------------

UI* createUI()
{
    return new DistrhoUIXuXu();
}

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO
